class p2
{
    static int func(int arr[],int n,int c)
    {
        for(int i=0;i<n;i++){
            if ( arr[i]==c )
                return i;
               
        }
        return -1;
    }
    public static void main(String args[])
    {
        int arr[]={1,4,3,6,7,9};
        int n=arr.length;
        int c=6;
        int position = func(arr,n,c);
        if (position == -1){ 
            System.out.println("ELEMENT NOT FOUND ");

         }
        else{ 
            System.out.println("ELEMENT FOUND AT INDEX " + (position + 1) );   
         }
         
    }
}
