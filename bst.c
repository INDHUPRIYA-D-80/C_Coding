#include<stdio.h>
#include<conio.h>

int main()

{

        int a[25], i, n, K, flag = 0, low, high, mid;
		scanf("%d", &n);

        printf("\nEnter the elements below ::\n");

        for (i = 0; i<n; i++)

        {

            printf("Enter %d element :: ",i+1);

                scanf("%d",&a[i]);

        }

        printf("\nEnter the key to be searched :: ");

        scanf("%d",&K);

        low = 0;
		high = n – 1;

        while (low <= high)

        {

                mid = (low+high)/2;

                if(a[mid] == K)

                {

                        flag = 1;

                        break;

                }

                else if(K<a[mid])

                        high = mid-1;

                else

                        low = mid + 1;

        }

        if (flag == 1)

        {

                printf("Key element is found");

        }

        else

        {

                printf("Key element not found");

        }

        return 0;

}
