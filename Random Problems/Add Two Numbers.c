/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdlib.h>

typedef struct ListNode
{
	int				val;
	struct ListNode	*next;
};

struct ListNode *createNode(int val)
{
	struct ListNode *ptr = (struct ListNode *)malloc(sizeof(struct ListNode));
	ptr -> val = val;
	ptr -> next = NULL;
	return (ptr);
}

struct ListNode	*addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	int				carry_forward;
	int				sum;
	struct ListNode	*ptr;
	struct ListNode	*dummy_head;
	struct ListNode	*result;

	carry_forward = 0;
	dummy_head = createNode(0);
	ptr = dummy_head;
	while (l1 != NULL || l2 != NULL || carry_forward > 0)
	{
		sum = carry_forward;
		if (l1 != NULL)
		{
			sum += l1 -> val;
			l1 = l1 -> next;
		}
		if (l2 != NULL)
		{
			sum += l2 -> val;
			l2 = l2 -> next;
		}
		carry_forward = sum / 10;
		ptr -> next = createNode(sum % 10);
		ptr = ptr -> next;
	}
	result = dummy_head -> next;
	free (dummy_head);
	return (result);
}
