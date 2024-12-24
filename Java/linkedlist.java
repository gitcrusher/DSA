import java.util.Scanner;

class linkedlist{
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
            this.next = null;
        }
    }
    private Node head;
    
    public void add(int data){
        Node newNode = new Node(data);
        
        if(head == null){
            head = newNode;
        }else{
            Node current = head;
            while(current != null){
                current = current.next;
            }
            current.next = newNode;
        }
    }

    public void display(){
        if(head==null){
            System.out.println("node is empty!");
        }
        else{
            Node current = head;
            while(current!=null){
                System.out.println(current.data + " -> ");
                current = current.next;
            }
            System.out.println("null");
        }
    }

    public static void main (String[] args){
        linkedlist list = new linkedlist();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements to add to the linked list: ");
        int n = scanner.nextInt();
        System.out.println("Enter "+n+" elements:");
        for(int i = 0 ; i < n ; i++){
            int element = scanner.nextInt();
            list.add(element);
        }
        System.out.println("Elements in the linked list:");
        list.display();
        scanner.close();
    }
}