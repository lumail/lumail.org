
#
# A rule for generating the CSS
#
%.css : %.in
	@test -e /usr/lib/python2.7/dist-packages/slimmer/slimmer.py || echo "apt-get install python-slimmer"
	@python /usr/lib/python2.7/dist-packages/slimmer/slimmer.py $< css --output=$@


output: clean input/css/new.css
	templer

clean:
	@rm -rf output/ || true

upload: output
	rsync --delete -qazr output/ s-lumail@www.steve.org.uk:htdocs/

upload-no-modified:
	templer --define no-updated=1 --force
	rsync --delete -qazr output/ s-lumail@www.steve.org.uk:htdocs/

serve: output
	templer --serve=4433
