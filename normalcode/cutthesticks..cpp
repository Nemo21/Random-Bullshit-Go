/* int n for array length 
type arrayname[size i.e n]
for(i =1;i<=arrayname.length;i++)
take one as min and then compare to all elements to min and 
if large element found swap the value of main with int
this is how we get the value of min and then store it in temp variable 
take old array nd subract min from each element 
by first creatin an eqn where x=x-2;
and iterate the currect x from all elements of the old array to get the resultent array
this procedure will be iterating till the length of the old array becomes 1 or 0 */

//array length=5;
//  old array= [0,1,2,3,4]
// new array chosen as [0-0,1-0,2-0,3-0,4-0]
int* cutSticks(int lengths_size, int *lengths, int *result_size) {
    int i; // idk why declare? anyway
  	int *arr; //pointer arr 
  	int n=lengths_size; //length of old array
  	arr=(int*)malloc(sizeof(int)*lengths_size); // type arrayname[size]
    int min,count=0,count1=0,k=0; // min is the smallest num, 
    while(count1!=n) //count1 is actually the number of iterations goin to happen on the old array i.e its length
    {
        count=0; 
        count1=0;
            for(i=0;i<n;i++) // i is taken to represent the index numbers of array 
                {
                    if(lengths[i]!=0) //iterating through the array to find min
                    {
                        min=lengths[i]; //here i goes from 0 to n-1 
                        break;
                    }
                    if(lengths[i]<min && lengths[i]!=0) 
                    {
                        min=lengths[i];
                    }
                    if(lengths[i]!=0 && lengths[i]-min>=0) // if array is a then uska indexing a[0],a[1],
                    {
                    lengths[i]=lengths[i]-min;
                    count++;
                    }
                    if(lengths[i]==0)
                    {
                        count1=count1+1;
                    }  
                } 
        arr[k]=count; 
        k++;
    }
  *result_size=k; 
  return arr; // new array that is the result
}