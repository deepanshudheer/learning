public class Solution {
    public boolean isValidNumber(String s) {
        s = s.trim();
        if (s.isEmpty()) {
            return false;
        }
        if (s.charAt(0) == '+' || s.charAt(0) == '-') {
            s = s.substring(1);
        }
        
        boolean hasPoint = false;
        boolean hasNumber = false;
        boolean hasE = false;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case 'e':
                case 'E':
                    if (hasE || !hasNumber) {
                        return false;
                    }
                    hasE = true;
                    hasNumber = false;
                    break;
                case '+':
                case '-':
                    if (s.charAt(i - 1) != 'e' && s.charAt(i - 1) != 'E') {
                        return false;
                    }
                    break;
                case '.':
                    if (hasPoint || hasE) {
                        return false;
                    }
                    hasPoint = true;
                    break;
                default:
                    if (Character.isDigit(c)) {
                        hasNumber = true;
                    } else {
                        return false;
                    }
                    break;
            }
        }
        return hasNumber;
    }
}
