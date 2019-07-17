#! /bin/bash   

#prod_reco_optfilter_bnb_ccpi0_v12_mcc8


list1=`samweb list-definition-files prodgenie_bnb_nu_uboone_overlay_mcc9.0_run1_reco2`
i=0
for file in $list1
do
    run=`samweb get-metadata $file | grep mc.pot:`
    potS=`echo ${run##*:}`
    echo $potS
done
