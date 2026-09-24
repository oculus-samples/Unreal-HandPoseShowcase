# Agent Instructions — Hand Pose Showcase (Unreal)

Unreal Engine showcase that uses raw hand-tracking data to recognize hand poses and gestures (ASL letters/numbers, force-grab, force-throw, gun, peace, shaka, etc.) with C++, Blueprints, and the bundled `OculusHandTools` plugin.

## Source-of-truth files (read these first, do not duplicate their contents in this file)

For setup, build steps, SDK versions, and project layout, read:

- `README.md` — official build instructions and demo walkthrough
- `HandPoseShowcase.uproject` — Unreal engine version, plugins, and modules
- `Plugins/OculusHandTools/Documentation/OculusHandTools.md` — pose / gesture recognizer plugin reference
- `Source/` — C++ sources
- `LICENSE` — Meta License (MIT applies only to specifically marked files)

## Quest / Horizon-specific notes

- Two supported editor paths: the **Epic Games Launcher + MetaXR plugin** (easier, prebuilt UE5) or the **Meta fork of Unreal Engine** built from source — pick one before regenerating project files.
- The sample uses the **Epic OpenXR plugin with vendor extensions** by default; the README documents an explicit migration path back to the Oculus OVRPlugin (paste the encoded `Poses` value into `LeftHandPoseRecognizer` on `VRCharacter`).
- April 2025 update: project uses **EnhancedInput** for UE5 — input bindings will not match older Unreal input docs.
- The reusable piece is `Plugins/OculusHandTools/` (with `OculusHandPoseRecognition`); pose / gesture recognizers attach to `VRCharacter`'s `MotionControllerLeft` / `MotionControllerRight`. Read the plugin's own docs before refactoring recognizers.
- Quest 2 hand tracking can be set to 60 Hz under **Plugins > OculusVR > Mobile > Hand Tracking Frequency** for smoother recognition.

# Meta Quest tooling

This is a Meta Quest / Horizon OS sample. The bespoke intro above is the source of truth for what this project is and how it's built — use it (and the files it points at) instead of restating facts from memory.

When the user asks anything about Quest device behavior, build / deploy / debug / capture flows, on-device performance, or Horizon OS APIs, reach for these tools instead of generic Unreal answers:

- **`hzdb`** — Quest-aware ADB wrapper (device list, install / launch / stop, logs, screenshots, Perfetto traces, on-device docs search). Already wired up as an MCP server via `.mcp.json`, `.vscode/mcp.json`, and `.cursor/mcp.json`. Also runnable directly: `npx -y @meta-quest/hzdb <subcommand>`.
- **Meta Quest Agentic Tools** — the full skill set, including Unreal-specific skills: <https://github.com/meta-quest/agentic-tools>. Install per your client (Claude Code: `/plugin install meta-vr@meta-quest`; Gemini CLI: `gemini extensions install https://github.com/meta-quest/agentic-tools`; Cursor / VS Code: install the **Meta Horizon** extension from the Marketplace).

A few behavior expectations:

- **Read this repo's files first.** Before answering anything project-specific, read `README.md` and whichever source-of-truth files the intro above points at. Don't restate their contents in chat — quote or link instead.
- **Use `hzdb` for device-side work.** Anything that touches an attached Quest (install, launch, logs, screenshot, capture, manifest inspection) goes through `hzdb`, not raw `adb`.
- **Check live Horizon OS docs before answering API questions.** `hzdb docs search "..."` queries the live docs; training data on Horizon OS APIs goes stale fast.
- **Don't fabricate SDK / engine versions.** If a version isn't visible in this repo's files, say so rather than guessing.
