> [!IMPORTANT]  
> This is a fork. The original repository has been deleted. It was for a collective group project at EPITECH.

# Archi Commune Arcade Promo 2026 Toulouse

documentation: [docs](https://saverio976.github.io/archi_arcade/)

## INSTALLATION

To install the archi on your project, you have to execute this lines on the root of your repository.

### GNU/LINUX

```
bash -c "$(curl -fsSL https://raw.githubusercontent.com/Saverio976/archi_arcade/main/setup.sh)"
# then, you will be able to only update the archi using the folowing command:
./update-archi.sh
```

### WINDOWS

```
Invoke-WebRequest https://raw.githubusercontent.com/Saverio976/archi_arcade/main/setup.ps1 -OutFile setup.ps1
# then, you will be able to only update the archi using the folowing command:
./setup.ps1
```

#### WARNING

This installation script will use a `__tmp` folder. Make sure you don't have a file or a folder called like that at the root of your repository to avoid data erasement.
