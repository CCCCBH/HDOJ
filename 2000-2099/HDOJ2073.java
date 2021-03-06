import java.text.DecimalFormat;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        double dis;
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        while (n != 0)
        {
            int x1 = input.nextInt();
            int y1 = input.nextInt();
            int x2 = input.nextInt();
            int y2 = input.nextInt();

            int m1 = x1 + y1;
            int m2 = x2 + y2;
            dis = Math.abs(distance(m1, x1) - distance(m2, x2));
            DecimalFormat df = new DecimalFormat("0.000");
            System.out.println(df.format(dis));
            n--;
        }
    }

    public static double distance(int m, int x)
    {
        int i;
        double sum1 = 0, sum2 = 0, sum3 = 0, sum;
        for (i = 0; i < m - 1; i++)
        {
            sum1 = sum1 + Math.sqrt((i + 1) * (i + 1) + (i + 2) * (i + 2));
        }

        for (i = 0; i < m - 1; i++)
        {
            sum2 = sum2 + Math.sqrt((i + 1) * (i + 1) + (i + 1) * (i + 1));
        }

        if (m > 0)
        {
            sum3 = Math.sqrt(2) * x + 1;
        }
        sum = sum1 + sum2 + sum3;
        return sum;
    }
}

