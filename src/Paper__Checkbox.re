[@bs.module "react-native-paper"] [@react.component]
external make:
  (
    ~status: [ | `checked | `unchecked | `indeterminate],
    ~theme: Paper__ThemeProvider.Theme.t=?,
    ~disabled: bool=?,
    ~uncheckColor: string=?,
    ~color: string=?,
    ~onPress: ReactNative.Event.pressEvent => unit=?
  ) =>
  React.element =
  "Checkbox";

module Android = {
  [@bs.module "react-native-paper"] [@bs.scope "Checkbox"] [@react.component]
  external make:
    (
      ~status: [ | `checked | `unchecked | `indeterminate],
      ~theme: Paper__ThemeProvider.Theme.t=?,
      ~disabled: bool=?,
      ~uncheckColor: string=?,
      ~color: string=?,
      ~onPress: ReactNative.Event.pressEvent => unit=?
    ) =>
    React.element =
    "Android";
};

module IOS = {
  [@bs.module "react-native-paper"] [@bs.scope "Checkbox"] [@react.component]
  external make:
    (
      ~status: [ | `checked | `unchecked | `indeterminate],
      ~theme: Paper__ThemeProvider.Theme.t=?,
      ~disabled: bool=?,
      ~uncheckColor: string=?,
      ~color: string=?,
      ~onPress: ReactNative.Event.pressEvent => unit=?
    ) =>
    React.element =
    "IOS";
};
