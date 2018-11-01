function ajax_request(argument) {
  let aj = new XMLHttpRequest();

  // The XMLHttpRequest.onreadystatechange property contains the event handler to be called
  // when the "readystatechange" event is fired, that is every time the readyState property of
  // the XMLHttpRequest changes.
  aj.onreadystatechange = function() {
    // If the AJAX is successfull
    if (aj.readyState == 4 && aj.status == 200) {
      console.log(aj.responseText);
      // We update the HTML based on what we just received
      document.querySelector("#update").innerHTML = aj.responseText;
    }
  };
  // Indicate the type of request we are making, and from which URL, as well as indicating it is Async or not
  aj.open("GET", "/api", true);
  aj.send();
}
