public class SuggestionEngine {
    public static String getSuggestion(double distance) {
        if (distance <= 1.0) {
            return "Walking there";
        } else if (distance > 1.0 && distance <= 3.0) {
            return "Cycling";
        } else if (distance > 3.0 && distance <= 10.0) {
            return "Using Bus";
        } else {
            return "Car/Bike (try to carpool or use public transport if available)";
        }
    }

    public static String getSuggestedTransport(double distance) {
        if (distance <= 1.0) {
            return "Walking there";
        } else if (distance > 1.0 && distance <= 3.0) {
            return "Cycling";
        } else if (distance > 3.0 && distance <= 10.0) {
            return "Using Bus";
        } else {
            return "Bus";
        }
    }

    public static double calculateOptimalEmission(double distance) {
        if (distance <= 1.0) {
            return CarbonCalculator.calculateEmission(distance, "Walking there");
        } else if (distance > 1.0 && distance <= 3.0) {
            return CarbonCalculator.calculateEmission(distance, "Cycling");
        } else if (distance > 3.0 && distance <= 10.0) {
            return CarbonCalculator.calculateEmission(distance, "Using Bus");
        } else {
            return CarbonCalculator.calculateEmission(distance, "Using Bus");
        }
    }

    public static double calculateSavings(double currentEmission, double optimalEmission) {
        double savings = currentEmission - optimalEmission;
        return savings > 0 ? savings : 0.0;
    }
}
