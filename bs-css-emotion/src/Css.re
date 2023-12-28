include Css_Core;

include Css_Core.Make({
  [@bs.module "emotion"]
  external mergeStyles: (. array(string)) => string = "cx";

  [@bs.module "emotion"] external make: (. Js.Json.t) => string = "css";

  [@bs.module "emotion"]
  external injectRule: (. Js.Json.t) => unit = "injectGlobal";

  [@bs.module "emotion"]
  external injectRaw: (. string) => unit = "injectGlobal";

  [@bs.module "emotion"]
  external makeKeyFrames: (. Js.Dict.t(Js.Json.t)) => string = "keyframes";
});

type cache;

[@bs.module "emotion"] external cache: cache = "cache";

let fontFace =
    (~fontFamily, ~src, ~fontStyle=?, ~fontWeight=?, ~fontDisplay=?, ()) => {
  let asString =
    Css_Core.fontFace(
      ~fontFamily,
      ~src,
      ~fontStyle?,
      ~fontWeight?,
      ~fontDisplay?,
      (),
    );
  insertRule(asString);
  fontFamily;
};
