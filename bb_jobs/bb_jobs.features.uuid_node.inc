<?php
/**
 * @file
 * bb_jobs.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function bb_jobs_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Commercieel talent met passie voor design en interieur gezocht voor een job als verkoopadviseur (M/V)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '66b5af31-86e8-4fc1-b52c-9086a22745c3',
  'type' => 'job',
  'language' => 'nl',
  'created' => 1378820697,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5ce36bba-3625-473d-85cc-dba533b1a1fc',
  'revision_uid' => 1,
  'field_job_company' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Begint het te kriebelen wanneer je leest dat jij ambassadeur kan worden van een tegelwinkel die garant staat voor het aanbieden van kwaliteit en nieuwe tendensen binnen hun markt?</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Begint het te kriebelen wanneer je leest dat jij ambassadeur kan worden van een tegelwinkel die garant staat voor het aanbieden van kwaliteit en nieuwe tendensen binnen hun markt?</p>
',
      ),
    ),
  ),
  'field_job_description' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Als verkoop adviseur ben je het aanspreekpunt voor alle klanten die de showroom komen bezoeken. Je begeleidt en adviseert hen deskundig bij het maken van een keuze uit jullie uitgebreide gamma.<br />
	Jouw klanten kunnen zowel particulieren als professionals zijn.<br />
	Je staat in voor het maken van offertes en de administratieve procedure van bestelling tot en met levering.<br />
	Om deze opdracht succesvol uit te voeren kan je beroep doen op jouw passie voor design en interieur.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Als verkoop adviseur ben je het aanspreekpunt voor alle klanten die de showroom komen bezoeken. Je begeleidt en adviseert hen deskundig bij het maken van een keuze uit jullie uitgebreide gamma.<br />
	Jouw klanten kunnen zowel particulieren als professionals zijn.<br />
	Je staat in voor het maken van offertes en de administratieve procedure van bestelling tot en met levering.<br />
	Om deze opdracht succesvol uit te voeren kan je beroep doen op jouw passie voor design en interieur.</p>
',
      ),
    ),
  ),
  'field_job_profile' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ben jij van nature dynamisch en hou je ervan klanten te adviseren op maat?<br />
	Ben je op zoek naar een werkgever die lange termijn engagement zoekt en dit stimuleert bij zijn werknemers?<br />
	Spreek je zeer goed Nederlands en vlot Frans en Engels. Kan je vlot werken met het Office pakket?<br />
	Ben je in het bezit van een diploma die aansluit bij de sector of relevante ervaring?<br />
	Vormt werken op zaterdag geen probleem? Hierdoor ben je 1 dag doorheen de week vrij.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Ben jij van nature dynamisch en hou je ervan klanten te adviseren op maat?<br />
	Ben je op zoek naar een werkgever die lange termijn engagement zoekt en dit stimuleert bij zijn werknemers?<br />
	Spreek je zeer goed Nederlands en vlot Frans en Engels. Kan je vlot werken met het Office pakket?<br />
	Ben je in het bezit van een diploma die aansluit bij de sector of relevante ervaring?<br />
	Vormt werken op zaterdag geen probleem? Hierdoor ben je 1 dag doorheen de week vrij.</p>
',
      ),
    ),
  ),
  'field_job_offer' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Samen met je collega’s werk je mee aan de uitbouw van dit filiaal. Je komt terecht in een no-nonsense cultuur waar zin voor initiatief wordt geapprecieerd!<br />
	Je start op in vast dienstverband met een proefperiode van 6 maanden. Een verloning gebaseerd op je ervaring en competenties.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Samen met je collega’s werk je mee aan de uitbouw van dit filiaal. Je komt terecht in een no-nonsense cultuur waar zin voor initiatief wordt geapprecieerd!<br />
	Je start op in vast dienstverband met een proefperiode van 6 maanden. Een verloning gebaseerd op je ervaring en competenties.</p>
',
      ),
    ),
  ),
  'field_job_call_to_action' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Solliciteer nu per telefoon op 016/87 43 13.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Solliciteer nu per telefoon op 016/87 43 13.</p>
',
      ),
    ),
  ),
  'field_job_location' => array(
    'und' => array(
      0 => array(
        'value' => 'Leuven',
        'format' => NULL,
        'safe_value' => 'Leuven',
      ),
    ),
  ),
  'field_job_type' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-10 15:44:57 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Klantendienstmedewerker NL+FR',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '56180162-4ac4-4ca9-937a-8fbb08554e05',
  'type' => 'job',
  'language' => 'nl',
  'created' => 1378821027,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7e8aca48-e49b-46a2-8c76-f00be55c98dc',
  'revision_uid' => 1,
  'field_job_company' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Wens je deel uit te maken van de grootste verdeler en handelaar van geneesmiddelen en terecht te komen binnen een firma waar een familiale sfeer heerst en waar zin voor engagement en initiatief wordt geapprecieerd?</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Wens je deel uit te maken van de grootste verdeler en handelaar van geneesmiddelen en terecht te komen binnen een firma waar een familiale sfeer heerst en waar zin voor engagement en initiatief wordt geapprecieerd?</p>
',
      ),
    ),
  ),
  'field_job_description' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Binnen de klantendienst ben jij de persoon die klanten telefonisch te woord staat. Dit combineer je met administratieve taken zoals, inputten van gegevens, facturen behandelen en nakijken, extra info verschaffen aan klanten, klassement etc.<br />
	Kortom, wanneer een klant jou aan de lijn krijgt, heeft hij nadien een oplossing voor zijn probleem of weet jouw klant wat je zal doen om het probleem aan te pakken!</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Binnen de klantendienst ben jij de persoon die klanten telefonisch te woord staat. Dit combineer je met administratieve taken zoals, inputten van gegevens, facturen behandelen en nakijken, extra info verschaffen aan klanten, klassement etc.<br />
	Kortom, wanneer een klant jou aan de lijn krijgt, heeft hij nadien een oplossing voor zijn probleem of weet jouw klant wat je zal doen om het probleem aan te pakken!</p>
',
      ),
    ),
  ),
  'field_job_profile' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Draag je klantgerichtheid hoog in het vaandel en uit zich dit door je diplomatische en oplossingsgerichte aanpak?<br />
	Heb je minstens een eerste succesvolle ervaring achter de rug als administratief bediende of telefoniste en ben je op zoek naar een lange termijn job voor een firma gelegen vlak naast Zaventem?<br />
	Spreek je zeer vlot Nederlands èn Frans?<br />
	Ben je flexibel naar werkuren toe? Standaard wordt er gewerkt tussen 8u55 en 17u15 met 1 uur middag. Wanneer collega’s met verlof zijn, dient er gewerkt te worden tem 19u of op zaterdag. Definitieve uurroosters worden ten minste een week op voorhand gecommuniceerd.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Draag je klantgerichtheid hoog in het vaandel en uit zich dit door je diplomatische en oplossingsgerichte aanpak?<br />
	Heb je minstens een eerste succesvolle ervaring achter de rug als administratief bediende of telefoniste en ben je op zoek naar een lange termijn job voor een firma gelegen vlak naast Zaventem?<br />
	Spreek je zeer vlot Nederlands èn Frans?<br />
	Ben je flexibel naar werkuren toe? Standaard wordt er gewerkt tussen 8u55 en 17u15 met 1 uur middag. Wanneer collega’s met verlof zijn, dient er gewerkt te worden tem 19u of op zaterdag. Definitieve uurroosters worden ten minste een week op voorhand gecommuniceerd.</p>
',
      ),
    ),
  ),
  'field_job_offer' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Een mooie verloning volgens de lonen binnen de pharmaceutische sector aangevuld door een DKV hospitalisatieverzekering (na een geslaagde proefperiode), maaltijdcheques en korting bij de aankoop van bepaalde pharmaceutische producten.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Een mooie verloning volgens de lonen binnen de pharmaceutische sector aangevuld door een DKV hospitalisatieverzekering (na een geslaagde proefperiode), maaltijdcheques en korting bij de aankoop van bepaalde pharmaceutische producten.</p>
',
      ),
    ),
  ),
  'field_job_call_to_action' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Solliciteer per e-mail op info@bestejob.be!</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Solliciteer per e-mail op <a href="mailto:info@bestejob.be">info@bestejob.be</a>!</p>
',
      ),
    ),
  ),
  'field_job_location' => array(
    'und' => array(
      0 => array(
        'value' => 'Vlaams-Brabant',
        'format' => NULL,
        'safe_value' => 'Vlaams-Brabant',
      ),
    ),
  ),
  'field_job_type' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-10 15:50:27 +0200',
);
  return $nodes;
}
