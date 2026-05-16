/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    "./templates/**/*.html", // Template at the project level
    "./**/templates/**/*.html" // Template at inside apps
  ], 
  theme: {
    extend: {},
  },
  plugins: [],
}

