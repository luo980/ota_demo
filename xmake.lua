target("camera")
    set_kind("binary")
    set_default(false)

    -- 添加源文件
    add_files("src/camera.cpp")

    -- 在脚本中获取 Git 分支名称
    on_load(function (target)
        import("detect.tools.find_git")
        local git = find_git()
        if git then
            local branch_name = os.iorunv(git.program, {"rev-parse", "--abbrev-ref", "HEAD"}):trim()
            if branch_name then
                -- 设置目标文件名为分支名称
                target:set("targetname", branch_name)
            end
        end
    end)