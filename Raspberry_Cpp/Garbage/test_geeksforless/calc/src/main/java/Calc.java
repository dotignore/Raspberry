import java.util.Scanner;
import java.util.Stack;

public class Calc
{

    private Stack<Character> operatorStack;
    private Stack<Double> valueStack;
    private boolean error;

   public static void main(String[] args)
   {
        Scanner input = new Scanner(System.in);

        System.out.println("syntax ( X + X ) ");
        System.out.print("input: ");
        String uInput = input.nextLine();

        Calc calc = new Calc();
        calc.Input(uInput);
    }

    public Calc()
    {
        operatorStack = new Stack<Character>();
        valueStack = new Stack<Double>();
        error = false;
    }


    private boolean Operators(char ch)
    {
        return ch == '+' ||
                ch == '-' ||
                ch == '*' ||
                ch == '/';
    }

    private int Precedence(char ch)
    {
        if (ch == '+' || ch == '-')
        {
            return 1;
        }
        if (ch == '*' || ch == '/')
        {
            return 2;
        }
        return 0;
    }

    private void Operator(char t)
    {

        double a, b, r = 0;

        if (valueStack.empty())
        {
            System.out.println("error input Num");
            error = true;
            return;
        }
        else
        {
            b = valueStack.peek();
            valueStack.pop();
        }

        if (valueStack.empty())
        {
            System.out.println("error input Operator");
            error = true;
            return;
        }
        else
        {
            a = valueStack.peek();
            valueStack.pop();
        }

        if (t == '+')
        {
            r = a + b;
        }
        else if (t == '-')
        {
            r = a - b;
        }
        else if (t == '*')
        {
            r = a * b;
        }
        else if (t == '/')
        {
            r = a / b;
        }
        valueStack.push(r);
    }

    public void Input(String input)
    {

        String[] Arrays = input.split(" ");

        // input decode
        for (int n = 0; n < Arrays.length; n++)
        {
            String sArray = Arrays[n];
            char ch = sArray.charAt(0);

            if (ch >= '0' && ch <= '9')
            {
                double v = Double.parseDouble(sArray);
                valueStack.push(v);
            }
            else if (Operators(ch))
            {
                if (operatorStack.empty() || Precedence(ch) > Precedence(operatorStack.peek()))
                {
                    operatorStack.push(ch);
                }
                else
                {
                    while (!operatorStack.empty() && Precedence(ch) <= Precedence(operatorStack.peek()))
                    {
                        char toProcess = operatorStack.peek();
                        operatorStack.pop();
                        Operator(toProcess);
                    }
                    operatorStack.push(ch);
                }
            }
            else if (ch == '(')
            {
                operatorStack.push(ch);
            }
            else if (ch == ')')
            {
                while (!operatorStack.empty() && Operators(operatorStack.peek()))
                {
                    char toProcess = operatorStack.peek();
                    operatorStack.pop();
                    Operator(toProcess);
                }
                if (!operatorStack.empty() && operatorStack.peek() == '(')
                {
                    operatorStack.pop();
                }
                else
                {
                    System.out.println("error input \")\" ");
                    error = true;
                }
            }

        }

        while (!operatorStack.empty() && Operators(operatorStack.peek()))
        {
            char toProcess = operatorStack.peek();
            operatorStack.pop();
            Operator(toProcess);
        }

        if (error == false)
        {
            double res = valueStack.peek();
            System.out.println("res: " + res);
        }
    }
}