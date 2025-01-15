document.getElementById("registrationForm").addEventListener("submit", function (event) {
    event.preventDefault(); // Prevent page refresh

    const name = document.getElementById("name").value;
    const email = document.getElementById("email").value;
    const date = document.getElementById("date").value;
    const venue = document.getElementById("venue").value;

    const registration = { name, email, date, venue };

    let registrations = JSON.parse(localStorage.getItem("registrations")) || [];
    registrations.push(registration);

    localStorage.setItem("registrations", JSON.stringify(registrations));

    document.getElementById("successMessage").style.display = "block";
    document.getElementById("registrationForm").reset();
});
