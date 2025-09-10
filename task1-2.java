//Элемент типа список на джава
ArrayList<String> list = new ArrayList<String>();
//пример кода для организации стека на java
MyStack<Integer> stack = new MyStack<>(10);
stack.push(10);
stack.push(20);
stack.push(30);
System.out.println(stack.pop()); // 30;
System.out.println(stack.peek()); // 20;
System.out.println(stack.isEmpty()); // false;
System.out.println(stack.size()); // 2.  
