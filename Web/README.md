# ECE Pulse Software Competition

## Web Competition

Your name is Alex Doe, and you are a photographer living in Champaign, IL. Due to an error on your server, your existing CSS has been deleted, and you can no longer edit any HTML. As a result, your portfolio website is broken. You can add JavaScript as needed, but cannot use external libraries other than the latest stable release of jQuery (which is already in index.html)
Your images are thankfully still on the server.

### Level 1 - Styling

You are given markup in `index.html`. If you view this in a web browser, it does not look pretty. Edit the `index.css` file in the `assets` folder to make the webpage look like a portfolio page again. Reminder: You can NOT edit anything but the CSS unless otherwise specified. You can use external resources such as web fonts and icon fonts (look at index.css for more info), but NOT external CSS libraries – we'll know if you did. Feel free to look around the internet for inspiration. You've also been given descriptive class names, but you don't have to work off of those.

Judging Criteria: CSS code quality, and Web Design skills.

### Level 2 - Dynamically updating images

First, complete Level 1.

When the button with the id `fetch-more-photos` is pressed, request some photos from a photo hosting service such as Flickr, 500px or Unsplash (and so on...) and add them to the list of the images in the portfolio. Every time the button is pressed, you have to fetch and append 6 images to the existing list. However, you can only have a total of 36 images on the page at any given point in time. When you reach the limit of 36 images and the button is pressed again, remove all the pictures except the original 6 that were already on the page. Once this happens, you should be able to add more images normally, as described. Put your code in `assets/index.js`. You can NOT use any external JavaScript other than jQuery (which has already been provided).

Judging Criteria: JavaScript code quality, and complete functionality as described above.

### Level 3 - Carousel

First, complete Level 1 and 2.

Write some JavaScript to converts all the given images into a Carousel or Slideshow on the webpage. You should be able to append pictures to your Carousel/Slideshow as described in Level 2. Images autoplay to the next picture every 3 seconds, but you can click on the current image to advance it to the next slide before 3 seconds are up. The rest of the implementation is up to you. Again, you can only use jQuery, and no other library. You can, however, search the internet for inspiration – don't copy code, or we'll know. :)

Judging Criteria: JavaScript code quality, complete functionality as described above, and polished implementation.

### Level 4

Make a proof of concept demo to showcase one of the cool, [new HTML5 JavaScript APIs](http://www.htmlgoodies.com/html5/javascript/a-5-minute-overview-of-all-new-javascript-apis-in-html5.html). 

This challenge is purposely left open-ended; be creative!
