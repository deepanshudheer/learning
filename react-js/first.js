function Person(props) {
  return (
    <div class="person">
      <h1>{props.name}</h1>
      <p>Age is {props.age}</p>
    </div>
  );
}

var app = (
  <div>
    <Person name="Deepsi" age="20" />
    <Person name="Vicky" age="33" />
  </div>
);
ReactDOM.render(app, document.querySelector('#app'));

// reusable components to display div
