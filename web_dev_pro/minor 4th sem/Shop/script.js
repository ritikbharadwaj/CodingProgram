// Get the necessary DOM elements
const cartIcon = document.getElementById('cart-icon');
const cart = document.querySelector('.cart');
const closeCart = document.getElementById('close-cart');
const addCartButtons = document.querySelectorAll('.add-cart');
const buyNowButton = document.querySelector('.btn-buy');
const cartContent = document.querySelector('.cart-content');
const cartTotal = document.querySelector('.total-price');

// Event listeners
cartIcon.addEventListener('click', toggleCart);
closeCart.addEventListener('click', toggleCart);
addCartButtons.forEach(button => button.addEventListener('click', addToCart));
cartContent.addEventListener('click', removeCartItem);
buyNowButton.addEventListener('click', buyNow);

// Toggle the visibility of the cart
function toggleCart() {
  cart.classList.toggle('active');
}

// Add a product to the cart
function addToCart(event) {
  const productBox = event.target.parentElement;
  const productImgSrc = productBox.querySelector('.product-img').src;
  const productTitle = productBox.querySelector('.product-title').textContent;
  const productPrice = productBox.querySelector('.price').textContent;

  const cartItem = document.createElement('div');
  cartItem.classList.add('cart-box');
  cartItem.innerHTML = `
    <img src="${productImgSrc}" alt="product">
    <div class="detail-box">
      <div class="cart-product-title">${productTitle}</div>
      <div class="cart-price">${productPrice}</div>
      <input type="number" value="1" class="cart-quantity">
      <i class="fa fa-trash-o cart-remove"></i>
    </div>
  `;
  cartContent.appendChild(cartItem);

  updateCartTotal();
}

// Remove a cart item
function removeCartItem(event) {
  if (event.target.classList.contains('cart-remove')) {
    const cartItem = event.target.parentElement.parentElement;
    cartItem.remove();
    updateCartTotal();
  }
}

// Calculate and update the total price of the cart
function updateCartTotal() {
  const cartItems = cartContent.querySelectorAll('.cart-box');
  let total = 0;

  cartItems.forEach(cartItem => {
    const priceElement = cartItem.querySelector('.cart-price');
    const quantityElement = cartItem.querySelector('.cart-quantity');
    const price = parseFloat(priceElement.textContent.replace('₹', ''));
    const quantity = parseInt(quantityElement.value);
    total += price * quantity;
  });

  cartTotal.textContent = '₹' + total;
}

// Buy now button functionality
function buyNow() {
  const cartItems = cartContent.querySelectorAll('.cart-box');

  // Perform any necessary actions before purchasing, e.g., sending data to a server

  // Clear the cart
  cartItems.forEach(cartItem => cartItem.remove());
  updateCartTotal();

  // Display a success message or redirect to a confirmation page
  alert('Thank you for your purchase!');
}
