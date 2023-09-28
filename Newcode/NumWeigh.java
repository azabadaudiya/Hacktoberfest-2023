public class NumWeigh 
{
    public static void main(String args[])
    {
        int[] numArray = {10,36,54,89,12};
        int numArraylen = numArray.length;
        
        for(int i=0; i<numArraylen; i++)
            for(int j=i+1; j<numArraylen; j++)
                if(numArray[i] > numArray[j])
                {
                    int temp = numArray[i];
                    numArray[i] = numArray[j];
                    numArray[j] = temp;
                }
        int[] wegArray = new int[numArraylen];
        
        for(int i=0; i<numArraylen; i++)
        {
            wegArray[i] = 0;
            int sq =(int) Math.sqrt(numArray[i]);
            if((sq*sq) == numArray[i])
                wegArray[i] = wegArray[i] + 5;
     
            if(numArray[i]%4==0 || numArray[i]%6==0)
                wegArray[i] = wegArray[i] + 4;
     
            if(numArray[i]%2 == 0)
                wegArray[i] = wegArray[i] + 3;
            
        }
        
        for(int i=0; i<numArraylen; i++)
            System.out.print("<"+numArray[i]+", "+wegArray[i]+">,");
    }
}
