# Breakdown of the Code of JS
## LINK :
https://todolistsamarpan.netlify.app/
## HTML Elements
```js
    const inputBox = document.getElementById("input-box");
    const listContainer = document.getElementById("listscontainer");
```
These lines are selecting HTML elements and storing them in variables.

inputBox is a reference to an input element with the ID "input-box".
listContainer is a reference to a container element (like a div or ul) with the ID "listscontainer" where the tasks will be appended.

## Function Definition
```js
    function addTask() {
```
This line defines a function named addTask. This function will be called when you want to add a task to the to-do list.

## Input Validation
```js
if (inputBox.value ==='') {
    alert("You must write some task!");
}
```
This part checks if the input box is empty. If it is, it shows an alert message saying "You must write some task!" and stops further execution of the function.

## Adding a Task
```js
else {
    let li = document.createElement("li");
    li.innerHTML = inputBox.value;
    listContainer.appendChild(li);
}
```
If the input box is not empty:

- let li = document.createElement("li");
Creates a new list item (<li>) element.

- li.innerHTML = inputBox.value;
Sets the content of this list item to the value of the input box (i.e., the task text).

- listContainer.appendChild(li);
Appends the newly created list item to the listContainer.

## Clearing the Input Box
```js
inputBox.value = "";
```
This line clears the input box by setting its value to an empty string, preparing it for the next task input.

## Complete Function
Putting it all together, the addTask function works as follows:

1. It checks if the input box is empty.
2. If empty, it shows an alert.
3. If not, it creates a new list item with the task text and appends it to the list container.
Finally, it clears the input box for the next input.

## Adding Tasks on Enter Key Press
Event Listener for Input Box:
```javascript
inputBox.addEventListener("keydown", function(event) {
    if (event.key === "Enter") {
        addTask();
    }
});
```
- This part listens for key presses in the input box (inputBox).
- When you press the "Enter" key, it calls the addTask() function, which presumably adds a new task to the list.

## Managing Task List Actions
Event Listener for List Container:
```javascript
listContainer.addEventListener("click", function(e){
    if(e.target.tagName === "LI"){
        e.target.classList.toggle("checked");
        saveData();
    } else if(e.target.tagName === "SPAN"){
        e.target.parentElement.remove();
        saveData();
    }
}, false);
```

- This part listens for click events on the list container (listContainer).
- If you click on a list item (LI), it toggles the checked class on or off. This is usually used to show that the task is done (e.g., crossing it out).
- If you click on a SPAN element (typically used for a delete button), it removes the parent list item (i.e., the task).
- After either action, it calls the saveData() function to save the updated list.

## Saving and Loading Tasks
Saving Data:

```javascript
function saveData() {
    localStorage.setItem("data", listContainer.innerHTML);
}
```
This function saves the current state of the list container (listContainer.innerHTML) to the browser's local storage under the key "data".

## Showing Tasks on Page Load:

```javascript
function showTask() {
    listContainer.innerHTML = localStorage.getItem("data");
}
showTask();
```
This function retrieves the saved data from local storage and sets it as the inner HTML of the list container. This effectively reloads the list of tasks when you refresh the page or revisit it.
