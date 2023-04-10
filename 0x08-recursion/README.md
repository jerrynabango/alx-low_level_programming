Recursion
* Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.

        int sum(int k);

        int main()
         {
               int result = sum(10);
               printf("%d", result);
               return 0;
          }

        int sum(int k)
        {
            if (k > 0) 
            {
                return k + sum(k - 1);
            } 
            else 
            {
                return 0;
             }
         }
