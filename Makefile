
output: clean
	templer

clean:
	@rm -rf output/ || true

upload: output
	rsync --delete -qazr output/ s-lumail@lumail.org:htdocs/

upload-no-modified:
	templer --define no-updated=1 --force
	rsync --delete -qazr output/ s-lumail@lumail.org:htdocs/

serve: output
	templer --serve=4433
