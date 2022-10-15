package testcode;

public class CircularLinkedList {

	//Represent Node
	public class Node {
		int data;
		Node next;

		public Node(int data) {
			this.data = data;
		}
	}

	// Initially head and tail pointer as null.
	public Node head = null;
	public Node tail = null;

	//To add the new node at the end of the list.
	public void add(int data) {
		// Create new node
		Node newNode = new Node(data);
		// Checks if the list is empty.
		if (head == null) {
			// If list is empty, both head and tail would point to new node.
			head = newNode;
			tail = newNode;
			newNode.next = head;
		} else {
			//If list is not empty tail will point to new node.
			tail.next = newNode;
			// New node will become new tail.
			tail = newNode;
			// circular linked list tail will point to head.
			tail.next = head;
		}
	}

	// Displays all the nodes in the list
	public void display() {
		Node current = head;
		if (head == null) {
			System.out.println("Empty list");
		} else {
			System.out.println("Nodes of the circular linked list: ");
			do {
				// Prints each node by incrementing pointer.
				System.out.print(" " + current.data);
				current = current.next;
			} while (current != head);
		}
	}

	public static void main(String[] args) {
		CircularLinkedList cl = new CircularLinkedList();
		// Adds data
		cl.add(9);
		cl.add(2);
		cl.add(8);
		cl.add(4);
		// Displays all the nodes 
		cl.display();
	}

}
