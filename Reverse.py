class Node:
	def __init__(self,data):
		self.data=data
		self.next=None

def take_input():
	l=[int(i) for i in input().split(' ')]
	head=None
	tail=None
	for currd in l:
		if currd==-1:
			return head
		newnode=Node(currd)
		if head is None:
			head=newnode
			tail=newnode
		else:
			tail.next=newnode
			tail=newnode
	return head

def printl(head):
	while head is not None:
		print(head.data,end='')
		head=head.next
#O(n^2)
# def reversel1(head):
# 	if head.next is None or head is None:
# 		return head
	
# 	shead=reversel1(head.next)
# 	curr=shead
# 	while curr.next is not None:
# 		curr=curr.next
# 	curr.next=head
# 	head.next=None

# 	return shead

#O(n)
def reversel2(head):
	if head.next is None or head is None:
		return head,head
	tail,shead=reversel2(head.next)
	tail=head.next
	tail.next=head
	head.next=None
	return head,shead

#BEST SOLUTION
#o(n)
def reversel3(head):
	if head.next is None or head is None:
		return head
	shead=reversel3(head.next)
	tail=head.next
	tail.next=head
	head.next=None

	return shead

def reverselr(head):
	prev=None
	curr=head
	while curr is not None:
		next=curr.next
		curr.next=prev
		prev=curr
		curr=next
	head=prev
	return head
	
head=take_input()
printl(head)
head=reverselr(head)
printl(head)
tail,head=reversel2(head)
printl(head)