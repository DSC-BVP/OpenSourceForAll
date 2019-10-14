public class arrayeqmindex {
	static int ArrayEquilibriumIndex(int[] input) {
		int sum=0;
		int leftsum=0;
		for(int i=0;i<input.length;i++) {
			sum+=input[i];
		}
		for(int i=0;i<input.length;i++) {
			sum-=input[i];
			if(sum==leftsum) {
				return i;
			}
			leftsum+=input[i];
		}
		return -1;
	}

	public static void main(String[] args) {
		int[] ar= {-7,1,5,2,-4,3,0};
		System.out.println(ArrayEquilibriumIndex(ar));
	}

}
