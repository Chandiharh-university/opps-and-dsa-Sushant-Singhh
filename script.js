document.getElementById("registrationForm").addEventListener("submit", function (event) {
    event.preventDefault(); // Prevent page refresh

    const name = document.getElementById("name").value;
    const email = document.getElementById("email").value;
    const date = document.getElementById("date").value;
    const venue = document.getElementById("venue").value;

    const registration = { name, email, date, venue };

    let registrations = JSON.parse(localStorage.getItem("registrations")) || [];

    // Sort registrations array for binary search
    registrations.sort((a, b) => a.email.localeCompare(b.email));

    // Binary search function to find existing registration
    function binarySearch(arr, targetEmail) {
        let start = 0;
        let end = arr.length - 1;
        while (start <= end) {
            let mid = Math.floor((start + end) / 2);
            if (arr[mid].email === targetEmail) {
                return mid;
            } else if (arr[mid].email < targetEmail) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    // Check for existing registration
    const existingIndex = binarySearch(registrations, email);
    if (existingIndex !== -1) {
        alert("You have already registered with this email.");
    } else {
        registrations.push(registration);
        localStorage.setItem("registrations", JSON.stringify(registrations));
        document.getElementById("successMessage").style.display = "block";
        document.getElementById("registrationForm").reset();
    }
});

function showRegistrationPage(sport) {
    document.getElementById('registration-page').style.display = 'block';
    document.getElementById('sport').value = sport;
    window.scrollTo(0, document.body.scrollHeight);
}