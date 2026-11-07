set_project("labs")
set_languages("c++20")
add_rules("mode.debug", "mode.release")
set_defaultmode("debug")
add_rules("plugin.compile_commands.autoupdate", { outputdir = "." })

for _, dir in ipairs(os.dirs(path.join(os.scriptdir(), "lab*"))) do
    local files = os.files(path.join(dir, "**.cpp"))
    if #files > 0 then
        target(path.filename(dir))
        set_kind("binary")
        add_files(files)
        add_includedirs(dir)
        target_end()
    end
end
