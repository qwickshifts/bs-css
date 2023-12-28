(lang dune 3.12)

(using melange 0.1)

(source
 (github riKiMasan/bs-css))

(license MIT)

(maintainers "unmaintained")

(authors "idk")

(homepage https://github.com/riKiMasan/bs-css)

(bug_reports https://github.com/riKiMasan/bs-css/issues)

(name bs-css)

(package
 (name bs-css)
 (synopsis "Statically typed DSL for writing css in reason")
 (description "Statically typed DSL for writing css in reason")
 (depends
  dot-merlin-reader
  (melange
   (>= 2.0.0))
  (ocaml
   (>= 5.1.0))
  (reason
   (>= 3.10.0))
  ocaml-lsp-server ; change to (ocaml-lsp-server :with-dev-setup) when opam 2.2 releases
  ocamlformat ; with-dev-setup
  opam-check-npm-deps ; with-dev-setup
  melange-jest
  reason-react))

(generate_opam_files)
