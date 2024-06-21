const inputBox=document.getElementById("input-box");
const listContainer=document.getElementById("listscontainer"); 

function addTask() {
    if (inputBox.value ==='') {
        alert("You must write some task!");
    }
    else{
        let li = document.createElement("li");
        li.innerHTML= inputBox.value;
        listContainer.appendChild(li);
    }
    inputBox.value = "";
}