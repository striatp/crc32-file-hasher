.PHONY: compile execute

compile:
	@pwsh ./scripts/compile.ps1

execute:
	@pwsh ./scripts/execute.ps1 -File "$(File)"