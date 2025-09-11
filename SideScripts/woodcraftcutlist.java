import java.util.ArrayList;
import java.util.Scanner;
import java.text.DecimalFormat;

public class WoodcraftCutlist {

    static class Part {
        String name;
        int quantity;
        double thickness;
        double width;
        double length;
        double boardFeet;
    }

    public static double calculateBoardFeet(double thickness_in, double width_in, double length_ft) {
        if (thickness_in < 1.0) {
            thickness_in = 1.0;
        }
        return (thickness_in * width_in * length_ft) / 12.0;
    }

    public static void main(String[] args) {
        System.out.println("--- Woodworking Project Cut List Generator ---");
        
        ArrayList<Part> cutList = new ArrayList<>();
        double totalBoardFeet = 0.0;
        Scanner scanner = new Scanner(System.in);
        
        while (true) {
            System.out.print("\nEnter part name ('done' to finish): ");
            String partName = scanner.nextLine();
            if (partName.equalsIgnoreCase("done")) {
                break;
            }
            
            try {
                Part newPart = new Part();
                newPart.name = partName;
                
                System.out.print("How many " + newPart.name + "s do you need? ");
                newPart.quantity = scanner.nextInt();
                System.out.print("Enter thickness of " + newPart.name + "s (in inches): ");
                newPart.thickness = scanner.nextDouble();
                System.out.print("Enter width of " + newPart.name + "s (in inches): ");
                newPart.width = scanner.nextDouble();
                System.out.print("Enter length of " + newPart.name + "s (in feet): ");
                newPart.length = scanner.nextDouble();
                
                newPart.boardFeet = calculateBoardFeet(newPart.thickness, newPart.width, newPart.length) * newPart.quantity;
                totalBoardFeet += newPart.boardFeet;
                cutList.add(newPart);
                
                scanner.nextLine(); // Consume the rest of the line
            } catch (java.util.InputMismatchException e) {
                System.out.println("Invalid input. Please enter a valid number for dimensions.");
                scanner.nextLine(); // Clear the buffer
            }
        }
        
        System.out.println("\n--- Final Cut List ---");
        if (cutList.isEmpty()) {
            System.out.println("No items added to the cut list.");
        } else {
            DecimalFormat df = new DecimalFormat("#.##");
            System.out.printf("%-20s %-10s %-10s %-10s %-10s %-10s%n", "Part", "Qty", "T(in)", "W(in)", "L(ft)", "Bd.Ft.");
            System.out.println("----------------------------------------------------------------------");
            
            for (Part item : cutList) {
                System.out.printf("%-20s %-10s %-10s %-10s %-10s %-10s%n", 
                    item.name, 
                    item.quantity, 
                    df.format(item.thickness), 
                    df.format(item.width), 
                    df.format(item.length), 
                    df.format(item.boardFeet));
            }
            
            System.out.println("----------------------------------------------------------------------");
            System.out.println("Total estimated board feet needed: " + df.format(totalBoardFeet) + " Bd.Ft.");
            System.out.println("Remember to account for waste!");
        }

        scanner.close();
    }
}