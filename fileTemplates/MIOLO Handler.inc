<?php

$perms->CheckAccess($handler, A_EXECUTE, true);

$ui = $MIOLO->GetUI();

$obj = $MIOLO->getBusiness($module, $handler, $item);

$form = '';
if (MIOLO::_REQUEST('item', 'ALL')) {
    $form = $ui->GetForm($module, 'frm'.ucfirst($handler).'Edit', $obj, '');
}
else
{
    $form = $ui->GetForm($module, 'frm'.ucfirst($handler).'View', $obj, '');
}

$form->setTransacao($handler);
$form->SetTitle(ucfirst($handler));

$theme->InsertContent($form);

?>