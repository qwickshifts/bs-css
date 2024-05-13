include Css_Core;

include Css_Core.Make({
  [@mel.module "emotion"]
  external mergeStyles: (. array(string)) => string = "cx";

  [@mel.module "emotion"] external make: (. Js.Json.t) => string = "css";

  [@mel.module "emotion"]
  external injectRule: (. Js.Json.t) => unit = "injectGlobal";

  [@mel.module "emotion"]
  external injectRaw: (. string) => unit = "injectGlobal";

  [@mel.module "emotion"]
  external makeKeyFrames: (. Js.Dict.t(Js.Json.t)) => string = "keyframes";
});

type cache;

[@mel.module "emotion"] external cache: cache = "cache";

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
