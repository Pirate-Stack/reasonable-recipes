[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      <header>
        <div className="container">
          <img src=logo className="logo" alt="logo" />
        </div>
      </header>
      <div className="container">
        <p className="App-intro">
          (ReasonReact.stringToElement("To get started, edit"))
          <code> (ReasonReact.stringToElement(" src/app.re ")) </code>
          (ReasonReact.stringToElement("and save to reload."))
        </p>
      </div>
    </div>
};
