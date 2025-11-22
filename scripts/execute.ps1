#!/usr/bin/env pwsh

param (
     [Parameter(Mandatory = $true)]
     [System.String] $File
)

function Execute {
    [CmdletBinding()]
    [OutputType([System.Void])]
    param ()

    & (Join-Path $PWD build\crc32.exe) --file $File ;
}

Execute ;
