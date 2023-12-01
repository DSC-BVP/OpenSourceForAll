public class rotatedSortedArraySearch {
    public static void main(String[] args) {
        int[] a = {5, 6, 7, 8, 9, 1, 2, 3, 4};
        int l = a.length;
        int c = checkSorted(a,l);
        System.out.println(c);

    }

    public static int checkSorted(int[] a, int l) {
        int target = 6;
        int start = 0;
        int end = l - 1;
        int mid = 0;
        while (start <= end) {
            mid = (start + end) / 2;
            if (a[mid]==target){
                return mid;
            }
            if (a[0] <= a[mid]) {
                if ((a[0] <= target) && (a[mid] > target)) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else {
                if ((a[mid] < target) && (a[end] >= target)) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;

    }
}
}
