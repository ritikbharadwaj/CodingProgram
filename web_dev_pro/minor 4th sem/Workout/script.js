document.getElementById("bmiForm").addEventListener("submit", function(event) {
    event.preventDefault(); // Prevent form submission

    // Get BMI input value
    var bmi = parseFloat(document.getElementById("bmi").value);

    // Display the result
    var result = document.getElementById("result");

    // Suggest a workout based on BMI
    if (bmi < 18.5) {
        result.innerHTML = "Your BMI is " + bmi.toFixed(2) + "<br>";
        result.innerHTML += "Suggested workout: Resistence Training" + "<br>" ;
        result.innerHTML += "<br>" + "Day 1: Upper Body Focus" + "<br>" + "<br>" + "<br>" +

        "1. Push-ups: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "2. Dumbbell Shoulder Press: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "3. Bent-Over Rows: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "4. Dumbbell Chest Press: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "5. Lat Pulldowns: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "6. Bicep Curls: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "7. Tricep Dips: 3 sets of 10-12 reps"  + "<br>" + "<br>" + "<br>" +
         
        "Day 2: Lower Body Focus" + "<br>" + "<br>" + "<br>" +

        "1. Squats: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "2. Lunges: 3 sets of 10-12 reps per leg" + "<br>" + "<br>" +
        "3. Deadlifts: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "4. Leg Press: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "5. Calf Raises: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "6. Hamstring Curls: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "7. Glute Bridges: 3 sets of 10-12 reps"  + "<br>" + "<br>" + "<br>" +
        
        "Day 3: Full Body and Core Focus" + "<br>" + "<br>" + "<br>" +

        "1. Barbell Bench Press: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "2. Lunges: 3 sets of 10-12 reps per leg" + "<br>" + "<br>" +
        "3. Lat Pulldowns: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "4. Overhead Press: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "5. Squats: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "6. Romanian Deadlifts: 3 sets of 10-12 reps" + "<br>" + "<br>" +
        "7. Plank: Hold for 30-60 seconds, repeat 3 times" + "<br>" + "<br>" +

        `Perform this workout routine 3 days per week, with a rest day in between each session. On your rest days, you can engage in light cardio exercises or activities of your choice. Remember to warm up before each session and cool down and stretch afterward to prevent injury and promote flexibility.`

    } else if (bmi >= 18.5 && bmi < 25) {
        result.innerHTML = "Your BMI is " + bmi.toFixed(2) + "<br>";
        result.innerHTML += "<br>" + "Day 1: Cardiovascular Exercise" + "<br>" + "<br>" + "<br>" +

        "1. Activity: Running" + "<br>" + "<br>" +
        "2. Duration: 30 minutes" + "<br>" + "<br>" +
        "3. Intensity: Moderate to high intensity" + "<br>" + "<br>" +
        "Note: Adjust the duration and intensity based on your fitness level." + "<br>" + "<br>" +
                 
        "Day 2: Strength Training" + "<br>" + "<br>" + "<br>" +

        "1. Exercises: Target all major muscle groups" + "<br>" + "<br>" +
        `2. Example exercises:
        Squats (legs)
        Push-ups (chest, shoulders, triceps)
        Bent-over rows (back, biceps)
        Shoulder press (shoulders)
        Lunges (legs)
        Plank (core)
        Bicep curls (biceps)
        Tricep dips (triceps)` + "<br>" + "<br>" +
        "Perform 3 sets of 8-12 repetitions for each exercise with appropriate weights."  + "<br>" + "<br>" + "<br>" +
        
        "Day 3: Flexibility and Mobility" + "<br>" + "<br>" + "<br>" +

        "1. Activity: Yoga class or a guided stretching routine" + "<br>" + "<br>" +
        "2. Duration: 30-45 minutes" + "<br>" + "<br>" +
        "3. Focus on stretching major muscle groups and improving overall flexibility and mobility." + "<br>" + "<br>" +

        "Day 7: Core Strength" + "<br>" + "<br>" + "<br>" +

        "1. Exercises: Focus on core muscles (abdominals, lower back, hips)" + "<br>" + "<br>" +
       `Example exercises:
       Planks
       Russian twists
       Bicycle crunches
       Leg raises
       Mountain climbers
       Side planks
       Superman exercises` + "<br>" + "<br>" ;

    } else if (bmi >= 25 && bmi < 30) {
        result.innerHTML = "Your BMI is " + bmi.toFixed(2) + "<br>";
        result.innerHTML += "<br>" + "Day 1:" + "<br>" + "<br>" + "<br>" +

        "1. 30 minutes of cycling (moderate to high intensity)" + "<br>" +
        "2. Strength training: Squats, lunges, push-ups, and dumbbell rows (2 sets of 8-12 repetitions for each exercise)" + "<br>" +
        "3. 15-20 minutes of HIIT: Alternating between 30 seconds of burpees and 30 seconds of walking in place" + "<br>" +
        "4. 5-10 minutes of stretching for the cool down" + "<br>" + "<br>" +
                 
        "Day 2:" + "<br>" + "<br>" + "<br>" +

        "Rest day or light activity like swimming or Pilates for active recovery" + "<br>" + "<br>" +
        
        "Day 3:" + "<br>" + "<br>" +
        "1. 30 minutes of running (moderate to high intensity)"  + "<br>" + 
        "2. Strength training: Deadlifts, bench presses, pull-ups, and overhead presses (2 sets of 8-12 repetitions for each exercise)" + "<br>" + 
        "3. 15-20 minutes of HIIT: Alternating between 30 seconds of sprinting and 30 seconds of jogging"  + "<br>" + 
        "4. 5-10 minutes of stretching for the cool down"  + "<br>" + "<br>" +
        
        "Day 4:" + "<br>" + "<br>" + "<br>" +

        "Rest day or light activity like swimming or Pilates for active recovery" + "<br>" + "<br>" +

        "Day 5:" + "<br>" + "<br>" +  "<br>" +
        "1. 30 minutes of elliptical or rowing machine (moderate to high intensity)" + "<br>" +
        "2. Strength training: Step-ups, tricep dips, bicep curls, and lateral raises (2 sets of 8-12 repetitions for each exercise)" + "<br>" +
        "3. 15-20 minutes of HIIT: Alternating between 30 seconds of jumping jacks and 30 seconds of rest"  + "<br>" +
        "4. 5-10 minutes of stretching for the cool down" + "<br>" + "<br>" +

        "Day 6 and 7:" + "<br>" + "<br>" + "<br>" +

        "Rest day or light activity like swimming or Pilates for active recovery" ;
    } else {
        result.innerHTML = "Your BMI is " + bmi.toFixed(2) + "<br>";
        result.innerHTML += `1. Consult a healthcare professional: Before starting any new exercise program, it's advisable to consult with a healthcare professional who can provide personalized guidance based on your specific health condition and fitness level.` + "<br>" + "<br>" +
        `2. Low-impact cardio exercises: Begin with low-impact cardio exercises to reduce stress on the joints. Options include brisk walking, stationary cycling, swimming, water aerobics, or using an elliptical machine. Aim for at least 30 minutes of moderate-intensity cardio, three to five times a week. Gradually increase the duration and intensity over time.` + "<br>" + "<br>" +

        `3. Strength training with modifications: Strength training is important for building muscle and increasing metabolism. Start with bodyweight exercises or resistance bands, focusing on proper form and technique. Modified exercises can include chair squats, wall push-ups, assisted lunges, and seated or lying leg lifts. Begin with two to three sets of 8-12 repetitions for each exercise, targeting major muscle groups. Aim for strength training workouts two to three times a week.`+ "<br>" + "<br>" +

        `4. Gradual progression: Progress gradually by increasing the intensity, duration, and complexity of your workouts. This will help avoid overexertion and reduce the risk of injury. Listen to your body and take rest days as needed.`  + "<br>" + "<br>" +

        `5. Supportive environment: Consider joining a fitness class or working with a certified personal trainer who has experience working with individuals with higher BMIs. They can provide guidance, support, and appropriate modifications tailored to your needs.`  + "<br>" + "<br>" +

        `6. Focus on nutrition: Remember that exercise alone may not be sufficient for weight loss. Combining your workout routine with a balanced, calorie-controlled diet is essential for achieving sustainable weight loss. Consult with a registered dietitian for personalized dietary advice.`;
    }
});
