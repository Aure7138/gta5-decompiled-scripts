#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	char* sLocal_41 = NULL;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 25;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 2;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 4;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 4;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 4;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 4;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 4;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 4;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	struct<485> Local_157 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_35 = 202;
	iLocal_36 = 201;
	iLocal_37 = 24;
	iLocal_38 = 202;
	iLocal_39 = 25;
	sLocal_41 = "";
	iLocal_43 = -1;
	iLocal_44 = -1;
	iLocal_45 = -1;
	iLocal_47 = -1;
	iLocal_48 = -1;
	iLocal_155 = -1;
	if (unk_0xD63E63DFACCEB80E(82))
	{
		func_364();
	}
	func_363(2);
	func_351(&(Local_157.f_1), func_362(Global_86396[8 /*19*/], Global_86396[9 /*19*/]));
	func_350(&Local_157, 4);
	func_349(4, 0, 1);
	func_348(0);
	while (!func_347(3))
	{
		if (!Global_68514 && !func_346(14))
		{
			func_332(&Local_157, 10f, 18f);
			func_330(&Local_157);
			func_202();
			func_144();
			if (func_142(0) || unk_0x94E72F17611BCD3C(Local_157.f_449, 2))
			{
				func_68(&Local_157);
				func_5(&Local_157);
				func_4(&Local_157);
			}
		}
		if (unk_0x7B47A371E2D93C2C(joaat("finale_heist2a")) > 0 || unk_0x7B47A371E2D93C2C(joaat("finale_heist2b")) > 0)
		{
			func_3();
		}
		if (func_347(34))
		{
			if (!func_2(0))
			{
				if (!unk_0x94E72F17611BCD3C(Global_97358.f_1.f_120[4], 9))
				{
					func_349(4, 9, 1);
				}
			}
			else if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_120[4], 9))
			{
				func_349(4, 9, 0);
			}
		}
		else if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_120[4], 9))
		{
			func_349(4, 9, 0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1(2);
	func_364();
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_3()
{
	int iVar0;
	
	if (Global_68505)
	{
		return;
	}
	if (!unk_0x378E80A2B7D7C8DF(unk_0x2563F6EECD8726D3()))
	{
		return;
	}
	iVar0 = unk_0xF2DB717A73826179((1f + (1000f * unk_0x0000000050597EE2())));
	Global_86587.f_8 = (Global_86587.f_8 + iVar0);
}

void func_4(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(Global_86375, *uParam0))
	{
		if (unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 15);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 16);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 14);
			unk_0xF76EE56D3E7DAF1B(&Global_86375, *uParam0);
		}
	}
}

void func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_67(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
		{
			func_6(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_65(uParam0);
			uParam0->f_464 = iParam1;
			func_7(uParam0, iParam1, iParam2);
		}
	}
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 5);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_64(uParam0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 5);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_36(uParam0, uParam0->f_417, iParam2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 5);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x17103F66FBB44C3C();
			break;
		
		case 3:
			func_18(uParam0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 5);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 4);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x17103F66FBB44C3C();
			break;
		
		case 4:
			func_14(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_14(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_97358.f_1.f_6[*uParam0] = 1;
			unk_0x35611EEE7A1FFEDB(0);
			func_12(uParam0, 0);
			func_64(uParam0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 5);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x17103F66FBB44C3C();
			break;
	}
	func_8(uParam0);
}

void func_8(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	
	uVar0 = unk_0x87872B5AB967B51E(2, 13, 1);
	uVar1 = unk_0x87872B5AB967B51E(2, 11, 1);
	uVar2 = unk_0x34B4609B3C3F7CD6(0, 32, 1);
	uVar3 = unk_0x87872B5AB967B51E(0, 1, 1);
	uVar4 = unk_0x34B4609B3C3F7CD6(2, 201, 1);
	uVar5 = unk_0x34B4609B3C3F7CD6(2, 202, 1);
	if (unk_0x286FD331C17C5174(2))
	{
		uVar0 = unk_0x87872B5AB967B51E(2, 6, 1);
		uVar1 = unk_0x87872B5AB967B51E(2, 7, 1);
		uVar2 = unk_0x87872B5AB967B51E(0, 29, 1);
	}
	bVar6 = func_11(1, *uParam0);
	unk_0x48F299599202B77A(uParam0->f_414, "SET_MAX_WIDTH");
	unk_0xC4F81CF078CCB564(0.6f);
	unk_0x7E86CE5F658823DB();
	switch (uParam0->f_464)
	{
		case 0:
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(1);
					func_10(uVar2);
					func_9("PB_H_ZOOM");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(0);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					unk_0x7E86CE5F658823DB();
				}
				else
				{
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(2);
					func_10(uVar2);
					func_9("PB_H_ZOOM");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(1);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(0);
					func_10(uVar5);
					func_9("PB_H_EXIT");
					unk_0x7E86CE5F658823DB();
				}
				unk_0x48F299599202B77A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x63E5FA5DEE979BD6(false);
				unk_0x7E86CE5F658823DB();
			}
			break;
		
		case 1:
			unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x63E5FA5DEE979BD6(false);
			unk_0x7E86CE5F658823DB();
			break;
		
		case 2:
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
			{
				unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x7E86CE5F658823DB();
				if (*uParam0 == 2)
				{
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(2);
					func_10(uVar0);
					func_9("PB_H_SELCT");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(1);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(0);
					func_10(uVar4);
					func_9("PB_H_TRIG");
					unk_0x7E86CE5F658823DB();
				}
				else
				{
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(3);
					func_10(uVar0);
					func_9("PB_H_SELCT");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(2);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(1);
					func_10(uVar5);
					func_9("PB_H_UNDO");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(0);
					func_10(uVar4);
					func_9("PB_H_TRIG");
					unk_0x7E86CE5F658823DB();
				}
				unk_0x48F299599202B77A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x63E5FA5DEE979BD6(false);
				unk_0x7E86CE5F658823DB();
			}
			break;
		
		case 3:
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
			{
				if (unk_0x94E72F17611BCD3C(uParam0->f_449, 9))
				{
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(1);
					func_10(uVar1);
					func_9("PB_H_SELCT");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(0);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					unk_0x7E86CE5F658823DB();
				}
				else
				{
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(2);
					func_10(uVar1);
					func_9("PB_H_SELCT");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(1);
					func_10(uVar3);
					func_9("PB_H_LOOK");
					unk_0x7E86CE5F658823DB();
					unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(0);
					func_10(uVar4);
					func_9("PB_H_TRIG");
					unk_0x7E86CE5F658823DB();
				}
				unk_0x48F299599202B77A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x63E5FA5DEE979BD6(false);
				unk_0x7E86CE5F658823DB();
			}
			break;
		
		case 4:
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
			{
				unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x7E86CE5F658823DB();
				unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(3);
				func_10(uVar2);
				func_9("PB_H_ZOOM");
				unk_0x7E86CE5F658823DB();
				unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(2);
				func_10(uVar3);
				func_9("PB_H_LOOK");
				unk_0x7E86CE5F658823DB();
				unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(1);
				func_10(uVar5);
				func_9("PB_H_UNDO");
				unk_0x7E86CE5F658823DB();
				unk_0x48F299599202B77A(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(0);
				func_10(uVar4);
				func_9("PB_H_CONF");
				unk_0x7E86CE5F658823DB();
				unk_0x48F299599202B77A(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x63E5FA5DEE979BD6(false);
				unk_0x7E86CE5F658823DB();
			}
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_10(var uParam0)
{
	unk_0xD7A63C87F9B85B67(uParam0);
}

bool func_11(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iParam0], iParam1);
	return bVar0;
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 18);
		if (((!func_13(&(uParam0->f_1.f_20[0 /*4*/])) && !func_13(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_13(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_13(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			unk_0x35611EEE7A1FFEDB(0);
		}
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 18);
	}
}

bool func_13(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_14(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_96001 && iParam1)
	{
		if (func_13(uParam0) && !unk_0xAE6E7F42787A142C())
		{
			unk_0x35611EEE7A1FFEDB(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(uParam0, &(Global_97358.f_23635[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_97358.f_23635.f_145 - 2))
			{
				func_17(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_16((Global_97358.f_23635.f_145 - 1));
			Global_97358.f_23635.f_145 = (Global_97358.f_23635.f_145 - 1);
			func_15();
			return;
		}
		iVar0++;
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	StringCopy(&(Global_97358.f_23635[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_97358.f_23635[iParam0 /*16*/].f_4), "", 16);
	Global_97358.f_23635[iParam0 /*16*/].f_8 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_9 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_11 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_10 = -1;
	Global_97358.f_23635[iParam0 /*16*/].f_12 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_13 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_14 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_15 = 0;
}

void func_17(int iParam0, int iParam1)
{
	Global_97358.f_23635[iParam0 /*16*/] = { Global_97358.f_23635[iParam1 /*16*/] };
	Global_97358.f_23635[iParam0 /*16*/].f_4 = { Global_97358.f_23635[iParam1 /*16*/].f_4 };
	Global_97358.f_23635[iParam0 /*16*/].f_8 = Global_97358.f_23635[iParam1 /*16*/].f_8;
	Global_97358.f_23635[iParam0 /*16*/].f_10 = Global_97358.f_23635[iParam1 /*16*/].f_10;
	Global_97358.f_23635[iParam0 /*16*/].f_9 = Global_97358.f_23635[iParam1 /*16*/].f_9;
	Global_97358.f_23635[iParam0 /*16*/].f_11 = Global_97358.f_23635[iParam1 /*16*/].f_11;
	Global_97358.f_23635[iParam0 /*16*/].f_12 = Global_97358.f_23635[iParam1 /*16*/].f_12;
	Global_97358.f_23635[iParam0 /*16*/].f_13 = Global_97358.f_23635[iParam1 /*16*/].f_13;
	Global_97358.f_23635[iParam0 /*16*/].f_14 = Global_97358.f_23635[iParam1 /*16*/].f_14;
	Global_97358.f_23635[iParam0 /*16*/].f_15 = Global_97358.f_23635[iParam1 /*16*/].f_15;
}

void func_18(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_35(uParam0);
	func_32(uParam0);
	unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415);
	unk_0x7E86CE5F658823DB();
	iVar0 = func_66(func_31(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_30(*uParam0, 0))
		{
			unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(8);
			unk_0x7E86CE5F658823DB();
		}
		else if (iVar0 == func_30(*uParam0, 1))
		{
			unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(9);
			unk_0x7E86CE5F658823DB();
		}
	}
	Var1.f_0 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_26(uParam0, &Var1, uParam0->f_1.f_10);
	func_24(uParam0, 1, 1);
	func_12(uParam0, 0);
	func_19(uParam0);
}

void func_19(var uParam0)
{
	int iVar0;
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 7))
	{
		if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_97358.f_1[*uParam0])
					{
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_97358.f_1[*uParam0] = 1;
					}
					else if (func_21() && !unk_0xC9EED58014EF1F40())
					{
						if (((!unk_0x94E72F17611BCD3C(uParam0->f_449, 11) && !unk_0x94E72F17611BCD3C(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483 == 0)
						{
							unk_0x21D4405986536E14("PB_H_CHOICE");
							unk_0x7BDC04B08D7A7FE0(0, 1, 0, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_97358.f_1.f_6[*uParam0])
					{
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_22(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_97358.f_1.f_6[*uParam0] = 1;
					}
					else if (func_21() && !unk_0xC9EED58014EF1F40())
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 10))
						{
							if ((!func_13("PB_H_GUNM") && !func_13("PB_H_HACK")) && !func_13("PB_H_DRIV"))
							{
								iVar0 = func_66(func_31(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0x94E72F17611BCD3C(uParam0->f_449, 11) && !unk_0x94E72F17611BCD3C(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483 == 0)
									{
										switch (Global_86396[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												unk_0x21D4405986536E14("PB_H_GUNM");
												unk_0x7BDC04B08D7A7FE0(0, 1, 0, -1);
												break;
											
											case 2:
												unk_0x21D4405986536E14("PB_H_HACK");
												unk_0x7BDC04B08D7A7FE0(0, 1, 0, -1);
												break;
											
											case 3:
												unk_0x21D4405986536E14("PB_H_DRIV");
												unk_0x7BDC04B08D7A7FE0(0, 1, 0, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_20()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (Global_97358.f_23635.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_22(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_23(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_23(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_15();
	}
}

void func_24(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x94E72F17611BCD3C(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_280[iParam1 /*2*/]), ""))
		{
			func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_25(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!unk_0x9E9AFDBF482248F6(&Param3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483++;
	}
}

void func_26(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x17103F66FBB44C3C() + 1000;
	Var0 = { func_28(uParam0, &(uParam0->f_411)) };
	func_27(&(uParam0->f_649), Var0, fParam2);
}

void func_27(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_11 = { Param1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_28(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * unk_0xD0FFB162F40A139C((90f - fVar6))), (fVar4 * unk_0x0BADBFA3B172435F((90f - fVar6)))) };
	fVar10 = fVar4;
	fVar11 = unk_0x79F18AC499C1BB9C((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (Var7.f_2 - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = unk_0x79F18AC499C1BB9C((fVar14 / uParam0->f_1.f_8));
	fVar16 = ((fVar11 * 3f) / 18f);
	return (fVar15 * 0.95f), fVar16, (-fVar11 * 0.85f);
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (unk_0xBBDA792448DB5A89(*uParam1) / unk_0xBBDA792448DB5A89(iVar0));
	*uParam3 = (unk_0xBBDA792448DB5A89(uParam1->f_1) / unk_0xBBDA792448DB5A89(iVar1));
}

int func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_32(var uParam0)
{
	int iVar0;
	
	unk_0x48F299599202B77A(uParam0->f_413, "CREATE_VIEW");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415);
	unk_0x4BD4D58838D3F8E5(1);
	unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16));
	unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16.f_1));
	unk_0x7E86CE5F658823DB();
	func_34(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(2);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(1);
			unk_0x4BD4D58838D3F8E5(1);
			unk_0x7E86CE5F658823DB();
			break;
		
		case 1:
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(3);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(1);
			unk_0x4BD4D58838D3F8E5(4);
			unk_0x7E86CE5F658823DB();
			break;
		
		case 3:
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(6);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(1);
			unk_0x4BD4D58838D3F8E5(7);
			unk_0x7E86CE5F658823DB();
			break;
		
		case 4:
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(8);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415);
			unk_0x4BD4D58838D3F8E5(1);
			unk_0x4BD4D58838D3F8E5(9);
			unk_0x7E86CE5F658823DB();
			break;
	}
	unk_0x48F299599202B77A(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415);
	unk_0x7E86CE5F658823DB();
	unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415);
	unk_0x63E5FA5DEE979BD6(func_33(*uParam0, uParam0->f_1.f_29));
	unk_0x7E86CE5F658823DB();
	iVar0 = func_66(func_31(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
		unk_0x4BD4D58838D3F8E5(uParam0->f_415);
		unk_0x7E86CE5F658823DB();
		if (iVar0 == func_30(*uParam0, 0))
		{
			unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(8);
			unk_0x7E86CE5F658823DB();
		}
		else if (iVar0 == func_30(*uParam0, 1))
		{
			unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(9);
			unk_0x7E86CE5F658823DB();
		}
		unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
		unk_0x4BD4D58838D3F8E5(99);
		unk_0x7E86CE5F658823DB();
	}
}

bool func_33(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_1.f_120[iParam0], iParam1);
}

void func_34(var uParam0)
{
	unk_0x48F299599202B77A(uParam0->f_413, "SET_LABELS");
	func_9("H_CRW_NAME");
	func_9("H_CRW_TYPE");
	func_9("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_9("H_LBL_JWL");
			break;
		
		case 1:
			func_9("H_LBL_DOC");
			break;
		
		case 2:
			func_9("H_LBL_RUR");
			break;
		
		case 3:
			func_9("H_LBL_AGN");
			break;
		
		case 4:
			func_9("H_LBL_FA");
			func_9("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_9("H_LBL_CRW");
	}
	func_9("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_9("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_9("H_LBL_J1");
			func_9("H_LBL_J2");
			func_9("H_LBL_J3");
			func_9("H_LBL_J4");
			func_9("HC_J_IMPACT");
			func_9("HC_J_STEALTH");
			break;
		
		case 1:
			func_9("HC_D_BLOW_UP");
			func_9("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_9("H_LBL_R1");
			func_9("H_LBL_R2");
			func_9("H_LBL_R3");
			func_9("H_LBL_R4");
			func_9("H_LBL_R5");
			func_9("H_LBL_R6");
			func_9("H_LBL_R7");
			func_9("H_LBL_R8");
			func_9("H_LBL_R9");
			func_9("H_LBL_R10");
			func_9("H_LBL_R11");
			func_9("H_LBL_R12");
			break;
		
		case 3:
			func_9("H_LBL_A1");
			func_9("H_LBL_A2");
			func_9("H_LBL_A3");
			func_9("H_LBL_A4");
			func_9("H_LBL_A5");
			func_9("HC_A_FIRETRUCK");
			func_9("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_9("H_LBL_F1");
			func_9("H_LBL_F2");
			func_9("H_LBL_F3");
			func_9("H_LBL_F4");
			func_9("H_LBL_F5");
			func_9("HC_F_TRAFFCONT");
			func_9("HC_F_HELI");
			break;
	}
	unk_0x7E86CE5F658823DB();
}

void func_35(var uParam0)
{
	unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415);
	unk_0x7E86CE5F658823DB();
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_24(uParam0, 2, 1);
	iVar0 = func_66(func_31(*uParam0));
	iVar1 = Global_86396[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_63(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_63(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_63(uParam0, iVar0, 2);
			break;
	}
	func_62(uParam0, uParam0->f_417);
	func_37(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
	unk_0x4BD4D58838D3F8E5(iParam1);
	unk_0x63E5FA5DEE979BD6(true);
	unk_0x7E86CE5F658823DB();
	unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4BD4D58838D3F8E5(iParam1);
	unk_0x7E86CE5F658823DB();
	func_26(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(9);
			unk_0x7E86CE5F658823DB();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_12(uParam0, 0);
	func_19(uParam0);
}

void func_37(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_31(*uParam0);
	iVar1 = func_66(iVar0);
	iVar2 = Global_86396[iVar1 /*19*/].f_1[iParam1];
	unk_0x48F299599202B77A(uParam0->f_413, "CREATE_VIEW");
	unk_0x4BD4D58838D3F8E5(iParam1);
	unk_0x4BD4D58838D3F8E5(0);
	unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/]));
	unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	unk_0x7E86CE5F658823DB();
	func_34(uParam0);
	iVar3 = 0;
	if (Global_97358.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_97358.f_1.f_12[iVar1 /*6*/][iParam1];
		func_42(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_41(iVar6) == iVar2)
			{
				if (func_40(iVar6))
				{
					if (!func_39(iVar6))
					{
						if (!func_38(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_42(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_97358.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
		unk_0x4BD4D58838D3F8E5(iParam1);
		unk_0x63E5FA5DEE979BD6(true);
		unk_0x7E86CE5F658823DB();
	}
	else
	{
		unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
		unk_0x4BD4D58838D3F8E5(iParam1);
		unk_0x63E5FA5DEE979BD6(false);
		unk_0x7E86CE5F658823DB();
	}
	unk_0x48F299599202B77A(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x4BD4D58838D3F8E5(iParam1);
	unk_0x7E86CE5F658823DB();
}

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_31(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_97358.f_1.f_12[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_39(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_1.f_118, iParam0);
}

bool func_40(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_1.f_116, iParam0);
}

int func_41(int iParam0)
{
	return Global_86242[iParam0 /*5*/];
}

void func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x48F299599202B77A(uParam0, "SET_DATA_SLOT");
	unk_0x4BD4D58838D3F8E5(iParam2);
	unk_0x4BD4D58838D3F8E5(iParam3);
	unk_0x4BD4D58838D3F8E5(iParam4);
	func_9(func_60(iParam1));
	func_9(func_59(iParam1));
	switch (func_41(iParam1))
	{
		case 1:
			func_9(func_58(0));
			unk_0x4BD4D58838D3F8E5(func_55(iParam1, 0));
			func_9(func_58(1));
			unk_0x4BD4D58838D3F8E5(func_55(iParam1, 1));
			func_9(func_58(2));
			unk_0x4BD4D58838D3F8E5(func_55(iParam1, 2));
			func_9(func_58(3));
			unk_0x4BD4D58838D3F8E5(func_55(iParam1, 3));
			break;
		
		case 2:
			func_9(func_54(0));
			unk_0x4BD4D58838D3F8E5(func_51(iParam1, 0));
			func_9(func_54(1));
			unk_0x4BD4D58838D3F8E5(func_51(iParam1, 1));
			func_9(func_54(2));
			unk_0x4BD4D58838D3F8E5(func_51(iParam1, 2));
			break;
		
		case 3:
			func_9(func_49(0));
			unk_0x4BD4D58838D3F8E5(func_44(iParam1, 0));
			func_9(func_49(1));
			unk_0x4BD4D58838D3F8E5(func_44(iParam1, 1));
			func_9(func_49(2));
			unk_0x4BD4D58838D3F8E5(func_44(iParam1, 2));
			break;
	}
	func_9("H_CRW_CUT");
	unk_0x4BD4D58838D3F8E5(func_43(iParam1));
	unk_0x7E86CE5F658823DB();
}

var func_43(int iParam0)
{
	return Global_86242[iParam0 /*5*/].f_1;
}

int func_44(int iParam0, int iParam1)
{
	return unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_46(iParam0, iParam1)) / unk_0xBBDA792448DB5A89(func_45(iParam1))) * 100f));
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 3)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1)
{
	return func_48(iParam1, Global_97358.f_1.f_73[iParam0 /*3*/].f_1, Global_97358.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0x97EF1E5BCE9DC075(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return unk_0x97EF1E5BCE9DC075(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_49(int iParam0)
{
	return func_50(3, iParam0);
}

char* func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_51(int iParam0, int iParam1)
{
	return unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_53(iParam0, iParam1)) / unk_0xBBDA792448DB5A89(func_52(iParam1))) * 100f));
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 2)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_54(int iParam0)
{
	return func_50(2, iParam0);
}

int func_55(int iParam0, int iParam1)
{
	return unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_57(iParam0, iParam1)) / unk_0xBBDA792448DB5A89(func_56(iParam1))) * 100f));
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 1)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_58(int iParam0)
{
	return func_50(1, iParam0);
}

char* func_59(int iParam0)
{
	switch (Global_86242[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_60(int iParam0)
{
	return func_61(iParam0);
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_62(var uParam0, int iParam1)
{
	unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x4BD4D58838D3F8E5(iParam1);
	unk_0x7E86CE5F658823DB();
}

void func_63(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x94E72F17611BCD3C(Global_86396[iParam1 /*19*/].f_18, iParam2))
	{
		if (!unk_0x6B08EC9A88700FBB(&(Global_86396[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_25(uParam0, uParam0->f_1.f_276, Global_86396[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			unk_0xEDB9A377CD8B7F03(&(Global_86396[iParam1 /*19*/].f_18), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0x6B08EC9A88700FBB(&(Global_86396[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_86396[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0xEDB9A377CD8B7F03(&(Global_86396[iVar0 /*19*/].f_18), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_64(var uParam0)
{
	func_26(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4BD4D58838D3F8E5(99);
	unk_0x7E86CE5F658823DB();
	func_19(uParam0);
}

void func_65(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
			unk_0x4BD4D58838D3F8E5(99);
			unk_0x7E86CE5F658823DB();
			break;
	}
	unk_0x35611EEE7A1FFEDB(0);
}

int func_66(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97358.f_7341.f_99.f_203[iParam0];
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_68(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	bVar0 = false;
	if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (!func_141(0))
			{
				if (func_132(8))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
						fVar4 = unk_0x4F034F83AF91EC27(Var1.f_0, Var1.f_1);
						fVar5 = unk_0xE3DAC530D2CCDAE3((uParam0->f_404 - fVar4));
						if (fVar5 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar6 = uParam0->f_404;
							if (fVar6 > 180f)
							{
								fVar6 = (fVar6 - 360f);
							}
							else if (fVar6 < -180f)
							{
								fVar6 = (fVar6 + 360f);
							}
							if ((fVar6 - fVar4) < fVar5)
							{
								fVar5 = unk_0xE3DAC530D2CCDAE3((fVar6 - fVar4));
							}
							if (fVar5 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 = (fVar4 - 360f);
								}
								else if (fVar4 < -180f)
								{
									fVar4 = (fVar4 + 360f);
								}
								if ((uParam0->f_404 - fVar4) < fVar5)
								{
									fVar5 = unk_0xE3DAC530D2CCDAE3((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = unk_0xE3DAC530D2CCDAE3((fVar6 - fVar4));
									}
									if (fVar5 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_131(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0);
			}
			else if (func_130(uParam0->f_451, 1))
			{
				func_128(&(uParam0->f_451));
				func_114(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_128(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = func_11(1, *uParam0);
		func_78(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (unk_0x205C5BF7277043DF(2, iLocal_35) || unk_0x205C5BF7277043DF(2, 238))) || unk_0x94E72F17611BCD3C(uParam0->f_449, 8))
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 8);
			func_70(uParam0, 0);
		}
	}
}

void func_70(var uParam0, bool bParam1)
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
		if (!bParam1)
		{
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0f, (1f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (1f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0x7844FB9DB5F9220C(Var0, &(Var0.f_2));
			unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0, 1, 0, 0, 1);
			unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), uParam0->f_404);
			unk_0x5EF916489F3787FC(0);
			unk_0x203B2685C1715644(0, 1065353216);
			unk_0xC9FC7EC443B3E63E(unk_0x9F92518438215DD0(), joaat("MotionState_Idle"), 0, 0, 0);
			unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 1, 0);
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 134);
	}
	unk_0xB3B57AEE7B7BA0E2(1);
	func_73(0);
	func_72();
	unk_0x1B4F451D66F090A7();
	unk_0xDEAFB44F1BAAE861(17);
	unk_0xE815F1CF770AD8E9(0);
	func_71(&(uParam0->f_649), 0, 1);
	func_14(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_14(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_14(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_14(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	unk_0x35611EEE7A1FFEDB(1);
	while (unk_0xC9EED58014EF1F40())
	{
		unk_0x35611EEE7A1FFEDB(1);
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar3 = unk_0x8AE51093FA7FBE3F(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0xC70BF1179D8B6A50(iVar3);
	}
	unk_0xF0F2723B5E3BA442();
	func_65(uParam0);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 7);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 2);
	Global_86374 = 0;
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x5329DB72517417AE(*uParam0))
	{
		if (bParam2)
		{
			unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0x8E3093821480140B(*uParam0))
		{
			unk_0x45826D2663F7FD9C(*uParam0, 0);
		}
		unk_0x0CF4B2266E47C15F(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0x2A09DBB640E50468();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_72()
{
	Global_17098.f_5 = 0;
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		func_77();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_141(0))
		{
			func_74(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_74(int iParam0)
{
	if (Global_14551)
	{
		func_76(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_75())
	{
		Global_14393.f_1 = 3;
	}
}

int func_75()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_141(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

void func_77()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_78(var uParam0)
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = unk_0x87872B5AB967B51E(0, 1, 1);
	if (!unk_0x6B08EC9A88700FBB(sVar0, uParam0->f_466))
	{
		func_8(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_112();
	func_102(uParam0);
	func_86(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_83(uParam0);
	}
	if (func_21())
	{
		func_19(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0x17103F66FBB44C3C();
	func_79(&(uParam0->f_649), unk_0x94E72F17611BCD3C(uParam0->f_449, 4), (unk_0x94E72F17611BCD3C(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1);
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 7))
	{
		if ((!unk_0xC42238EA2EBA3C42() && unk_0x9685D9855970A029()) && !unk_0xC8557993A78C1B3E())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0x94E72F17611BCD3C(uParam0->f_449, 11) && !unk_0x94E72F17611BCD3C(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483 == 0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						unk_0x10243718C63A4D3E(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0xB3B57AEE7B7BA0E2(0);
	unk_0xAB10BEEBB0614A3E(2);
	unk_0xAB10BEEBB0614A3E(1);
	unk_0xAB10BEEBB0614A3E(8);
	unk_0xAB10BEEBB0614A3E(7);
	unk_0xAB10BEEBB0614A3E(3);
	unk_0x5AE3660DC80129B3();
	unk_0xE1C6E65EF48836BB(82, 66);
	unk_0x6DE6CA985EC34A26(17, 0.612f, 0.818f);
	unk_0x17F6CBD114515E10();
	if (!unk_0xC42238EA2EBA3C42())
	{
		unk_0x303F3ACCD1D0223D(2, 201);
	}
	unk_0x303F3ACCD1D0223D(2, 202);
	unk_0x303F3ACCD1D0223D(2, 188);
	unk_0x303F3ACCD1D0223D(2, 187);
	unk_0x303F3ACCD1D0223D(2, 189);
	unk_0x303F3ACCD1D0223D(2, 190);
	if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 7))
	{
		if (!unk_0xC42238EA2EBA3C42())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (2.9f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0x7844FB9DB5F9220C(Var2, &(Var2.f_2));
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 134);
			unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
			unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 1);
			unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var2, 1, 0, 0, 1);
			unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), uParam0->f_404);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 7);
		}
	}
}

void func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	unk_0x8006B3A8DB2A6002(2);
	func_82(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x803746EA4F29A533())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x286FD331C17C5174(2))
	{
		fVar5 = unk_0x0B8E1CA0A30892C0(2, 239);
		fVar6 = unk_0x0B8E1CA0A30892C0(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF2DB717A73826179(((fVar7 * fParam5) * 127f));
			iVar0[3] = -unk_0xF2DB717A73826179(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0x0B8E1CA0A30892C0(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0x0B8E1CA0A30892C0(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_81((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_81((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x17103F66FBB44C3C())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x286FD331C17C5174(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x17103F66FBB44C3C() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(unk_0xBBDA792448DB5A89(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(unk_0xBBDA792448DB5A89(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * unk_0x0000000050597EE2());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x286FD331C17C5174(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_80((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_80((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_80((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_80(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_80(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_80(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0x286FD331C17C5174(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x286FD331C17C5174(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x4841051C33809BC4(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x17103F66FBB44C3C() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x4841051C33809BC4(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x17103F66FBB44C3C() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_80(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_80(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam3)
		{
			if (unk_0xBBDA792448DB5A89(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	unk_0xD137F1896B8B6A2E(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x5329DB72517417AE(*uParam0))
	{
		if (unk_0x8E3093821480140B(*uParam0))
		{
			if (unk_0xC76849C67C8DB633(*uParam0))
			{
				unk_0xBEBACCF1FF321071();
			}
		}
	}
}

float func_80(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_82(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x463FD061585D3DF9(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 218) * 127f));
		}
		if (!unk_0x463FD061585D3DF9(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 219) * 127f));
		}
		if (!unk_0x463FD061585D3DF9(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 220) * 127f));
		}
		if (!unk_0x463FD061585D3DF9(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 221) * 127f));
		}
	}
	if (unk_0x286FD331C17C5174(2))
	{
		if (bParam5)
		{
			if (unk_0x803746EA4F29A533())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xD67D7DFAF4969260())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_83(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_11(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (unk_0x94E72F17611BCD3C(uParam0->f_449, 19))
				{
					uParam0->f_452 = unk_0x17103F66FBB44C3C() + 500;
				}
				else
				{
					uParam0->f_452 = unk_0x17103F66FBB44C3C();
				}
			}
			else if (unk_0x17103F66FBB44C3C() > uParam0->f_452)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_1.f_303, iVar1 + 4))
						{
							func_85(uParam0, iVar1);
							if (unk_0x94E72F17611BCD3C(uParam0->f_1.f_370, iVar1))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 19);
							}
							else
							{
								unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_84(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_7341.f_99.f_217[iParam0]), iParam1);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_7341.f_99.f_217[iParam0]), iParam1);
	}
}

void func_85(var uParam0, int iParam1)
{
	unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
	unk_0x4BD4D58838D3F8E5(99);
	unk_0x7E86CE5F658823DB();
	func_26(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_24(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_20() && unk_0x9685D9855970A029()) && !unk_0xC42238EA2EBA3C42())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 13))
			{
				if (func_87(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 11);
					}
					else
					{
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 13);
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 11))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 11);
			}
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 13))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_87(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_101(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_88(sParam2, iParam3, 0);
}

int func_88(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xC318E8D9E0AA1394(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_100();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_99(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_98();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_92();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_91())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
				}
			}
			if (func_75())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_90();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_89();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_100();
	}
	return 0;
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_90()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_92()
{
	if (func_346(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_93();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_93()
{
	func_94();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_94()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_97(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_96(unk_0x9F92518438215DD0());
			if (func_95(iVar0) && (!func_346(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_95(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_95(int iParam0)
{
	return iParam0 < 3;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_97(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_97(int iParam0)
{
	if (func_95(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_98()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_100()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_101(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_102(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	uParam0->f_453++;
	if (unk_0x54610002CC66A3C6(2))
	{
		func_8(uParam0);
	}
	if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 11))
	{
		if ((unk_0x205C5BF7277043DF(2, iLocal_36) || unk_0x205C5BF7277043DF(2, iLocal_38)) || (unk_0x286FD331C17C5174(2) && (unk_0x205C5BF7277043DF(2, iLocal_37) || unk_0x205C5BF7277043DF(2, iLocal_39))))
		{
			func_110();
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 12))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 13);
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 11);
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 10);
			}
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 12);
		}
	}
	func_82(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0x286FD331C17C5174(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_81((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_81((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (unk_0x803746EA4F29A533())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > unk_0x17103F66FBB44C3C())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 4);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 4);
		}
	}
	if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 10))
	{
		if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 11))
		{
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((unk_0x17103F66FBB44C3C() - uParam0->f_457) > 25000)
					{
						func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (unk_0x17103F66FBB44C3C() + unk_0x073B65E051D2F03E(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || unk_0x859C6F0CEF1CB9FE(2, 188)) || unk_0x859C6F0CEF1CB9FE(2, 189)) || (unk_0x286FD331C17C5174(2) && unk_0x4841051C33809BC4(2, 241)))
					{
						unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4BD4D58838D3F8E5(8);
						unk_0x7E86CE5F658823DB();
						unk_0x48F299599202B77A(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x648805DCC544B55F();
						uParam0->f_456 = unk_0x17103F66FBB44C3C();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || unk_0x859C6F0CEF1CB9FE(2, 187)) || unk_0x859C6F0CEF1CB9FE(2, 190)) || (unk_0x286FD331C17C5174(2) && unk_0x4841051C33809BC4(0, 242)))
					{
						unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4BD4D58838D3F8E5(9);
						unk_0x7E86CE5F658823DB();
						unk_0x48F299599202B77A(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x648805DCC544B55F();
						uParam0->f_456 = unk_0x17103F66FBB44C3C();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || unk_0x859C6F0CEF1CB9FE(2, 188)) || (unk_0x286FD331C17C5174(2) && unk_0x4841051C33809BC4(0, 40)))
					{
						unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4BD4D58838D3F8E5(8);
						unk_0x7E86CE5F658823DB();
						if (uParam0->f_416 != 0)
						{
							unk_0x86F4B3D6FF8F65DE(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (unk_0x94E72F17611BCD3C(uParam0->f_449, 9))
						{
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 9);
							func_8(uParam0);
						}
						uParam0->f_456 = unk_0x17103F66FBB44C3C();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || unk_0x859C6F0CEF1CB9FE(2, 187)) || (unk_0x286FD331C17C5174(2) && unk_0x4841051C33809BC4(0, 41)))
					{
						unk_0x48F299599202B77A(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x4BD4D58838D3F8E5(9);
						unk_0x7E86CE5F658823DB();
						if (uParam0->f_416 != 1)
						{
							unk_0x86F4B3D6FF8F65DE(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (unk_0x94E72F17611BCD3C(uParam0->f_449, 9))
						{
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 9);
							func_8(uParam0);
						}
						uParam0->f_456 = unk_0x17103F66FBB44C3C();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_20() || unk_0x94E72F17611BCD3C(uParam0->f_449, 13))
				{
					if (unk_0x205C5BF7277043DF(2, iLocal_36) || (unk_0x286FD331C17C5174(2) && unk_0x205C5BF7277043DF(2, iLocal_37)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_20())
								{
									if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x17103F66FBB44C3C();
										iVar0 = func_31(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x48F299599202B77A(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0x648805DCC544B55F();
											func_12(uParam0, 1);
											func_14(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_14(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_97358.f_1[*uParam0] = 1;
											unk_0x35611EEE7A1FFEDB(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_11(4, *uParam0))
								{
									iVar0 = func_31(*uParam0);
									iVar1 = func_66(iVar0);
									if (uParam0->f_450 < Global_86396[iVar1 /*19*/])
									{
										unk_0x48F299599202B77A(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0x648805DCC544B55F();
										func_12(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_84(4, *uParam0, 1);
									if (!func_2(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_84(5, *uParam0, 1);
								}
								unk_0x86F4B3D6FF8F65DE(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_31(*uParam0);
								iVar1 = func_66(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_86396[iVar1 /*19*/])
								{
									if (Global_97358.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_41(Global_97358.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_86396[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_86242[iVar3 /*5*/] != Global_86396[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0x94E72F17611BCD3C(Global_97358.f_1.f_116, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_118, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_38(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_97358.f_1.f_12[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_12(uParam0, 1);
								func_63(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0x205C5BF7277043DF(2, iLocal_38) || (unk_0x286FD331C17C5174(2) && unk_0x205C5BF7277043DF(2, iLocal_39)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_31(*uParam0);
								iVar1 = func_66(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_12(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
									func_36(uParam0, uParam0->f_450, iVar6);
									unk_0x86F4B3D6FF8F65DE(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x17103F66FBB44C3C();
								}
								else if (!func_347(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x4BD4D58838D3F8E5(iVar7);
											unk_0x7E86CE5F658823DB();
											unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x4BD4D58838D3F8E5(iVar7);
											unk_0x63E5FA5DEE979BD6(true);
											unk_0x7E86CE5F658823DB();
											iVar7++;
										}
										unk_0x86F4B3D6FF8F65DE(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_349(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_12(uParam0, 1);
										uParam0->f_456 = unk_0x17103F66FBB44C3C();
										uParam0->f_465 = 0;
										func_107(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_31(*uParam0);
									iVar1 = func_66(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
									func_6(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_349(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_106(8, 0);
									func_84(5, 1, 0);
									uParam0->f_427 = 0;
									func_12(uParam0, 1);
									uParam0->f_456 = unk_0x17103F66FBB44C3C();
									func_6(uParam0, 3, 0);
								}
								unk_0x86F4B3D6FF8F65DE(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_31(*uParam0);
		iVar1 = func_66(iVar0);
		if (uParam0->f_450 >= Global_86396[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
			unk_0x4BD4D58838D3F8E5(99);
			unk_0x4BD4D58838D3F8E5(-1);
			unk_0x7E86CE5F658823DB();
			func_24(uParam0, 0, 1);
			func_6(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 17))
			{
				iVar10 = Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
				func_36(uParam0, uParam0->f_450, iVar10);
			}
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x17103F66FBB44C3C();
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 10);
	}
	else if (unk_0xC9EED58014EF1F40())
	{
		if (((!func_13(&(uParam0->f_1.f_108[0 /*4*/])) && !func_13(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_13(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_13(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0x9995BC98253B3E69(uParam0->f_680))
		{
			iVar11 = unk_0x448C2A928B874D3F(uParam0->f_680);
			iVar1 = func_30(*uParam0, iVar11);
			iVar0 = func_31(*uParam0);
			func_106(iVar0, iVar1);
			if (!func_2(0))
			{
				func_105(*uParam0);
			}
			unk_0x86F4B3D6FF8F65DE(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_63(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_349(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_62(uParam0, iVar12);
				if (iVar12 < Global_86396[iVar1 /*19*/])
				{
					unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
					unk_0x4BD4D58838D3F8E5(iVar12);
					unk_0x63E5FA5DEE979BD6(true);
					unk_0x7E86CE5F658823DB();
				}
				else
				{
					unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
					unk_0x4BD4D58838D3F8E5(iVar12);
					unk_0x63E5FA5DEE979BD6(false);
					unk_0x7E86CE5F658823DB();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_84(5, *uParam0, 1);
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			unk_0x35611EEE7A1FFEDB(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (unk_0x9995BC98253B3E69(uParam0->f_681))
		{
			iVar13 = unk_0x448C2A928B874D3F(uParam0->f_681);
			iVar0 = func_31(*uParam0);
			iVar1 = func_66(iVar0);
			Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_97358.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			unk_0x48F299599202B77A(uParam0->f_413, "UPDATE_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_450);
			unk_0x4BD4D58838D3F8E5(iVar13);
			unk_0x4BD4D58838D3F8E5(iVar14);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(uParam0->f_413, "FOCUS_VIEW");
			unk_0x4BD4D58838D3F8E5(99);
			unk_0x7E86CE5F658823DB();
			unk_0x86F4B3D6FF8F65DE(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 17);
			func_104(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x17103F66FBB44C3C();
			uParam0->f_457 = uParam0->f_456;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 10);
			if (!func_13(&(uParam0->f_1.f_108[0 /*4*/])) && !func_13(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				unk_0x35611EEE7A1FFEDB(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (unk_0x9995BC98253B3E69(uParam0->f_682))
		{
			iVar15 = unk_0x448C2A928B874D3F(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					unk_0x86F4B3D6FF8F65DE(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_103(uParam0, uParam0->f_427);
	}
}

void func_103(var uParam0, int iParam1)
{
	if (!func_20())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_119, 14))
					{
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 10);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 14);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_119, 16))
					{
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 10);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 16);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_119, 15))
					{
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 10);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 15);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_119, 17))
					{
						if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 10);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 17);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_104(var uParam0, int iParam1)
{
	if (!unk_0x94E72F17611BCD3C(uParam0->f_463, iParam1))
	{
		if (!unk_0x94E72F17611BCD3C(Global_97358.f_1.f_119, iParam1))
		{
			if (!unk_0x6B08EC9A88700FBB(&(uParam0->f_1.f_304[iParam1 /*2*/]), ""))
			{
				func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_119), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 0))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 1))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 3))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 6))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 0))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 7))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 7))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 1))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 8))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 8))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 4))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 2))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 5))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 15))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 3))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 2))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 14))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 14))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 18))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 6))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 17))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 12))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 10))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 0))
								{
									if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 7))
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 11))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 1))
								{
									if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 8))
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 13))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 19))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 4))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 16))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 5))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0x94E72F17611BCD3C(Global_97358.f_1.f_117, 20))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_463), iParam1);
	}
}

void func_105(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_97358.f_7341.f_99.f_203[7];
			if (iVar0 == 1)
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_97358.f_7341.f_99.f_203[8];
			if (iVar0 == 3)
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_97358.f_7341.f_99.f_203[10];
			if (iVar0 == 6)
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_97358.f_7341.f_99.f_203[11];
			if (iVar0 == 8)
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				unk_0xC715C0FD7A589EA7(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_106(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_97358.f_7341.f_99.f_203[iParam0] == iParam1)
	{
		return;
	}
	Global_97358.f_7341.f_99.f_203[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_97358.f_7341.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97358.f_7341.f_99.f_58[iParam0] = iParam1;
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_97358.f_7341.f_99.f_203[7];
			iVar0 = 0;
			while (iVar0 < Global_86396[iVar1 /*19*/])
			{
				switch (Global_97358.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 0);
						break;
					
					case 10:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 1);
						unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 14);
						break;
					
					case 7:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 2);
						break;
					
					case 12:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 3);
						unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 4);
						break;
					
					case 8:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 5);
						break;
					
					case 9:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 6);
						break;
				}
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_119), Global_97358.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_97358.f_7341.f_99.f_203[9];
			iVar0 = 0;
			while (iVar0 < Global_86396[iVar1 /*19*/])
			{
				switch (Global_97358.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 7);
						break;
					
					case 10:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 8);
						unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 14);
						break;
					
					case 11:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 9);
						unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 17);
						break;
				}
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_119), Global_97358.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_97358.f_7341.f_99.f_203[10];
			iVar0 = 0;
			while (iVar0 < Global_86396[iVar1 /*19*/])
			{
				switch (Global_97358.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 10);
						break;
					
					case 10:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 11);
						unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 14);
						break;
					
					case 5:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 12);
						break;
					
					case 3:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 13);
						break;
					
					case 4:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 17);
						break;
					
					case 7:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 14);
						break;
					
					case 12:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 15);
						unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 19);
						break;
					
					case 8:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 16);
						break;
					
					case 9:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 18);
						break;
					
					case 13:
						unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_117), 20);
						unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_119), 16);
						break;
				}
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_119), Global_97358.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 0);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 1);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 2);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 3);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 4);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 5);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 6);
			break;
		
		case 2:
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 7);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 8);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 9);
			break;
		
		case 3:
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 10);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 11);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 12);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 13);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 14);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 15);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 16);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 17);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 18);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 19);
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_117), 20);
			break;
	}
}

void func_110()
{
	Global_14558 = 0;
	func_111();
}

void func_111()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

void func_112()
{
	unk_0x125C94DBA75FDFFA();
	func_113();
}

void func_113()
{
	Global_17098.f_134 = 1;
}

void func_114(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 9);
	func_12(uParam0, 0);
	if (!unk_0xC42238EA2EBA3C42())
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (Global_35957 == 1)
			{
				func_119(unk_0x9F92518438215DD0());
			}
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (2.9f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0x7844FB9DB5F9220C(Var0, &(Var0.f_2));
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 134);
			unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0, 1, 0, 0, 1);
			unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), uParam0->f_404);
			unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
			unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 1);
		}
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 7);
	}
	unk_0xB3B57AEE7B7BA0E2(0);
	func_73(1);
	func_118();
	unk_0x2D600F28499293DD();
	unk_0xFC90BEDEE248C76D(uParam0->f_401, 5f, 1, 1, 0, 0);
	unk_0x4A52C1F18F832119(uParam0->f_401, 5f);
	unk_0xE815F1CF770AD8E9(1);
	unk_0xE1C6E65EF48836BB(82, 66);
	unk_0x6DE6CA985EC34A26(17, 0.612f, 0.818f);
	unk_0x17F6CBD114515E10();
	func_117(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar3 = unk_0x8AE51093FA7FBE3F(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0x151286FE6ED20A12(iVar3);
	}
	unk_0xD667AAD5D0EF26DB(&(Global_86313[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xA0BBC0D1B879FCA3(unk_0xA4F68703404B9667(unk_0x9F92518438215DD0()));
	}
	func_116(0);
	func_115();
	unk_0x12988F278DF9017C(0);
	if (unk_0x708CE249B4F97BF8())
	{
		unk_0x48F299599202B77A(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		unk_0x63E5FA5DEE979BD6(false);
		unk_0x7E86CE5F658823DB();
	}
	uParam0->f_466 = unk_0x87872B5AB967B51E(2, 10, 1);
	unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 2);
	Global_86374 = 1;
	func_7(uParam0, uParam0->f_464, 0);
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		func_16(iVar0);
		iVar0++;
	}
	Global_97358.f_23635.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	if (unk_0xC9EED58014EF1F40())
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
}

void func_116(bool bParam0)
{
	if (!bParam0)
	{
		Global_96003 = unk_0x17103F66FBB44C3C() + 250;
	}
	Global_96000 = bParam0;
}

void func_117(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = uParam11;
	*uParam0 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x45826D2663F7FD9C(*uParam0, 1);
	unk_0xD137F1896B8B6A2E(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x79DDEE9A5547C864(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xD8BDF8D499C93FD6(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0xC4364D93DBC0832F(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_118()
{
	Global_17098.f_5 = 1;
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return;
	}
	iVar0 = func_127(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35760[iVar0 /*5*/];
		func_122(1, iVar1, 1);
		return;
	}
	iVar2 = func_121(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_120(iVar2);
}

void func_120(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x9F92518438215DD0())
		{
			Global_35955 = 0;
		}
	}
	Global_35734[iParam0 /*5*/] = 13;
	Global_35734[iParam0 /*5*/].f_1 = 0;
	Global_35734[iParam0 /*5*/].f_2 = 0;
	Global_35734[iParam0 /*5*/].f_3 = 0;
	Global_35734[iParam0 /*5*/].f_4 = 0;
	Global_35733 = (Global_35733 - 1);
	if (Global_35733 < 0)
	{
		Global_35733 = 0;
	}
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	func_123(iParam0, iParam1, iParam2, 0, 0);
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_125(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_124();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = iParam4;
}

int func_124()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35841[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	if (func_126(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35841[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35841[iVar0 /*5*/])
			{
				if (iParam1 == Global_35841[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_35760[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_128(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_129(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_130(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_129(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x378E80A2B7D7C8DF(unk_0x2563F6EECD8726D3()))
	{
		return 0;
	}
	if (func_141(0))
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x7B47A371E2D93C2C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		if (!*uParam0 == -1)
		{
			func_128(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = unk_0x81ACA1EEF1E4410D();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x9E9AFDBF482248F6(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*uParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar0 = func_93();
				if (!func_95(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_140()) || Global_96405) || Global_24446) || func_139()) || func_99(8, -1)) || func_138()) || func_137()) || func_136()) || func_135()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_140()) || Global_24446) || func_139()) || func_99(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_140()) || Global_96405) || Global_24446) || func_139()) || func_99(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_140()) || Global_96405) || Global_24446) || func_139()) || func_99(8, -1)) || func_138()) || func_137()) || func_135()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_140() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_99(8, -1)) || func_135()) || func_134()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_99(8, -1) || func_138()) || func_137()) || func_134()) || func_133())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_140()) || Global_24446) || func_139()) || func_99(8, -1)) || func_137()) || func_136()) || func_135()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_140()) || func_137()) || Global_96405) || Global_24446) || func_139()) || Global_35957) || func_99(8, -1)) || func_136()) || func_134()) || func_135()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_140()) || Global_96405) || Global_24446) || func_139()) || func_99(8, -1)) || func_136()) || func_134()) || func_138()) || func_137()) || func_135())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_133()
{
	return Global_90001.f_1;
}

int func_134()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_135()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_90014.f_291 > 0;
}

bool func_138()
{
	return Global_90014.f_290 > 0;
}

var func_139()
{
	return Global_1315900;
}

int func_140()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_142(int iParam0)
{
	return func_143(iParam0, Global_34913);
}

int func_143(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_347(25))
	{
		iVar0 = func_66(func_31(4));
		if (iVar0 != iLocal_48)
		{
			unk_0x6308E81AF3BAB9A5();
			switch (iVar0)
			{
				case 8:
					sLocal_41 = "BS_2A_INT";
					break;
				
				case 9:
					sLocal_41 = "BS_2B_INT";
					break;
			}
			iLocal_48 = iVar0;
		}
		if (iLocal_48 != -1)
		{
			unk_0x4CE9C0B6BB26989C(sLocal_41, 8);
		}
		if (unk_0x3E477C98C0B83EB5())
		{
			unk_0x3C3A3F399B9E361E("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_347(26))
	{
		if (func_347(25))
		{
			if (unk_0xCDAB4021761F1A7B(sLocal_41))
			{
				if (!func_2(0))
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
					{
						unk_0x717851935436D1B0(iLocal_105, "Michael", 0, joaat("player_zero"), 0);
					}
				}
				else if (!unk_0x0BA451447C3B1A8D(iLocal_105))
				{
					unk_0x717851935436D1B0(iLocal_105, "Michael", 0, joaat("player_zero"), 0);
				}
				if (!unk_0x0BA451447C3B1A8D(iLocal_108))
				{
					unk_0x717851935436D1B0(iLocal_108, "Lester", 0, joaat("ig_lestercrest"), 0);
				}
				if (!unk_0x0BA451447C3B1A8D(iLocal_106))
				{
					unk_0x717851935436D1B0(iLocal_106, "Franklin", 0, joaat("player_one"), 0);
				}
				if (!unk_0x0BA451447C3B1A8D(iLocal_107))
				{
					unk_0x717851935436D1B0(iLocal_107, "Trevor", 0, joaat("player_two"), 0);
				}
				func_73(1);
				func_116(1);
				func_194(1, 1, 1, 0);
				iVar1 = 0;
				while (iVar1 < func_193(4))
				{
					if (func_191(4, iVar1) == 12)
					{
						func_182(-837794877);
					}
					iVar1++;
				}
				if (bLocal_46)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 256;
				}
				unk_0xEFAE0030469E9B12(iVar2);
				if (func_2(0))
				{
					unk_0x5FCD2A3D73E4775F(0, 0, 0, 0);
				}
				func_107(25, 0);
				iLocal_43 = unk_0x17103F66FBB44C3C();
			}
		}
		else if (unk_0xC42238EA2EBA3C42())
		{
			iLocal_43 = iLocal_43;
			func_112();
			if (unk_0x87E70BB14C5C25EE("LESTER", 0))
			{
				if (unk_0x746960881FB19A89(iLocal_108))
				{
					unk_0x7763EDCBED8A5840(&iLocal_108);
				}
			}
			if (unk_0x87E70BB14C5C25EE("MICHAEL", 0))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_105))
				{
					unk_0xC9FC7EC443B3E63E(iLocal_105, joaat("MotionState_Walk"), 0, 1, 0);
					if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
					{
						unk_0x3F8D4F85B63FE448(unk_0xCFC72E446B0B3AD7(), 1f, 2000, 0, 1, 0);
					}
				}
				func_181(0);
			}
			if (unk_0x87E70BB14C5C25EE("FRANKLIN", 0))
			{
				if (unk_0x746960881FB19A89(iLocal_106))
				{
					unk_0x7763EDCBED8A5840(&iLocal_106);
				}
			}
			if (unk_0x87E70BB14C5C25EE("TREVOR", 0))
			{
				if (unk_0x746960881FB19A89(iLocal_107))
				{
					unk_0x7763EDCBED8A5840(&iLocal_107);
				}
			}
			if (unk_0x0DEEB038117360A3(1))
			{
				unk_0x5EF916489F3787FC(0);
				unk_0x203B2685C1715644(0, 1065353216);
			}
		}
		else if (iLocal_44 == -1 && !func_2(0))
		{
			iLocal_44 = unk_0x17103F66FBB44C3C() + 3500;
		}
		else if (unk_0x17103F66FBB44C3C() > iLocal_44 || func_2(0))
		{
			if (func_2(0))
			{
				unk_0xC6EA7B53F52F1DF9(0);
			}
			else
			{
				Global_54750 = 0;
				Global_90001 = 0;
				func_180();
			}
			func_73(0);
			func_194(0, 1, 1, 0);
			func_179();
			func_177(&(Global_97358.f_1729.f_539), 77);
			func_152(&(Global_97358.f_1729.f_539), 77);
			func_151(&iLocal_45);
			unk_0xF76EE56D3E7DAF1B(&iLocal_42, 3);
			func_107(26, 0);
			unk_0xD643E324F7E6A17B(uLocal_154, 0);
			if (iLocal_155 != -1)
			{
				if (unk_0xB657144FEEE0F032(iLocal_155))
				{
					unk_0xA2B9221D77CA9020(iLocal_155);
				}
			}
			unk_0x69A5FB1BDF9C17C4();
			unk_0x612AAC6329066DF0(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 1, 0);
			unk_0xF72219EF3DF47F66(5);
			func_145(4, 0);
		}
	}
	else if (!func_347(25))
	{
		if (unk_0xCDAB4021761F1A7B(sLocal_41))
		{
			unk_0x6308E81AF3BAB9A5();
		}
	}
}

void func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_40(iVar1))
		{
			if (!func_39(iVar1))
			{
				if (!(iVar1 == 11 && iParam0 == 3))
				{
					switch (iVar1)
					{
						case 1:
							func_149(4, 1);
							break;
						
						case 4:
							func_149(8, 1);
							break;
						
						case 6:
							func_149(10, 1);
							break;
						
						case 7:
							func_149(1, 1);
							break;
						
						case 8:
							func_149(3, 1);
							break;
						
						case 9:
							func_149(6, 1);
							break;
						
						case 10:
							func_149(9, 1);
							break;
						
						case 12:
							func_149(11, 1);
							break;
						
						case 13:
							func_149(12, 1);
							break;
						
						case 11:
							if (func_148(91))
							{
								func_149(0, 1);
							}
							break;
						
						case 5:
							if (func_148(91))
							{
								func_149(2, 1);
							}
							break;
						
						case 3:
							if (func_148(67))
							{
								func_149(5, 1);
							}
							break;
						
						case 2:
							if (func_148(77))
							{
								func_149(7, 1);
							}
							break;
						}
					}
				}
		}
		iVar0++;
	}
	if (!bParam1)
	{
		if (!func_147(69))
		{
			func_22("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_146("DI_FEED_HST");
	}
}

void func_146(char* sParam0)
{
	unk_0x3BE5C2319988C0DB("");
	unk_0xE11A0FE0961720A9("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

int func_148(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97358.f_7341.f_328[iParam0 /*6*/];
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!unk_0x94E72F17611BCD3C(Global_97358.f_29607.f_1, iVar0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_29607.f_1), iVar0);
			if (!bParam1)
			{
				func_146(func_150(iParam0));
			}
		}
	}
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

void func_151(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34875)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

void func_152(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_153(uParam0, 0, 12);
			break;
		
		case 19:
			func_153(uParam0, 1, 13);
			break;
		
		case 29:
			func_153(uParam0, 1, 14);
			break;
		
		case 30:
			func_153(uParam0, 2, 15);
			func_153(uParam0, 1, 29);
			break;
		
		case 32:
			func_153(uParam0, 1, 16);
			func_153(uParam0, 0, 17);
			break;
		
		case 39:
			func_153(uParam0, 0, 21);
			func_153(uParam0, 1, 20);
			break;
		
		case 31:
			func_153(uParam0, 0, 18);
			break;
		
		case 20:
			func_153(uParam0, 2, 22);
			break;
		
		case 66:
			func_153(uParam0, 1, 23);
			break;
		
		case 68:
			func_153(uParam0, 1, 24);
			break;
		
		case 70:
			func_153(uParam0, 1, 67);
			break;
		
		case 8:
			func_153(uParam0, 1, 25);
			func_153(uParam0, 2, 26);
			break;
		
		case 67:
			func_153(uParam0, 1, 27);
			break;
		
		case 9:
			func_153(uParam0, 2, 28);
			break;
		
		case 38:
			func_153(uParam0, 2, 30);
			func_153(uParam0, 1, 19);
			break;
		
		case 83:
			func_153(uParam0, 2, 33);
			break;
		
		case 45:
			func_153(uParam0, 1, 35);
			break;
		
		case 64:
			func_153(uParam0, 0, 36);
			func_153(uParam0, 1, 37);
			break;
		
		case 91:
			func_153(uParam0, 0, 41);
			break;
		
		case 42:
			func_153(uParam0, 0, 58);
			Global_89503[0 /*74*/] = 0;
			func_153(uParam0, 2, 59);
			Global_89503[2 /*74*/] = 0;
			break;
		
		case 41:
			func_153(uParam0, 1, 42);
			func_153(uParam0, 2, 42);
			break;
		
		case 15:
			func_153(uParam0, 0, 46);
			func_153(uParam0, 1, 47);
			break;
		
		case 16:
			func_153(uParam0, 0, 48);
			break;
		
		case 48:
			func_153(uParam0, 1, 50);
			func_153(uParam0, 2, 51);
			break;
		
		case 74:
			func_153(uParam0, 0, 52);
			func_153(uParam0, 1, 66);
			break;
		
		case 76:
			func_153(uParam0, 1, 53);
			func_153(uParam0, 2, 54);
			func_153(uParam0, 0, 62);
			break;
		
		case 75:
			func_153(uParam0, 0, 61);
			func_153(uParam0, 1, 31);
			break;
		
		case 69:
			func_153(uParam0, 1, 63);
			break;
		
		case 84:
			func_153(uParam0, 0, 68);
			func_153(uParam0, 2, 69);
			break;
		
		case 85:
			func_153(uParam0, 0, 64);
			func_153(uParam0, 2, 65);
			break;
		
		case 93:
			func_153(uParam0, 1, 38);
			func_153(uParam0, 2, 39);
			break;
		
		case 11:
			func_153(uParam0, 2, 55);
			break;
		
		case 77:
			func_153(uParam0, 1, 56);
			func_153(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_153(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	var uVar75;
	var uVar78;
	var uVar79;
	var uVar82;
	
	if (!unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[0], 9))
	{
		iVar0 = Global_97358.f_16787[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_97358.f_16787[iParam1] = iParam2;
	uParam0->f_1524[iParam1] = func_166();
	if (!func_165(iParam2, &(uParam0->f_1528[iParam1 /*3*/]), &(uParam0->f_1538[iParam1])))
	{
		return 0;
	}
	if (!func_164(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f))
	{
		if (!func_164(Global_88538[iParam2 /*3*/], 0f, 0f, 0f))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 25;
			Var1.f_57 = 2;
			if (func_154(iParam1, iParam2, &Var1, &uVar75, &uVar78, &uVar79, &uVar82))
			{
				Global_89503[iParam1 /*74*/] = { Var1 };
			}
		}
	}
	uParam0->f_1542[iParam1] = 0;
	uParam0->f_1546[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1556[iParam1] = 0;
	return 1;
}

int func_154(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_60 = 255;
	uParam2->f_61 = 255;
	uParam2->f_62 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_89503[iParam0 /*74*/] };
			if (Global_89726[iParam0] != 2)
			{
				if (unk_0xABDC7B22D1A3C451(Global_89734[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, 1))
				{
					if (Global_89726[iParam0] == 1)
					{
						*uParam3 = { Global_89734[iParam0 /*3*/] - Global_97358.f_1729.f_539.f_1528[iParam0 /*3*/] };
						*uParam4 = (Global_89744[iParam0] - Global_97358.f_1729.f_539.f_1538[iParam0]);
						if (unk_0xA8CEACB4F35AE058(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_89734[iParam0 /*3*/] - Global_97358.f_1729.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_89744[iParam0] - Global_97358.f_1729.f_539.f_1538[iParam0]);
				if (unk_0xA8CEACB4F35AE058(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_89503[iParam0 /*74*/] };
			if (Global_89726[iParam0] != 2)
			{
				*uParam3 = { Global_89734[iParam0 /*3*/] - Global_97358.f_1729.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_89744[iParam0] - Global_97358.f_1729.f_539.f_1538[iParam0]);
				if (unk_0xA8CEACB4F35AE058(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_89503[iParam0 /*74*/] };
			if (Global_89726[iParam0] != 2)
			{
				*uParam3 = { Global_89734[iParam0 /*3*/] - Global_97358.f_1729.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_89744[iParam0] - Global_97358.f_1729.f_539.f_1538[iParam0]);
				if (unk_0xA8CEACB4F35AE058(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_73 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_154(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_154(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_156(iParam0, uParam2, 2);
			uParam2->f_67 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_73 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_73 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_73 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_73 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_154(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_73 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_156(iParam0, uParam2, 2);
			uParam2->f_67 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_73 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_73 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_73 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_73 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_73 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_73 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_73 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_73 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_73 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_73 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_73 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_73 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_65 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { unk_0x3250987ED5A577C0(-5f, 5f), unk_0x3250987ED5A577C0(-5f, 5f), 0f };
			*uParam4 = unk_0x3250987ED5A577C0(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_154(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x3250987ED5A577C0(-5f, 5f), unk_0x3250987ED5A577C0(-5f, 5f), 0f };
				*uParam4 = unk_0x3250987ED5A577C0(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_73 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_154(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_154(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_73 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_156(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_154(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_154(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_154(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_154(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_154(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_73 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_154(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { unk_0x3250987ED5A577C0(-5f, 5f), unk_0x3250987ED5A577C0(-5f, 5f), 0f };
			*uParam4 = unk_0x3250987ED5A577C0(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x3250987ED5A577C0(-5f, 5f), unk_0x3250987ED5A577C0(-5f, 5f), 0f };
				*uParam4 = unk_0x3250987ED5A577C0(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x3250987ED5A577C0(-5f, 5f), unk_0x3250987ED5A577C0(-5f, 5f), 0f };
				*uParam4 = unk_0x3250987ED5A577C0(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x3250987ED5A577C0(-5f, 5f), unk_0x3250987ED5A577C0(-5f, 5f), 0f };
				*uParam4 = unk_0x3250987ED5A577C0(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_154(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_156(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_154(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_154(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_154(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_154(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_154(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_154(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_156(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_154(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_154(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_155(iParam0, uParam2, 2);
			uParam2->f_67 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_154(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_73 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_73 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_154(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_154(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_154(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_154(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_154(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_154(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_154(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_154(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_154(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_154(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_154(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_154(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_73 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_67 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_155(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_154(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_154(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_73 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_73 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_73 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_73 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_73 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_73 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_73 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_73 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0x4F034F83AF91EC27(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0x4F034F83AF91EC27(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0x4F034F83AF91EC27(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_88538[iParam1 /*3*/] };
			*uParam4 = unk_0x3250987ED5A577C0(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_156(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_155(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97358.f_7341.f_99.f_58[128] && !Global_97358.f_7341.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97358.f_7341.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_97358.f_7341.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_156(int iParam0, var uParam1, int iParam2)
{
	if (Global_89503[iParam0 /*74*/] == 0)
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("blimp"))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (func_163(iParam0))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0x567194A60F82D51A(Global_89503[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0xDB519A4108C6BFB1(Global_89503[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0xAAF77E03CD60491E(Global_89503[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0x297BD02A9765671B(Global_89503[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x80D7E1622143A2A0(Global_89503[iParam0 /*74*/]))
		{
			func_155(iParam0, uParam1, iParam2);
			uParam1->f_67 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x8D759C5DD707B910(Global_89503[iParam0 /*74*/]))
		{
			func_155(iParam0, uParam1, iParam2);
			uParam1->f_67 = iParam2;
			return 1;
		}
	}
	if (!func_157(Global_89503[iParam0 /*74*/]))
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_155(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		if (Global_89503[iParam0 /*74*/] != *uParam1)
		{
			*uParam1 = { Global_89503[iParam0 /*74*/] };
			uParam1->f_67 = 0;
			return 0;
		}
	}
	else
	{
		func_155(iParam0, uParam1, 1);
		uParam1->f_67 = 1;
		if (Global_89503[iParam0 /*74*/] == *uParam1)
		{
			func_155(iParam0, uParam1, 1);
			uParam1->f_67 = 1;
			return 1;
		}
		func_155(iParam0, uParam1, 2);
		uParam1->f_67 = 2;
		if (Global_89503[iParam0 /*74*/] == *uParam1)
		{
			func_155(iParam0, uParam1, 2);
			uParam1->f_67 = 2;
			return 1;
		}
		*uParam1 = { Global_89503[iParam0 /*74*/] };
		uParam1->f_67 = 0;
		return 0;
	}
	func_155(iParam0, uParam1, iParam2);
	uParam1->f_67 = iParam2;
	return 1;
}

int func_157(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x71A852A48EEBEFCC(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("buffalo3") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("gauntlet2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_162())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x7B787FDDFE6F942B())
		{
			if (unk_0x3B23C8D6B23157DE(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCB8350C6120AA79A(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_161() && !func_160()) && !func_159()) && !func_158()) && !func_162())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x035E2C7B598704F7() || unk_0x708CE249B4F97BF8()) || unk_0x7F11C755C90EFEC5())
		{
		}
		else if (!func_159())
		{
			return 0;
		}
	}
	return 1;
}

int func_158()
{
	return 0;
}

int func_159()
{
	return 1;
}

int func_160()
{
	return 1;
}

int func_161()
{
	if (unk_0x9501317225249120(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (Global_89503[iParam0 /*74*/] == joaat("blimp") || Global_89503[iParam0 /*74*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("submersible") || Global_89503[iParam0 /*74*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("burrito2") || Global_89503[iParam0 /*74*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("entityxf") && !Global_97358.f_7341.f_328[8 /*6*/])
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("cheetah") && !Global_97358.f_7341.f_328[8 /*6*/])
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("policeb") && !Global_97358.f_7341.f_328[8 /*6*/])
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("ztype") && !Global_97358.f_7341.f_328[9 /*6*/])
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("polmav") && !Global_97358.f_7341.f_328[9 /*6*/])
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("jb700") && !Global_97358.f_7341.f_328[10 /*6*/])
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("monroe") && !Global_97358.f_7341.f_328[11 /*6*/])
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_89503[iParam0 /*74*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_89503[iParam0 /*74*/] == joaat("gauntlet") && !Global_97358.f_7341.f_328[80 /*6*/]) && !Global_97358.f_7341.f_328[81 /*6*/]) && !Global_97358.f_7341.f_328[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_164(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_165(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_165(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_165(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_166()
{
	var uVar0;
	
	func_176(&uVar0, unk_0xD9940DF735CED1D5());
	func_175(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_174(&uVar0, unk_0x3E15607264E063C3());
	func_169(&uVar0, unk_0xA2C54D866C588926());
	func_168(&uVar0, unk_0x35E06151CD8A2DD1());
	func_167(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_173(*uParam0);
	iVar1 = func_171(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_170(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_171(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_172(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_172(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_173(var uParam0)
{
	return uParam0 & 15;
}

void func_174(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_175(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_177(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_97358.f_16787[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_165(Global_97358.f_16787[iVar0], &Var2, &fVar5))
			{
				Global_97358.f_16787[iVar0] = 318;
				func_178(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87757[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_9 = 0f;
				Global_87757[iVar0 /*29*/].f_12 = 0f;
				Global_87757[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_10 = 0f;
				Global_87757[iVar0 /*29*/].f_13 = 0f;
				Global_87757[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_11 = 0f;
				Global_87757[iVar0 /*29*/].f_14 = 0f;
				Global_87757[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_26 = 0f;
				Global_87757[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_27 = 0f;
				Global_87757[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_178(var uParam0)
{
	*uParam0 = -15;
}

void func_179()
{
	Global_96382 = 0;
}

int func_180()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

void func_181(int iParam0)
{
	Global_67138.f_138 = iParam0;
}

int func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_136)
	{
		if (Global_97358.f_5944[iVar0 /*15*/] == iParam0)
		{
			if (Global_35460 != iVar0)
			{
				func_190(iVar0);
				func_187(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_198)
	{
		if (Global_97358.f_5944.f_137[iVar0 /*15*/] == iParam0)
		{
			func_187(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_650)
	{
		if (Global_97358.f_5944.f_199[iVar0 /*15*/] == iParam0)
		{
			func_186(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_764)
	{
		if (Global_97358.f_5944.f_651[iVar0 /*14*/] == iParam0)
		{
			func_184(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_866)
	{
		if (Global_97358.f_5944.f_765[iVar0 /*10*/] == iParam0)
		{
			func_183(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_183(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_97358.f_5944.f_866)
	{
		return;
	}
	if (Global_97358.f_5944.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97358.f_5944.f_866 - 2))
		{
			Global_97358.f_5944.f_765[iVar0 /*10*/] = { Global_97358.f_5944.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_97358.f_5944.f_866 > 0)
	{
		Global_97358.f_5944.f_765[(Global_97358.f_5944.f_866 - 1) /*10*/] = { Var1 };
		Global_97358.f_5944.f_866 = (Global_97358.f_5944.f_866 - 1);
	}
}

void func_184(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_97358.f_5944.f_764)
	{
		return;
	}
	if (Global_97358.f_5944.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97358.f_5944.f_764 - 2))
		{
			Global_97358.f_5944.f_651[iVar0 /*14*/] = { Global_97358.f_5944.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_97358.f_5944.f_764 > 0)
	{
		Global_97358.f_5944.f_651[(Global_97358.f_5944.f_764 - 1) /*14*/] = { Var1 };
		Global_97358.f_5944.f_764 = (Global_97358.f_5944.f_764 - 1);
	}
	func_185(0);
	func_185(1);
	func_185(2);
}

void func_185(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_95(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_136)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97358.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97358.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97358.f_5944.f_764)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97358.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97358.f_5944.f_919[iParam0] = iVar1;
}

void func_186(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_97358.f_5944.f_650)
	{
		if (Global_97358.f_5944.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_97358.f_5944.f_650 - 2))
			{
				Global_97358.f_5944.f_199[iVar16 /*15*/] = { Global_97358.f_5944.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_97358.f_5944.f_199[(Global_97358.f_5944.f_650 - 1) /*15*/] = { Var0 };
			Global_97358.f_5944.f_650 = (Global_97358.f_5944.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_187(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_97358.f_5944.f_198)
	{
		if (Global_97358.f_5944.f_137[iVar15 /*15*/] == iParam0)
		{
			func_188(Global_97358.f_5944.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_97358.f_5944.f_198 - 2))
			{
				Global_97358.f_5944.f_137[iVar16 /*15*/] = { Global_97358.f_5944.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_97358.f_5944.f_137[(Global_97358.f_5944.f_198 - 1) /*15*/] = { Var0 };
			Global_97358.f_5944.f_198 = (Global_97358.f_5944.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_97358.f_29774[iParam0 /*29*/].f_19[Global_14393] == 1)
		{
			Global_97358.f_29774[iParam0 /*29*/].f_19[Global_14393] = 0;
			if (Global_97358.f_29774[iParam0 /*29*/].f_24[Global_14393] == 0)
			{
				iVar0 = Global_14393;
				func_189(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_189(int iParam0, int iParam1)
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_97358.f_29774[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97358.f_29774[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_97358.f_5944.f_136)
	{
		return;
	}
	iVar1 = Global_97358.f_5944[iParam0 /*15*/].f_2;
	if (Global_97358.f_5944.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97358.f_5944.f_136 - 2))
		{
			Global_97358.f_5944[iVar0 /*15*/] = { Global_97358.f_5944[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_97358.f_5944.f_136 > 0)
	{
		Global_97358.f_5944[(Global_97358.f_5944.f_136 - 1) /*15*/] = { Var2 };
		Global_97358.f_5944.f_136 = (Global_97358.f_5944.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x94E72F17611BCD3C(iVar1, iVar0))
		{
			func_185(iVar0);
		}
		iVar0++;
	}
}

int func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(func_192(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_97358.f_1.f_12[iVar0 /*6*/][iParam1];
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = func_66(func_192(iParam0));
	return Global_86396[iVar0 /*19*/];
}

void func_194(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_201(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_75())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_200(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_201(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_200(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_195(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_195(int iParam0)
{
	if (func_197(iParam0, 0))
	{
		return 1;
	}
	if (func_196())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_196()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_197(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_198(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_198(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_199();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_199()
{
	return Global_1312737;
}

int func_200(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_201(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

void func_202()
{
	if (func_347(24))
	{
		if (!func_2(0))
		{
			if (!unk_0x94E72F17611BCD3C(iLocal_42, 3))
			{
				if (func_148(77))
				{
					if (func_142(0))
					{
						if (func_328(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							unk_0xEDB9A377CD8B7F03(&iLocal_42, 3);
							func_327();
							uLocal_154 = unk_0x676E460800A9E1B7(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 0, 1, 1, 1);
							iLocal_155 = unk_0x2ECEC3BAB9ED8AE2(Local_157.f_1.f_394, Local_157.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
							unk_0x24EA77E513B7621A(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397);
							unk_0x612AAC6329066DF0(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 0, 0);
							if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
							{
								unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
								unk_0xF72219EF3DF47F66(0);
							}
						}
					}
				}
			}
			if (unk_0x94E72F17611BCD3C(iLocal_42, 3))
			{
				if (unk_0xCDAB4021761F1A7B("BS_2A_2B_INT"))
				{
					if (!unk_0xC42238EA2EBA3C42())
					{
						func_323();
						if (unk_0x746960881FB19A89(Global_86864.f_9[0]))
						{
							iLocal_108 = Global_86864.f_9[0];
							unk_0x336AE92FD68DEF98(iLocal_108, 0, 1);
							unk_0x7763EDCBED8A5840(&iLocal_108);
							unk_0x717851935436D1B0(iLocal_108, "LESTER", 2, joaat("ig_lestercrest"), 0);
						}
						else
						{
							unk_0x717851935436D1B0(iLocal_108, "LESTER", 2, joaat("ig_lestercrest"), 0);
						}
						if (unk_0x746960881FB19A89(Global_86864.f_28[0]))
						{
							uLocal_109 = Global_86864.f_28[0];
							unk_0x336AE92FD68DEF98(uLocal_109, 0, 1);
							if (unk_0xDAF5609B36EC10E7(iLocal_109))
							{
								unk_0x8ED1C81168F4A10C(iLocal_109, 1, 1);
							}
							unk_0x717851935436D1B0(iLocal_109, "WALKINGSTICK_LESTER", 1, joaat("ig_lestercrest"), 0);
						}
						switch (func_93())
						{
							case 0:
								iLocal_105 = unk_0x9F92518438215DD0();
								unk_0x717851935436D1B0(iLocal_105, "MICHAEL", 0, joaat("player_zero"), 0);
								unk_0x717851935436D1B0(iLocal_106, "FRANKLIN", 2, joaat("player_one"), 0);
								unk_0x717851935436D1B0(iLocal_107, "TREVOR", 2, joaat("player_two"), 0);
								break;
							
							case 1:
								iLocal_106 = unk_0x9F92518438215DD0();
								unk_0x717851935436D1B0(iLocal_105, "MICHAEL", 2, joaat("player_zero"), 0);
								unk_0x717851935436D1B0(iLocal_106, "FRANKLIN", 0, joaat("player_one"), 0);
								unk_0x717851935436D1B0(iLocal_107, "TREVOR", 2, joaat("player_two"), 0);
								unk_0xEDB9A377CD8B7F03(&iLocal_42, 4);
								break;
							
							case 2:
								iLocal_107 = unk_0x9F92518438215DD0();
								unk_0x717851935436D1B0(iLocal_105, "MICHAEL", 2, joaat("player_zero"), 0);
								unk_0x717851935436D1B0(iLocal_106, "FRANKLIN", 2, joaat("player_one"), 0);
								unk_0x717851935436D1B0(iLocal_107, "TREVOR", 0, joaat("player_two"), 0);
								unk_0xEDB9A377CD8B7F03(&iLocal_42, 4);
								break;
						}
						unk_0x3BC6D217451D6BB7(joaat("player_zero"));
						func_73(1);
						func_194(1, 1, 1, 0);
						func_322(77);
						unk_0x39490CC949D831C4(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
						func_321(&(Local_157.f_484), 0, 0, "MICHAEL", 1, 1);
						func_321(&(Local_157.f_484), 1, 0, "FRANKLIN", 1, 1);
						func_321(&(Local_157.f_484), 2, 0, "TREVOR", 1, 1);
						func_321(&(Local_157.f_484), 3, 0, "LESTER", 1, 1);
						if (func_93() == 0)
						{
							bLocal_46 = true;
						}
						else
						{
							bLocal_46 = false;
						}
						unk_0xEFAE0030469E9B12(2048);
					}
					else
					{
						func_112();
						if (!unk_0x94E72F17611BCD3C(iLocal_42, 6))
						{
							unk_0xFC90BEDEE248C76D(124.0681f, -1294.762f, 28.2695f, 1.5f, 0, 0, 0, 0);
							unk_0xEDB9A377CD8B7F03(&iLocal_42, 6);
						}
						switch (iLocal_156)
						{
							case 0:
								func_320(1, 0);
								func_320(2, 0);
								if (!unk_0x0BA451447C3B1A8D(iLocal_103))
								{
									if (func_319(iLocal_103, 0, 0))
									{
										iLocal_156 = 2;
									}
								}
								else if (unk_0x746960881FB19A89(iLocal_103))
								{
									unk_0xCD3EBB4EAE50293F(&iLocal_103);
								}
								if (iLocal_156 != 2)
								{
									unk_0x3BC6D217451D6BB7(joaat("tailgater"));
									iLocal_156 = 1;
								}
								break;
							
							case 1:
								if (unk_0x149162179DBAEDB0(joaat("tailgater")))
								{
									func_320(0, 0);
									func_311(133.9532f, -1311.404f, 28.08922f, 127.847f, -1315.542f, 32.11665f, 3.3f, 124.97f, -1321.87f, 28f, 37.74f, func_318(), 1, 0, 1, 0, 0);
									func_297(&iLocal_104, 0, 130.56f, -1313.66f, 28.74f, 124.66f, 0, 0);
									unk_0x77C765087051EDD6(iLocal_104);
									unk_0x0880E86251A44B7F(joaat("tailgater"));
									func_271(iLocal_104, 0f, 0f, 0f, 0f, 24, 0);
									iLocal_156 = 2;
								}
								break;
						}
						if (unk_0x87E70BB14C5C25EE("MICHAEL", joaat("player_zero")))
						{
							if (!unk_0x0BA451447C3B1A8D(unk_0xC8F47416C1E89E8A("MICHAEL", 0)))
							{
								iLocal_105 = unk_0x240654B57CFFBFB3(unk_0xC8F47416C1E89E8A("MICHAEL", 0));
								unk_0x9001FCB58244C11D(iLocal_105, 208, 1);
								unk_0x9001FCB58244C11D(iLocal_105, 118, 0);
								unk_0x9001FCB58244C11D(iLocal_105, 213, 0);
								unk_0x4A1AC49BA4A747F7(iLocal_105, 1);
								unk_0xFA51DC22F6E34F6E(iLocal_105, 96.46f, -1291.44f, 28.2688f, 1, 0, 0, 1);
								unk_0x03D97EDECF2E1859(iLocal_105, 299.3742f);
								func_321(&(Local_157.f_484), 0, iLocal_105, "MICHAEL", 1, 1);
								if (unk_0x94E72F17611BCD3C(iLocal_42, 4))
								{
									iLocal_110[0] = iLocal_105;
									func_266(&iLocal_110, 0);
									func_206(&iLocal_110, 0, 0, 0);
								}
							}
						}
						if (unk_0x87E70BB14C5C25EE("FRANKLIN", joaat("player_one")))
						{
							if (!unk_0x0BA451447C3B1A8D(unk_0xC8F47416C1E89E8A("FRANKLIN", 0)))
							{
								iLocal_106 = unk_0x240654B57CFFBFB3(unk_0xC8F47416C1E89E8A("FRANKLIN", 0));
								unk_0x9001FCB58244C11D(iLocal_106, 208, 1);
								unk_0x9001FCB58244C11D(iLocal_106, 118, 0);
								unk_0x9001FCB58244C11D(iLocal_106, 213, 0);
								unk_0x4A1AC49BA4A747F7(iLocal_106, 1);
								unk_0xFA51DC22F6E34F6E(iLocal_106, 97.116f, -1288.588f, 28.2688f, 1, 0, 0, 1);
								unk_0x03D97EDECF2E1859(iLocal_106, 246.1162f);
								func_321(&(Local_157.f_484), 1, iLocal_106, "FRANKLIN", 1, 1);
							}
						}
						if (unk_0x87E70BB14C5C25EE("TREVOR", joaat("player_two")))
						{
							if (!unk_0x0BA451447C3B1A8D(unk_0xC8F47416C1E89E8A("TREVOR", 0)))
							{
								iLocal_107 = unk_0x240654B57CFFBFB3(unk_0xC8F47416C1E89E8A("TREVOR", 0));
								unk_0x9001FCB58244C11D(iLocal_107, 208, 1);
								unk_0x9001FCB58244C11D(iLocal_107, 118, 0);
								unk_0x9001FCB58244C11D(iLocal_107, 213, 0);
								unk_0x4A1AC49BA4A747F7(iLocal_107, 1);
								unk_0xFA51DC22F6E34F6E(iLocal_107, 99.1774f, -1292.069f, 28.2688f, 1, 0, 0, 1);
								unk_0x03D97EDECF2E1859(iLocal_107, 20.8497f);
								func_321(&(Local_157.f_484), 2, iLocal_107, "TREVOR", 1, 1);
							}
						}
						if (unk_0x87E70BB14C5C25EE("LESTER", joaat("ig_lestercrest")))
						{
							if (!unk_0x0BA451447C3B1A8D(unk_0xC8F47416C1E89E8A("LESTER", 0)))
							{
								iLocal_108 = unk_0x240654B57CFFBFB3(unk_0xC8F47416C1E89E8A("LESTER", 0));
								unk_0x9001FCB58244C11D(iLocal_108, 208, 1);
								unk_0x9001FCB58244C11D(iLocal_108, 118, 0);
								unk_0x9001FCB58244C11D(iLocal_108, 213, 0);
								unk_0x4A1AC49BA4A747F7(iLocal_108, 1);
								unk_0xFA51DC22F6E34F6E(iLocal_108, 96.2331f, -1289.744f, 28.2688f, 1, 0, 0, 1);
								unk_0x03D97EDECF2E1859(iLocal_108, 223.2882f);
								func_321(&(Local_157.f_484), 3, iLocal_108, "LESTER", 1, 1);
							}
						}
						if (unk_0x0DEEB038117360A3(0))
						{
							if (!unk_0x94E72F17611BCD3C(iLocal_42, 2))
							{
								func_205();
								unk_0xEDB9A377CD8B7F03(&iLocal_42, 2);
							}
							if (iLocal_156 == 1)
							{
								unk_0x0880E86251A44B7F(joaat("tailgater"));
							}
							unk_0x0895478E23923F01(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
							func_107(24, 0);
						}
					}
				}
			}
		}
		else if (!unk_0x94E72F17611BCD3C(iLocal_42, 3))
		{
			if (func_142(0))
			{
				if (func_328(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					unk_0xEDB9A377CD8B7F03(&iLocal_42, 3);
				}
			}
		}
		else
		{
			func_321(&(Local_157.f_484), 0, 0, "MICHAEL", 1, 1);
			func_321(&(Local_157.f_484), 1, 0, "FRANKLIN", 1, 1);
			func_321(&(Local_157.f_484), 2, 0, "TREVOR", 1, 1);
			func_321(&(Local_157.f_484), 3, 0, "LESTER", 1, 1);
			func_205();
			func_107(24, 0);
		}
	}
	else if (func_148(77) || func_2(0))
	{
		if (unk_0xCDAB4021761F1A7B("BS_2A_2B_INT"))
		{
			unk_0x6308E81AF3BAB9A5();
		}
		if (iLocal_47 != -1)
		{
			func_203(&iLocal_47);
		}
	}
}

void func_203(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_68242 == *iParam0)
	{
		func_204(*iParam0, 0);
	}
	if (Global_68241 == *iParam0)
	{
		Global_68241 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_68238)
	{
		if (Global_68227[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_68238 - 2))
	{
		Global_68227[iVar2 /*2*/] = Global_68227[iVar2 + 1 /*2*/];
		Global_68227[iVar2 /*2*/].f_1 = Global_68227[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_68227[(Global_68238 - 1) /*2*/] = -1;
	Global_68227[(Global_68238 - 1) /*2*/].f_1 = 3;
	Global_68238 = (Global_68238 - 1);
	Global_68239 = 1;
	Global_68240 = unk_0xD313E4EFACD47B38();
	*iParam0 = -1;
}

void func_204(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_68241 == iParam0)
		{
			Global_68242 = iParam0;
		}
	}
	else if (Global_68242 == iParam0)
	{
		Global_68242 = -1;
	}
}

void func_205()
{
	func_84(1, 4, 1);
	func_84(2, 4, 1);
	func_330(&Local_157);
	func_68(&Local_157);
}

int func_206(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!unk_0x3E0478C40AB5B38D((*iParam0)[iParam0->f_7]) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && (*iParam0)[iParam0->f_7] != unk_0x9F92518438215DD0())
	{
		if (!bParam2)
		{
			if ((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) && !unk_0x0FC809E10EF0EAC3(unk_0x9F92518438215DD0())) && !unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0()))
			{
				unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
			}
			else
			{
				unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
			}
			if ((unk_0xBD280C076BC69C97((*iParam0)[iParam0->f_7]) && !unk_0x0FC809E10EF0EAC3((*iParam0)[iParam0->f_7])) && !unk_0x11CF47CA7B00BE4F((*iParam0)[iParam0->f_7]))
			{
				unk_0x71628E52718BD195((*iParam0)[iParam0->f_7]);
			}
			else
			{
				unk_0x32D18ECD9E6F9BE2((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = unk_0x9F92518438215DD0();
		iVar1 = func_93();
		if (!iParam0->f_23)
		{
			func_254(iVar0, 0);
		}
		func_252(iVar1, &iVar0);
		unk_0x9001FCB58244C11D(iVar0, 32, 1);
		unk_0x9001FCB58244C11D(iVar0, 250, 1);
		iVar2 = func_251(iParam0->f_7);
		func_254((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((unk_0xBBDA792448DB5A89(unk_0xFD181DDA4D8D6786((*iParam0)[iParam0->f_7])) - 100f) / (unk_0xBBDA792448DB5A89(unk_0xEC2DCF92C713F38B((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_96(unk_0x9F92518438215DD0()))
		{
			case 0:
				if (unk_0x82CF0C80D8A0DE32("BulletTime"))
				{
					unk_0x075BBF37597121A7("BulletTime");
				}
				if (unk_0x82CF0C80D8A0DE32("BulletTimeOut"))
				{
					unk_0x075BBF37597121A7("BulletTimeOut");
				}
				break;
			
			case 1:
				if (unk_0x82CF0C80D8A0DE32("DrivingFocus"))
				{
					unk_0x075BBF37597121A7("DrivingFocus");
				}
				if (unk_0x82CF0C80D8A0DE32("DrivingFocusOut"))
				{
					unk_0x075BBF37597121A7("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (unk_0x82CF0C80D8A0DE32("REDMIST"))
				{
					unk_0x075BBF37597121A7("REDMIST");
				}
				if (unk_0x82CF0C80D8A0DE32("REDMISTOut"))
				{
					unk_0x075BBF37597121A7("REDMISTOut");
				}
				break;
		}
		if (func_95(func_93()))
		{
			if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
			}
		}
		unk_0xF8F1B44B5FD46039(unk_0xCFC72E446B0B3AD7(), (*iParam0)[iParam0->f_7], bParam2, 0);
		unk_0xAB10BEEBB0614A3E(3);
		unk_0xAB10BEEBB0614A3E(13);
		if (iParam3 & 1 != 0)
		{
			unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 210, 0);
		}
		if (func_250(0) || func_250(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (unk_0x94E72F17611BCD3C(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						unk_0xDED50A15F91DE149(unk_0x398F092142D37E17(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		iParam0->f_5 = func_249(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_249(iVar2);
		iParam0->f_7 = 4;
		iVar22 = unk_0x9F92518438215DD0();
		unk_0x407020DF5CAB33D3(unk_0x9F92518438215DD0(), 1);
		func_248(iVar22);
		unk_0xB327B788B3014603(iVar22, 0, 0);
		if (fVar3 < 25f && !unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
		{
			unk_0x5C66176FC9E6724C(unk_0x9F92518438215DD0(), unk_0xF2DB717A73826179((((25f / 100f) * (unk_0xBBDA792448DB5A89(unk_0xEC2DCF92C713F38B(unk_0x9F92518438215DD0())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (unk_0x746960881FB19A89(iVar0))
			{
				unk_0x407020DF5CAB33D3(iVar0, 1);
				func_248(iVar0);
				unk_0xB327B788B3014603(iVar0, 0, 0);
				unk_0xB06F4DE84BB274B5(iVar0, 0, 0);
			}
		}
		else if (unk_0x746960881FB19A89(iVar0))
		{
			sVar24 = unk_0xC6FE92FD1DF5318E(iVar0, &uVar23);
			if (!unk_0x471A7F8C908126F0(sVar24))
			{
				if (!unk_0x6B08EC9A88700FBB(sVar24, unk_0xC2E9075570B5D2B9()))
				{
					unk_0x336AE92FD68DEF98(iVar0, 0, 1);
				}
				unk_0x7763EDCBED8A5840(&iVar0);
			}
		}
		Global_87649 = 1;
		func_246(unk_0x9F92518438215DD0());
		func_245();
		func_244(iVar2);
		func_235();
		func_230(iVar2);
		func_213(func_228(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 145, 0));
		unk_0x06C59917CB2841FD(unk_0xCFC72E446B0B3AD7());
		unk_0x69C5E202565B9651(unk_0x9F92518438215DD0(), 0);
		unk_0x624C7BCDEBB9C07F(unk_0x9F92518438215DD0(), 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x70DAD0D20EB43257(unk_0xCFC72E446B0B3AD7(), func_347(67));
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xD2C01FDFCC3D1E4A(unk_0xCFC72E446B0B3AD7(), func_347(68));
		}
		func_210(iVar2, &iVar22);
		if (((func_346(0) || func_346(3)) || func_346(2)) || func_346(4))
		{
			unk_0x9001FCB58244C11D(iVar22, 32, 0);
			unk_0x9001FCB58244C11D(iVar22, 250, 0);
		}
		else
		{
			unk_0x9001FCB58244C11D(iVar22, 32, 1);
			unk_0x9001FCB58244C11D(iVar22, 250, 1);
		}
		if (!func_209())
		{
			func_207();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
		}
		if (unk_0x3E0478C40AB5B38D((*iParam0)[iParam0->f_7]))
		{
		}
		if (unk_0x9F92518438215DD0() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_207()
{
	if (Global_87679)
	{
		func_94();
		unk_0xE313E7DAE7AC720E(func_208(Global_97358.f_1729.f_539.f_3213));
	}
	else
	{
		unk_0xE313E7DAE7AC720E("");
	}
}

char* func_208(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

bool func_209()
{
	return Global_17096;
}

void func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_211(4, *iParam1);
			func_211(7, *iParam1);
			func_211(8, *iParam1);
			func_211(11, *iParam1);
			break;
		
		case 1:
			if (Global_97358.f_7341.f_328[2 /*6*/])
			{
				func_211(4, *iParam1);
			}
			func_211(7, *iParam1);
			func_211(8, *iParam1);
			func_211(11, *iParam1);
			if (Global_97358.f_7341.f_99.f_58[126])
			{
				func_211(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_97358.f_7341.f_328[20 /*6*/])
			{
				func_211(4, *iParam1);
			}
			func_211(7, *iParam1);
			func_211(8, *iParam1);
			func_211(11, *iParam1);
			break;
	}
}

void func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0x746960881FB19A89(iParam1))
	{
		return;
	}
	if (func_212(iParam0, iParam1))
	{
		return;
	}
	if (Global_34036[iParam0 /*31*/].f_24 < 5)
	{
		Global_34036[iParam0 /*31*/].f_25[Global_34036[iParam0 /*31*/].f_24] = iParam1;
		Global_34036[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_34036[iParam0 /*31*/].f_25[iVar0];
			if (!unk_0x746960881FB19A89(iVar1) || unk_0x3E0478C40AB5B38D(iVar1))
			{
				Global_34036[iParam0 /*31*/].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34036[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34036[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_213(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(38 / 32)]), (38 % 32));
			func_214(38, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(41 / 32)]), (41 % 32));
			func_214(41, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(43 / 32)]), (43 % 32));
			func_214(43, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(42 / 32)]), (42 % 32));
			func_214(42, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(44 / 32)]), (44 % 32));
			func_214(44, 0);
			break;
		
		case 1:
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(51 / 32)]), (51 % 32));
			func_214(51, 0);
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(51 / 32)]), (51 % 32));
			func_214(51, 0);
			break;
		
		case 3:
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(53 / 32)]), (53 % 32));
			func_214(53, 0);
			break;
		
		case 4:
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(81 / 32)]), (81 % 32));
			func_214(81, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(82 / 32)]), (82 % 32));
			func_214(82, 0);
			break;
		
		case 5:
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(47 / 32)]), (47 % 32));
			func_214(47, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(50 / 32)]), (50 % 32));
			func_214(50, 0);
			break;
		
		case 6:
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(50 / 32)]), (50 % 32));
			func_214(50, 0);
			break;
	}
}

void func_214(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422166.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_97358.f_5518[iParam0];
		}
		if (iVar0 != iParam1 || unk_0x94E72F17611BCD3C(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422166.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_97358.f_5518[iParam0] = iParam1;
			}
			unk_0xEDB9A377CD8B7F03(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_216(iParam0);
			if (unk_0x94E72F17611BCD3C(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_215(iParam0);
			}
		}
	}
}

void func_215(int iParam0)
{
	if (!unk_0x94E72F17611BCD3C(Global_31726.f_227[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_31726.f_227[(iParam0 / 32)]), (iParam0 % 23));
		Global_31726[Global_31726.f_226] = iParam0;
		Global_31726.f_226++;
	}
}

void func_216(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!func_225())
	{
		return;
	}
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		return;
	}
	Var0 = { func_224(iParam0) };
	if (unk_0x94E72F17611BCD3C(Var0.f_4, 2))
	{
		func_221(iParam0, &Var0);
	}
	if (!unk_0xFCFB7EE412178180(Var0.f_5))
	{
		if (unk_0xC42238EA2EBA3C42())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x91EAD4F2F9B5B38A(Var0, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1);
	if ((unk_0x94E72F17611BCD3C(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("startup_positioning")) == 0)
	{
		if (unk_0x94E72F17611BCD3C(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
					{
						Global_90014.f_288 = unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = unk_0x8AE51093FA7FBE3F(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0xEDB9A377CD8B7F03(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					unk_0xEDB9A377CD8B7F03(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xF76EE56D3E7DAF1B(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (unk_0x94E72F17611BCD3C(Var0.f_4, 0))
	{
		if (Global_97358.f_7341)
		{
			iVar9 = func_218(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_346(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0x94E72F17611BCD3C(Var0.f_4, 1) && unk_0x7B47A371E2D93C2C(joaat("ambient_solomon")) == 0)
	{
		if (func_217())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_97358.f_5518[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0x94E72F17611BCD3C(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0x94E72F17611BCD3C(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!unk_0xFCFB7EE412178180(Var0.f_5))
			{
				unk_0xE7078F25C45B89DE(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0x94E72F17611BCD3C(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0xE3DAC530D2CCDAE3(unk_0xAEF2E74C0408303E(Var0.f_5)) <= 0.015f)
					{
						iVar14 = unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0());
						iVar15 = unk_0x8AE51093FA7FBE3F(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xC253F54473D60EC9(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xC253F54473D60EC9(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xC253F54473D60EC9(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xC253F54473D60EC9(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xC253F54473D60EC9(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xC253F54473D60EC9(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xC253F54473D60EC9(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xA5EAB780F82771BB(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xC253F54473D60EC9(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		func_215(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}

int func_217()
{
	if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
	{
		return 0;
	}
	switch (func_93())
	{
		case 0:
			if (Global_97358.f_7341.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_97358.f_7341.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_97358.f_7341.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = func_93();
	if (func_219(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0x94E72F17611BCD3C(Global_97358.f_5486[5], 0) || unk_0x94E72F17611BCD3C(Global_97358.f_5486[6], 0))
			{
				return 0;
			}
		}
		if (func_95(iVar0))
		{
			if (unk_0x94E72F17611BCD3C(Global_85394[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0x94E72F17611BCD3C(Global_97358.f_5486[0], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0x94E72F17611BCD3C(Global_85394[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0x94E72F17611BCD3C(Global_97358.f_5486[5], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0x94E72F17611BCD3C(Global_85394[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0x94E72F17611BCD3C(Global_97358.f_5486[6], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0x94E72F17611BCD3C(Global_85394[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0x94E72F17611BCD3C(Global_97358.f_5486[2], 0))
				{
					return 0;
				}
				if (func_95(iVar0))
				{
					if (unk_0x94E72F17611BCD3C(Global_85394[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0x94E72F17611BCD3C(Global_97358.f_5486[1], 0))
				{
					return 0;
				}
				if (func_95(iVar0))
				{
					if (unk_0x94E72F17611BCD3C(Global_85394[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0x94E72F17611BCD3C(Global_97358.f_5486[3], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0x94E72F17611BCD3C(Global_85394[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_219(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				iVar0 = unk_0xB6A50C909A8FABC3(func_220(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_220(int iParam0)
{
	return iParam0;
}

void func_221(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x94E72F17611BCD3C(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_166();
	iVar1 = func_223(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_222(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_97358.f_5518[iParam0] = 0;
						unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 12f)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 12f)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_222(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_97358.f_5518[iParam0] = 0;
						unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 12f)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 12f)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_222(iParam0))
			{
				if ((unk_0x7B47A371E2D93C2C(joaat("jewelry_heist")) == 0 && unk_0x7B47A371E2D93C2C(joaat("jewelry_setup1")) == 0) && !Global_97358.f_7341.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_97358.f_5518[iParam0] = 0;
							unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_97358.f_7341.f_99.f_58[4])
				{
					Global_97358.f_5518[iParam0] = 0;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else if (Global_97358.f_7341.f_99.f_58[4])
			{
				Global_97358.f_5518[iParam0] = 1;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			else if (unk_0x7B47A371E2D93C2C(joaat("jewelry_heist")) == 0 && unk_0x7B47A371E2D93C2C(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 18f)
					{
						Global_97358.f_5518[iParam0] = 1;
						unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 18f)
					{
						Global_97358.f_5518[iParam0] = 1;
						unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_222(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_97358.f_5518[iParam0] = 0;
						unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 40f)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), *uParam1) >= 40f)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_222(iParam0))
			{
				Global_97358.f_5518[iParam0] = 1;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_222(iParam0))
			{
				if (unk_0x7B47A371E2D93C2C(joaat("assassin_valet")) == 0)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else if (unk_0x7B47A371E2D93C2C(joaat("assassin_valet")) > 0)
			{
				Global_97358.f_5518[iParam0] = 0;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x7B47A371E2D93C2C(Global_81155[70 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x7B47A371E2D93C2C(joaat("omega2")) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_222(iParam0) && unk_0x7B47A371E2D93C2C(Global_81155[26 /*34*/].f_6) == 0)
			{
				Global_97358.f_5518[iParam0] = 1;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_222(iParam0))
			{
				if (unk_0x7B47A371E2D93C2C(Global_81155[43 /*34*/].f_6) == 0)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_222(iParam0))
			{
				Global_97358.f_5518[iParam0] = 1;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_222(iParam0))
			{
				if (unk_0x7B47A371E2D93C2C(Global_81155[93 /*34*/].f_6) > 0)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_222(iParam0))
			{
				Global_97358.f_5518[iParam0] = 1;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_222(iParam0))
			{
				if (unk_0x7B47A371E2D93C2C(Global_81155[8 /*34*/].f_6) == 0 && unk_0x7B47A371E2D93C2C(Global_81155[10 /*34*/].f_6) == 0)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_222(iParam0))
			{
				if (unk_0x7B47A371E2D93C2C(Global_81155[47 /*34*/].f_6) == 0)
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x7B47A371E2D93C2C(Global_81155[70 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x7B47A371E2D93C2C(Global_81155[48 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x7B47A371E2D93C2C(Global_81155[39 /*34*/].f_6) == 0)
			{
				if (!func_222(iParam0))
				{
					Global_97358.f_5518[iParam0] = 1;
					unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_222(iParam0))
			{
				Global_97358.f_5518[iParam0] = 1;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_222(iParam0))
			{
				Global_97358.f_5518[iParam0] = 1;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_222(iParam0))
			{
				Global_97358.f_5518[iParam0] = 0;
				unk_0xC253F54473D60EC9(uParam1->f_5, Global_97358.f_5518[iParam0], 1, 1);
			}
			break;
	}
}

bool func_222(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_224(iParam0) };
	iVar7 = unk_0xC9C17D0BDF00038D(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_223(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

struct<7> func_224(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0xEDB9A377CD8B7F03(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_225()
{
	if ((func_227() == -1 || func_227() == 999) && !func_226() == 0)
	{
		return 1;
	}
	return 0;
}

int func_226()
{
	return Global_24445;
}

int func_227()
{
	return Global_24444;
}

int func_228(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_85405[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85405[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_229(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, Global_85405[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_229(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_5486[iParam0], 0);
}

void func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_231(iParam0, iVar0);
		iVar0++;
	}
}

void func_231(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_234(iParam0, iParam1, &uVar2, &iVar3);
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = func_232(iVar3, -1, 0);
	}
	else
	{
		unk_0x39496A55977AA312(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x27FC9504951BD7C0(unk_0xCFC72E446B0B3AD7(), fVar1);
			break;
		
		case 7:
			if (unk_0x7B47A371E2D93C2C(joaat("armenian3")) != 0 || unk_0x7B47A371E2D93C2C(joaat("trevor3")) != 0)
			{
				Global_87650 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0x4FC9CC5365574CE3(unk_0xCFC72E446B0B3AD7(), fVar1);
				unk_0x73AC876A795BB9C1(unk_0xCFC72E446B0B3AD7(), fVar1);
				unk_0x73E31611C4438CC9(unk_0xCFC72E446B0B3AD7(), fVar1);
			}
			break;
	}
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_233(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_233(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_199();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 67;
					break;
				
				case 1:
					*uParam3 = 68;
					break;
				
				case 3:
					*uParam3 = 70;
					break;
				
				case 2:
					*uParam3 = 69;
					break;
				
				case 4:
					*uParam3 = 71;
					break;
				
				case 5:
					*uParam3 = 72;
					break;
				
				case 6:
					*uParam3 = 73;
					break;
				
				case 7:
					*uParam3 = 74;
					break;
			}
			break;
	}
}

void func_235()
{
	struct<50> Var0;
	
	if ((unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) || !func_95(func_93())) || !func_241())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_237(unk_0x9F92518438215DD0(), &Var0, 1);
	func_236(1306, Var0[0], -1, 1);
	func_236(1307, Var0[1], -1, 1);
	func_236(1308, Var0[2], -1, 1);
	func_236(1309, Var0[3], -1, 1);
	func_236(1310, Var0[4], -1, 1);
	func_236(1311, Var0[5], -1, 1);
	func_236(1312, Var0[6], -1, 1);
	func_236(1313, Var0[7], -1, 1);
	func_236(1314, Var0[8], -1, 1);
	func_236(1315, Var0[9], -1, 1);
	func_236(1316, Var0[10], -1, 1);
	func_236(1317, Var0[11], -1, 1);
	func_236(1318, Var0.f_13[0], -1, 1);
	func_236(1319, Var0.f_13[1], -1, 1);
	func_236(1320, Var0.f_13[2], -1, 1);
	func_236(1321, Var0.f_13[3], -1, 1);
	func_236(1322, Var0.f_13[4], -1, 1);
	func_236(1323, Var0.f_13[5], -1, 1);
	func_236(1324, Var0.f_13[6], -1, 1);
	func_236(1325, Var0.f_13[7], -1, 1);
	func_236(1326, Var0.f_13[8], -1, 1);
	func_236(1327, Var0.f_13[9], -1, 1);
	func_236(1328, Var0.f_13[10], -1, 1);
	func_236(1329, Var0.f_13[11], -1, 1);
	func_236(1330, Var0.f_26[0], -1, 1);
	func_236(1331, Var0.f_26[1], -1, 1);
	func_236(1332, Var0.f_26[2], -1, 1);
	func_236(1333, Var0.f_26[3], -1, 1);
	func_236(1334, Var0.f_26[4], -1, 1);
	func_236(1335, Var0.f_26[5], -1, 1);
	func_236(1336, Var0.f_26[6], -1, 1);
	func_236(1337, Var0.f_26[7], -1, 1);
	func_236(1338, Var0.f_26[8], -1, 1);
	func_236(1339, Var0.f_26[9], -1, 1);
	func_236(1340, Var0.f_26[10], -1, 1);
	func_236(1341, Var0.f_26[11], -1, 1);
	func_236(1342, Var0.f_39[0], -1, 1);
	func_236(1343, Var0.f_39[1], -1, 1);
	func_236(1344, Var0.f_39[2], -1, 1);
	func_236(1345, Var0.f_39[3], -1, 1);
	func_236(1346, Var0.f_39[4], -1, 1);
	func_236(1347, Var0.f_39[5], -1, 1);
	func_236(1348, Var0.f_39[6], -1, 1);
	func_236(1349, Var0.f_39[7], -1, 1);
	func_236(1350, Var0.f_39[8], -1, 1);
	func_236(1351, Var0.f_49[0], -1, 1);
	func_236(1352, Var0.f_49[1], -1, 1);
	func_236(1353, Var0.f_49[2], -1, 1);
	func_236(1354, Var0.f_49[3], -1, 1);
	func_236(1355, Var0.f_49[4], -1, 1);
	func_236(1356, Var0.f_49[5], -1, 1);
	func_236(1357, Var0.f_49[6], -1, 1);
	func_236(1358, Var0.f_49[7], -1, 1);
	func_236(1359, Var0.f_49[8], -1, 1);
	func_236(1360, func_93(), -1, 1);
	unk_0xC715C0FD7A589EA7(joaat("clo_stored_initial"), 1, 1);
	Global_97358.f_1729.f_539.f_3207 = 1;
}

var func_236(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_199();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF3A2C2CCE6F38709((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xE7396227CFD38DBC((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF3A2C2CCE6F38709((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xE7396227CFD38DBC((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF3A2C2CCE6F38709((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xE7396227CFD38DBC((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF3A2C2CCE6F38709((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xE7396227CFD38DBC((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x66CD2E55FC53F238((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xE7396227CFD38DBC((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x66CD2E55FC53F238((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xE7396227CFD38DBC((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4831)
	{
		iVar0 = unk_0xF91A79D7BA8C3C61((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xE7396227CFD38DBC((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4831 && iParam0 < 4895)
	{
		iVar0 = unk_0xF91A79D7BA8C3C61((iParam0 - 4831), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4831) - unk_0xE7396227CFD38DBC((iParam0 - 4831)) * 8) * 8;
	}
	uVar2 = unk_0x73EDFB0173C97D4C(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_237(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = func_96(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_240(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_239(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_95(iVar0))
		{
			uParam1->f_59 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x4B69FB3A5B09A1BA() && unk_0xB6A50C909A8FABC3(iParam0) == unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			if (func_238(161, -1))
			{
				uParam1->f_59 = func_232(2039, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_232(744, Global_68104, 0);
			}
			uParam1->f_60 = func_232(745, Global_68104, 0);
			uParam1->f_61 = func_232(746, Global_68104, 0);
		}
		if (unk_0x4B69FB3A5B09A1BA() && iParam0 == unk_0x9F92518438215DD0())
		{
			if (func_238(161, -1))
			{
				uParam1->f_59 = func_232(2039, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_232(744, Global_68104, 0);
			}
		}
	}
}

int func_238(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474108[iParam0 /*6*/][func_233(iParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_239(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xE4C3669C2BFF9D2E(iParam0, iParam1);
		*uParam3 = unk_0x08C222396DF5E96D(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6AE68BD60866A815(iParam0) && unk_0xFC6B380991E4ABD4(iParam0) != -1)
				{
					*uParam2 = unk_0xFC6B380991E4ABD4(iParam0);
					*uParam3 = unk_0xE4E315838EC25442(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x27F7C2FB848CD525(iParam0, iParam1);
		*uParam3 = unk_0xEB3E23B43A745CA1(iParam0, iParam1);
		*uParam4 = unk_0xA9B8775C8F23EB6B(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_241()
{
	if (func_243() && func_242(0))
	{
		return 1;
	}
	return 0;
}

var func_242(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_243()
{
	return func_242(func_199() + 1);
}

void func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF2061C15946C53A2(255, 1166638144, joaat("player"));
			unk_0xF2061C15946C53A2(2, joaat("player"), -1865950624);
			unk_0xF2061C15946C53A2(255, -1865950624, joaat("player"));
			unk_0xF2061C15946C53A2(1, Global_85370, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85370);
			unk_0xF2061C15946C53A2(1, Global_85371, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85371);
			unk_0xF2061C15946C53A2(1, Global_85372, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85372);
			break;
		
		case 1:
			unk_0xF2061C15946C53A2(1, 1166638144, joaat("player"));
			unk_0xF2061C15946C53A2(2, joaat("player"), -1865950624);
			unk_0xF2061C15946C53A2(255, -1865950624, joaat("player"));
			unk_0xF2061C15946C53A2(1, Global_85370, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85370);
			unk_0xF2061C15946C53A2(1, Global_85371, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85371);
			unk_0xF2061C15946C53A2(1, Global_85372, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85372);
			break;
		
		case 2:
			unk_0xF2061C15946C53A2(255, 1166638144, joaat("player"));
			unk_0xF2061C15946C53A2(5, joaat("player"), -1865950624);
			unk_0xF2061C15946C53A2(5, -1865950624, joaat("player"));
			unk_0xF2061C15946C53A2(1, Global_85370, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85370);
			unk_0xF2061C15946C53A2(1, Global_85371, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85371);
			unk_0xF2061C15946C53A2(1, Global_85372, joaat("player"));
			unk_0xF2061C15946C53A2(1, joaat("player"), Global_85372);
			break;
		
		default:
			break;
	}
}

void func_245()
{
	var uVar0;
	int iVar1;
	
	func_94();
	uVar0 = unk_0xB9C72E97E89CC683();
	if (unk_0x2E6E8D325977B3EC(uVar0))
	{
		iVar1 = Global_97358.f_1729.f_539.f_3213;
		if (func_346(14))
		{
			iVar1 = func_96(unk_0x9F92518438215DD0());
		}
		if (iVar1 == 0)
		{
			unk_0x2A8C2BEEA4F7041F(uVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			unk_0x2A8C2BEEA4F7041F(uVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			unk_0x2A8C2BEEA4F7041F(uVar0, "BLIP_TREV");
		}
		else
		{
			unk_0x2A8C2BEEA4F7041F(uVar0, "BLIP_PLAYER");
		}
	}
}

void func_246(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_247(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = unk_0x7F787D5EAAAE2C90(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (unk_0x4854EFACAD548EAC(iParam0, iVar3) == -1)
				{
					if (unk_0xD2FFD78288C5EDEF(iParam0, iVar3, &uVar1))
					{
						unk_0x5DD2694A706BFC17(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0x94509A747D107B50();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0xAC241C22541A2A46(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0x4854EFACAD548EAC(iParam0, iVar3) == -1)
			{
				if (unk_0xD2FFD78288C5EDEF(iParam0, iVar3, &uVar1))
				{
					unk_0x5DD2694A706BFC17(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (iParam0 == unk_0x9F92518438215DD0() && unk_0xEC2DCF92C713F38B(iParam0) == 200)
		{
			unk_0x04A02EFDDE1F2D25(iParam0, unk_0xF2DB717A73826179((IntToFloat(unk_0xEC2DCF92C713F38B(iParam0)) * Global_262145.f_92)));
		}
		if (Global_97358.f_1729.f_539.f_290[iVar0] <= 0f)
		{
			Global_97358.f_1729.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_97358.f_1729.f_539.f_290[iVar0] <= 10f)
		{
			Global_97358.f_1729.f_539.f_290[iVar0] = 10f;
		}
		unk_0x5C66176FC9E6724C(iParam0, unk_0xF2DB717A73826179((((Global_97358.f_1729.f_539.f_290[iVar0] / 100f) * (unk_0xBBDA792448DB5A89(unk_0xEC2DCF92C713F38B(iParam0)) - 100f)) + 100f)));
	}
}

int func_249(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_250(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_251(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

void func_252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_253(4, *iParam1, 0);
			func_253(7, *iParam1, 0);
			func_253(8, *iParam1, 0);
			func_253(11, *iParam1, 0);
			break;
		
		case 1:
			func_253(4, *iParam1, 0);
			func_253(7, *iParam1, 0);
			func_253(8, *iParam1, 0);
			func_253(11, *iParam1, 0);
			if (Global_97358.f_7341.f_99.f_58[126])
			{
				func_253(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_253(4, *iParam1, 0);
			func_253(7, *iParam1, 0);
			func_253(8, *iParam1, 0);
			func_253(11, *iParam1, 0);
			break;
	}
}

void func_253(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0x746960881FB19A89(iParam1))
		{
			return;
		}
	}
	if (Global_34036[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_34036[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_34036[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_34036[iParam0 /*31*/].f_25[iVar0];
			Global_34036[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_34036[iParam0 /*31*/].f_25[iVar0])
		{
			Global_34036[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_34036[iParam0 /*31*/].f_24 = (Global_34036[iParam0 /*31*/].f_24 - 1);
	}
}

void func_254(int iParam0, bool bParam1)
{
	func_265(iParam0);
	func_260(iParam0, bParam1);
	func_259(iParam0);
	func_258(iParam0);
	func_257(iParam0);
	func_256(iParam0);
	func_255(iParam0);
}

void func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (iParam0 == unk_0x9F92518438215DD0())
		{
			Global_97358.f_1729.f_539.f_1556[iVar0] = unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7());
		}
	}
}

void func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		Global_97358.f_1729.f_539.f_1546[iVar0 /*3*/] = { unk_0xAEA1379E6840A7DA(iParam0) };
	}
}

void func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3)
		{
			if (unk_0x3EFE2A7CA77DFD27() == 8)
			{
				return;
			}
		}
		Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/] = { unk_0x77009B1C011405A9(iParam0, 1) };
		Global_97358.f_1729.f_539.f_1538[iVar0] = unk_0xE691E4EA6B4440C6(iParam0);
		Global_97358.f_1729.f_539.f_1542[iVar0] = unk_0x472E9099FD38A1F9(iParam0);
		if (Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/] >= 8000f)
		{
			Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/] = 7500f;
		}
		else if (Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/] <= -8000f)
		{
			Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/] = -7500f;
		}
		if (Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_97358.f_1729.f_539.f_1528[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		Global_97358.f_1729.f_539.f_294[iVar0] = unk_0xF70927A56B84E48A(iParam0);
	}
}

void func_259(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		Global_97358.f_1729.f_539.f_290[iVar0] = (((unk_0xBBDA792448DB5A89(unk_0xFD181DDA4D8D6786(iParam0)) - 100f) / (unk_0xBBDA792448DB5A89(unk_0xEC2DCF92C713F38B(iParam0)) - 100f)) * 100f);
	}
}

void func_260(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (iParam0 == unk_0x9F92518438215DD0())
		{
			func_261(iParam0, &(Global_97358.f_1729.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_97358.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x1D38FF2CB39A3EAF(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x8AD607D4A4ECA692();
					if (Global_97358.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_97358.f_1729.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x7AA23D17258712DE(unk_0xCFC72E446B0B3AD7(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xC46BDC34976E9532(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xC46BDC34976E9532(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xC46BDC34976E9532(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_261(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_247(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x7F787D5EAAAE2C90(iParam0, func_247(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x4854EFACAD548EAC(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xEDB9A377CD8B7F03(&(Var4.f_2), (20 + unk_0x5741D34836149CB2(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD2FFD78288C5EDEF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_263(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xE01F4A336AF08934(iParam0, Var4.f_0, iVar2))
						{
							unk_0xEDB9A377CD8B7F03(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_263(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x94509A747D107B50();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xAC241C22541A2A46(iVar7, &Var9) && !func_262(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xCB8350C6120AA79A(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x4854EFACAD548EAC(iParam0, Var4.f_0);
					if (unk_0xAFE8D779375271BD(iParam0, Var4.f_0, 0))
					{
						unk_0xEDB9A377CD8B7F03(&(Var4.f_2), (20 + unk_0x5741D34836149CB2(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xEDB9A377CD8B7F03(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD2FFD78288C5EDEF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x19962398E357F6DD(iVar7))
					{
						if (unk_0x2714975FE39D7406(iVar7, iVar1, &Var48))
						{
							if (unk_0xE01F4A336AF08934(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xEDB9A377CD8B7F03(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xAFE8D779375271BD(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_262(int iParam0)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_264(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x19962398E357F6DD(iVar1))
					{
						if (unk_0x2714975FE39D7406(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_264(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x94509A747D107B50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xAC241C22541A2A46(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		Global_97358.f_1729.f_539.f_1524[iVar0] = func_166();
	}
}

int func_266(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (!iParam0->f_39)
	{
		iParam0->f_7 = 4;
		iParam0->f_39 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_34[iParam1] == 2;
		if (func_249(func_93()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[iParam1] != 0) || ((func_270(iParam1) && func_267(iParam1)) && !iParam0->f_18[iParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!unk_0x3E0478C40AB5B38D((*iParam0)[iParam1]) || bVar0)
					{
						if (iParam0->f_34[iParam1] != 1 && iParam0->f_34[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && (unk_0x4B69FB3A5B09A1BA() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)) && !unk_0x94E72F17611BCD3C(Global_87845.f_47, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_2[27 /*3*/], 1) && !Global_3) && !func_2(0)))
			{
				if (iParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	iParam0->f_39 = 0;
	return 0;
}

int func_267(int iParam0)
{
	if (Global_97358.f_7341 || Global_3)
	{
		if (!Global_68245 || (Global_68245 && iParam0 != func_249(func_269())))
		{
			if (!func_268(func_251(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_268(int iParam0)
{
	if (func_95(iParam0))
	{
		if ((Global_97358.f_7341 || Global_3) || func_2(0))
		{
			return Global_97358.f_1729.f_539.f_1576[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_269()
{
	return Global_97358.f_1729.f_539.f_3215;
}

int func_270(int iParam0)
{
	if ((Global_97358.f_7341 || Global_3) || func_2(0))
	{
		if (!Global_68245 || (Global_68245 && iParam0 != func_249(func_269())))
		{
			if (((iParam0 == 0 && !func_347(115)) || (iParam0 == 1 && !func_347(116))) || (iParam0 == 2 && !func_347(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_271(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x746960881FB19A89(Global_67138.f_484[25]) && unk_0xFC38B241541883D3(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x2A210BAD0D74322B(iParam0) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("bus")) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_296(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_292(iParam0, &Var0);
		if (func_164(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0x77009B1C011405A9(iParam0, 1) };
			fParam4 = unk_0xE691E4EA6B4440C6(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9());
			}
		}
		func_285(iParam5, Var0, Param1, fParam4, func_291(iParam0));
		func_272(iParam5, iParam0, 0);
	}
}

void func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_283(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 12) && !unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != unk_0xB6A50C909A8FABC3(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (unk_0x746960881FB19A89(iParam1))
	{
		if (unk_0xFC38B241541883D3(iParam1, 0))
		{
			if (!unk_0x34E74FF8690AA4B1(iParam1))
			{
				unk_0x336AE92FD68DEF98(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97358.f_18371.f_4249 = func_166();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_282(iParam0);
					if ((unk_0x746960881FB19A89(iVar0) && unk_0xFC38B241541883D3(iVar0, 0)) && iParam1 != iVar0)
					{
						func_273(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

void func_273(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_274(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
		if (!unk_0x746960881FB19A89(iVar0))
		{
			iVar0 = unk_0xDF49708B4996403C(iParam0, -1);
		}
		if (unk_0x746960881FB19A89(iVar0) && !unk_0x3E0478C40AB5B38D(iVar0))
		{
			if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97358.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97358.f_18371.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97358.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97358.f_18371.f_4796 = 1;
	func_292(iParam0, &(Global_97358.f_18371.f_4742));
}

int func_274(int iParam0)
{
	if ((((((((((!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0)) || func_280(iParam0, 0, 0)) || func_280(iParam0, 1, 0)) || func_280(iParam0, 2, 0)) || func_291(iParam0) != 145) || func_279(iParam0)) || func_278(iParam0)) || func_277(iParam0)) || func_276(iParam0)) || !func_275(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		if (func_278(iParam0))
		{
		}
		if (func_278(iParam0))
		{
		}
		if (func_280(iParam0, 0, 0))
		{
		}
		if (func_280(iParam0, 1, 0))
		{
		}
		if (func_280(iParam0, 2, 0))
		{
		}
		if (func_291(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_275(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (((unk_0x567194A60F82D51A(iParam0) || unk_0xDB519A4108C6BFB1(iParam0)) || unk_0xAAF77E03CD60491E(iParam0)) || unk_0x297BD02A9765671B(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_276(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	sVar1 = unk_0xDFECACF4B22FB69E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6B08EC9A88700FBB(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_157(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x746960881FB19A89(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_278(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x746960881FB19A89(Global_87698[iVar0]) && unk_0xFC38B241541883D3(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xB6A50C909A8FABC3(Global_87698[iVar0]) == unk_0xB6A50C909A8FABC3(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_279(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x746960881FB19A89(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_280(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_281(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x94E72F17611BCD3C(Global_97358.f_5486[iVar9], 0))
		{
			if (unk_0x95E3E236782BBF37(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_281(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_282(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

int func_283(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_284(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_284(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_284(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_284(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_284(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_284(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_284(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_284(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_284(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_162())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_162())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97358.f_18371.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_164(Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97358.f_18371.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97358.f_18371.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 19))
	{
		if (!func_164(Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x94E72F17611BCD3C(uParam0->f_9, 20))
	{
		if (!func_164(Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_284(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_95(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_155(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_285(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)
{
	if (func_283(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_290(iParam0);
			func_289(Param1, &(Global_97358.f_18371.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97358.f_18371.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_286(iParam0, 1);
		}
	}
}

void func_286(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_288(iParam0, 0))
		{
			func_287(iParam0, 1, 0);
			func_287(iParam0, 2, 0);
			func_287(iParam0, 3, 0);
			func_287(iParam0, 4, 0);
			func_287(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_287(iParam0, 0, 0);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_18371[iParam0]), iParam1);
	}
}

bool func_288(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x94E72F17611BCD3C(Global_97358.f_18371[iParam0], iParam1);
}

void func_289(struct<54> Param0, var uParam54)
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0.f_0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

void func_290(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_283(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x746960881FB19A89(Global_67138.f_139[iParam0]))
		{
			unk_0x336AE92FD68DEF98(Global_67138.f_139[iParam0], 1, 1);
			unk_0x9187463EB4918A4D(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_286(iParam0, 0);
		}
	}
}

int func_291(int iParam0)
{
	int iVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 145;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_292(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		func_295(uParam1);
		uParam1->f_42 = unk_0xB6A50C909A8FABC3(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xDFECACF4B22FB69E(iParam0), 16);
		*uParam1 = unk_0x015D5CDAA9114947(iParam0);
		unk_0x9EB96E7956694DA9(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x4096E2FD42D248FC(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9A09BEE60599C8C6(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x754F7DC22DC17C57(iParam0);
		uParam1->f_43 = unk_0x19CE0669140A3681(iParam0);
		uParam1->f_45 = unk_0x87C86C986E8206D3(iParam0);
		uParam1->f_46 = unk_0x433D30FBB06F5E87(iParam0);
		unk_0x87C25793C98E3EDD(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x1B3DD3EA702F7E43(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xD3FA39A943FC7567(iParam0, 0))
		{
			uParam1->f_44 = unk_0x110EA7EDEDCFBFE8(iParam0);
		}
		if (unk_0xDB519A4108C6BFB1(uParam1->f_42))
		{
			if (unk_0x39A71639E61C656C(iParam0))
			{
				switch (unk_0x5077B59B95490801(iParam0))
				{
					case 2:
					case 0:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x960C88BA5B643397(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 9);
		}
		if (unk_0x35329BF26006D691(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 10);
		}
		if (unk_0x93F3EEE519AAA9E3(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 13);
			unk_0xF16D2D3110DDCF5F(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x104FDCF227248C6F(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 12);
		}
		func_294(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), func_293(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8B13B9F670524CB7(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 11);
		}
		if (unk_0xB4289912C78431FE(iParam0, "IgnoredByQuickSave") && unk_0x8AEE5670B72C39C1(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 27);
		}
	}
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_294(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC38B241541883D3(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xC39F5439AB30508A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68446DE1A840C25F(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_295(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

void func_296(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_290(iParam0);
	func_286(iParam0, 0);
}

int func_297(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (func_95(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		func_155(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x746960881FB19A89(*iParam0))
		{
			if (unk_0xB6A50C909A8FABC3(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_97358.f_1729.f_539.f_3208) && Global_97358.f_7341.f_99.f_58[131])
		{
			Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x3BC6D217451D6BB7(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (unk_0x149162179DBAEDB0(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0xB0694AD0A3BB8936(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar79 + 1, !Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_310(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				unk_0x22501E8B882CF156(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_308(iParam0, &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_306(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				func_305(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x3BC6D217451D6BB7(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (unk_0x149162179DBAEDB0(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0xB0694AD0A3BB8936(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar80 + 1, !Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_310(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				unk_0x22501E8B882CF156(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_308(iParam0, &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_306(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				func_305(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x3BC6D217451D6BB7(Var5.f_0);
			if (unk_0x149162179DBAEDB0(Var5.f_0))
			{
				bVar81 = true;
				*iParam0 = unk_0xB0694AD0A3BB8936(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				StringCopy(&cVar82, unk_0xDFECACF4B22FB69E(*iParam0), 16);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Var5.f_24);
				}
				if (func_310(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Var5.f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Var5.f_64);
				unk_0x22501E8B882CF156(*iParam0, Var5.f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Var5.f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Var5.f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Var5.f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Var5.f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Var5.f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Var5.f_66);
						}
					}
				}
				func_308(iParam0, &(Var5.f_31), &(Var5.f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bagger") && !Global_97358.f_7341.f_99.f_58[118])
					{
						unk_0xE5BC3245AAD29D00(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_306(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_97358.f_1729.f_539.f_3208) && Global_97358.f_7341.f_99.f_58[131]) && unk_0xB6A50C909A8FABC3(*iParam0) == joaat("tailgater"))
				{
					unk_0x3E9FFBB0E33D344F(*iParam0, 6, 1, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 14, 7, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 11, 2, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 2, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 7, 5, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 0, 0, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 3, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 13, 1, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 4, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 12, 2, false);
					unk_0x88B205B70CF73BF1(*iParam0, 22, true);
					unk_0x92BB9830DC0F4EB5(*iParam0, 2);
					unk_0x3E9FFBB0E33D344F(*iParam0, 23, 11, false);
					unk_0x22501E8B882CF156(*iParam0, 2);
					Global_97358.f_1729.f_539.f_3208 = 1;
					func_298(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Var5.f_0);
				}
				if (bVar81)
				{
					func_305(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_298(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_95(iParam0) && unk_0x746960881FB19A89(*iParam1)) && unk_0xFC38B241541883D3(*iParam1, 0))
	{
		if (iParam2 > Global_97358.f_1729.f_539.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_273(*iParam1, iParam0);
		}
		if (unk_0x2C1B23216A36AE4C(*iParam1) != 0)
		{
			unk_0xCC6111FBD13C5A22(*iParam1, 0);
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/] = unk_0xB6A50C909A8FABC3(*iParam1);
		if (unk_0x5B0D24105AA6799D(*iParam1, &iVar1))
		{
			Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = unk_0xB6A50C909A8FABC3(iVar1);
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = unk_0xFFA8CF72B5CABC31(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = unk_0xFD181DDA4D8D6786(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = unk_0x364F41CAA0A051EA(*iParam1, 1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = unk_0x364F41CAA0A051EA(*iParam1, 2);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = unk_0x364F41CAA0A051EA(*iParam1, 3);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = unk_0x364F41CAA0A051EA(*iParam1, 4);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = unk_0x364F41CAA0A051EA(*iParam1, 5);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = unk_0x364F41CAA0A051EA(*iParam1, 6);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = unk_0x364F41CAA0A051EA(*iParam1, 7);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = unk_0x364F41CAA0A051EA(*iParam1, 8);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = unk_0x364F41CAA0A051EA(*iParam1, 9);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = unk_0x364F41CAA0A051EA(*iParam1, 10);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = unk_0x364F41CAA0A051EA(*iParam1, 11);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = unk_0x364F41CAA0A051EA(*iParam1, 12);
		if (unk_0xD3FA39A943FC7567(*iParam1, 0))
		{
			iVar2 = unk_0x110EA7EDEDCFBFE8(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = unk_0x147076C287537800();
		StringCopy(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), unk_0xDFECACF4B22FB69E(*iParam1), 16);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = unk_0x015D5CDAA9114947(*iParam1);
		unk_0x9EB96E7956694DA9(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		unk_0x4096E2FD42D248FC(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		unk_0x9A09BEE60599C8C6(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = unk_0x960C88BA5B643397(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = unk_0x754F7DC22DC17C57(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = unk_0x19CE0669140A3681(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = unk_0x87C86C986E8206D3(*iParam1);
		unk_0x1B3DD3EA702F7E43(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_97358.f_1729.f_539.f_3209[iParam0] = 10;
		if ((unk_0xD3360834BEBE4E9A(*iParam1) >= 0 && unk_0xD3360834BEBE4E9A(*iParam1) < 255) && func_302(*iParam1, 0, &uVar0))
		{
			func_294(iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_97358.f_23343[iParam0 /*43*/].f_40 = 1;
				Global_97358.f_23343[iParam0 /*43*/] = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_97358.f_23343[iParam0 /*43*/].f_3 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_97358.f_23343[iParam0 /*43*/].f_4 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_97358.f_23343[iParam0 /*43*/].f_5 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_97358.f_23343[iParam0 /*43*/].f_6 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_97358.f_23343[iParam0 /*43*/].f_10 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_97358.f_23343[iParam0 /*43*/].f_16 = !Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_97358.f_23343[iParam0 /*43*/].f_19 = { Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_97358.f_23343[iParam0 /*43*/].f_23 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_97358.f_23343[iParam0 /*43*/].f_7 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_97358.f_23343[iParam0 /*43*/].f_8 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_97358.f_23343[iParam0 /*43*/].f_9 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_97358.f_23343[iParam0 /*43*/].f_11 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_97358.f_23343[iParam0 /*43*/].f_12 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_97358.f_23343[iParam0 /*43*/].f_13 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_97358.f_23343[iParam0 /*43*/].f_14 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_97358.f_23343[iParam0 /*43*/].f_15 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_97358.f_23343[iParam0 /*43*/].f_18 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_97358.f_23343[iParam0 /*43*/].f_17 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_97358.f_23343[iParam0 /*43*/].f_24 = unk_0x7C15DDD43A07A073(*iParam1, 11) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_25 = unk_0x7C15DDD43A07A073(*iParam1, 12) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_26 = unk_0x7C15DDD43A07A073(*iParam1, 4) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_27 = unk_0x7C15DDD43A07A073(*iParam1, 23) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_28 = unk_0x7C15DDD43A07A073(*iParam1, 14) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_29 = unk_0x7C15DDD43A07A073(*iParam1, 16) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_30 = unk_0x7C15DDD43A07A073(*iParam1, 15) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_32 = unk_0x7A4C6430918C2188(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[0] = unk_0xFC302D1081C4A3D6(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[1] = unk_0x252040D76D8F90AD(*iParam1, 14, 0);
				Global_97358.f_23343[iParam0 /*43*/].f_33[2] = unk_0x252040D76D8F90AD(*iParam1, 14, 1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[3] = unk_0x252040D76D8F90AD(*iParam1, 14, 2);
				Global_97358.f_23343[iParam0 /*43*/].f_33[4] = unk_0x252040D76D8F90AD(*iParam1, 14, 3);
				Global_97358.f_23343[iParam0 /*43*/].f_39 = unk_0x2253AE77175F5520(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_31 = func_301(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[0] = unk_0x55117DDDB4CA6989(*iParam1);
				unk_0xD7D4BA60D21D48C4(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_299(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_97358.f_23343[iParam0 /*43*/].f_1));
				unk_0xB45AB3D95FF01F3E(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_299(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_97358.f_23343[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_299(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_300(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_300(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0xD3360834BEBE4E9A(iParam0) >= 0) && unk_0xD3360834BEBE4E9A(iParam0) < 255)
	{
		if (unk_0x2253AE77175F5520(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 0)
		{
			if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_302(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x71A852A48EEBEFCC(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	if (!func_303(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x2A210BAD0D74322B(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if ((func_277(iParam0) && unk_0xB6A50C909A8FABC3(iParam0) != joaat("sentinel2")) && unk_0xB6A50C909A8FABC3(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_303(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((!unk_0x80D7E1622143A2A0(iParam0) && !unk_0x8D759C5DD707B910(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("insurgent") || iParam0 == joaat("technical"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_304(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_305(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			Global_87698[iVar0] = iParam0;
			Global_87708[iVar0] = iParam1;
			Global_87718[iVar0] = unk_0xB6A50C909A8FABC3(iParam0);
			if (unk_0x80D7E1622143A2A0(Global_87718[iVar0]))
			{
				Global_87746[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87746[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_306(var uParam0)
{
	if (!func_307(*uParam0))
	{
		unk_0x2125574BF8773B98(*uParam0, 5, !Global_97358.f_7341.f_99.f_58[119]);
	}
}

bool func_307(int iParam0)
{
	return unk_0x364F41CAA0A051EA(iParam0, 5);
}

int func_308(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC38B241541883D3(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xCC6111FBD13C5A22(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x88B205B70CF73BF1(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x68446DE1A840C25F(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x791912F6570BB5BB(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_309(*uParam0))
	{
		unk_0x17E8CB2415E3DCFE(*uParam0, 1);
		unk_0xA27F610688163CA9(*uParam0, 1);
	}
	return 1;
}

int func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0x2C1B23216A36AE4C(iParam0) > 0)
	{
		unk_0xCC6111FBD13C5A22(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x68446DE1A840C25F(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x5E843FC089111E3E(iParam0, iVar1, unk_0x68446DE1A840C25F(iParam0, iVar1)), 16);
				iVar2 = unk_0x398F092142D37E17(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x398F092142D37E17("MNU_CAGE") || iVar2 == unk_0x398F092142D37E17("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_310(var uParam0, var uParam1)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
	}
	else if (Global_97358.f_23343.f_261)
	{
		*uParam0 = { Global_97358.f_23343.f_267 };
		*uParam1 = Global_97358.f_23343.f_271;
		return 1;
	}
	return 0;
}

void func_311(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_312(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_312(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x228A016F863DED95();
	if (unk_0x746960881FB19A89(iVar0))
	{
		if (!unk_0x34E74FF8690AA4B1(iVar0))
		{
			unk_0x336AE92FD68DEF98(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			if (bParam18)
			{
				func_317(iVar0);
			}
			if (unk_0xFE0FA79BC49EBB07(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x77009B1C011405A9(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_314(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				if (unk_0x343BE15E9FFCF907(iVar0, joaat("taxi")))
				{
					if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0() && unk_0xB5BBEB12C77EE430(iVar0, -1) != 0)
					{
						if (unk_0x91EAD4F2F9B5B38A(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x77009B1C011405A9(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_280(iVar0, func_93(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_313(Param11))
				{
					if (unk_0xFC38B241541883D3(iVar0, 0))
					{
						iVar13 = unk_0xB6A50C909A8FABC3(iVar0);
						unk_0x9F81F4E7145B08F8(iVar0, &Var4, &Var7);
						if (unk_0xAAF77E03CD60491E(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xFC38B241541883D3(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x8F9D4AA83F37F6E2(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x03D97EDECF2E1859(iVar0, uParam10);
						unk_0xFA51DC22F6E34F6E(iVar0, Param7, 1, 0, 0, 1);
						unk_0x77C765087051EDD6(iVar0);
						if (bParam17)
						{
							unk_0x6FD45FA39DD18625(iVar0, 0, 1);
							unk_0xE80930A2EBCF96CA(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x34E74FF8690AA4B1(iVar0) || !unk_0xAD2C236C4A4B83C9(iVar0, 1))
						{
							unk_0x336AE92FD68DEF98(iVar0, 1, 1);
						}
						if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iVar0, 0))
						{
							unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xCD3EBB4EAE50293F(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xCFD3E41398C3253C(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (unk_0x34E74FF8690AA4B1(iVar0))
					{
						unk_0x9187463EB4918A4D(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x34E74FF8690AA4B1(iVar0))
			{
				unk_0x336AE92FD68DEF98(iVar0, 1, 0);
			}
			iVar14 = unk_0xB5BBEB12C77EE430(iVar0, -1);
			if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
			{
				unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x4D5626140D724EC1(unk_0xB6A50C909A8FABC3(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xB5BBEB12C77EE430(iVar0, 0);
				if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
				{
					unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xB5BBEB12C77EE430(iVar0, 1);
				if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
				{
					unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xB5BBEB12C77EE430(iVar0, 2);
				if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
				{
					unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xCD3EBB4EAE50293F(&iVar0);
		}
	}
}

int func_313(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_316(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_315(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_315(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_315(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_315(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_315(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_315(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_315(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_315(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_315(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_315(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_315(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_315(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_315(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_315(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_315(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_315(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_315(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_316(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_317(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (unk_0x9D878480FA8925BB(iParam0) <= 200f)
			{
				unk_0x8063FF52148C1749(iParam0, 500f);
			}
			if (unk_0x5252DDFA0FA75C54(iParam0) <= 700f)
			{
				unk_0x8063FF52148C1749(iParam0, 900f);
			}
			if (unk_0xFD181DDA4D8D6786(iParam0) < 200)
			{
				unk_0x8063FF52148C1749(iParam0, 500f);
			}
		}
	}
}

Vector3 func_318()
{
	return 2.55f, 5.59f, 2.55f;
}

int func_319(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_87708[iVar0])
				{
					if (iParam2 == 0 || unk_0xB6A50C909A8FABC3(iParam0) == func_284(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_320(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (iParam0 == 145 || Global_87708[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xB6A50C909A8FABC3(Global_87698[iVar0]) == func_284(iParam0, iParam1))
				{
					if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Global_87698[iVar0], 0))
					{
						unk_0x336AE92FD68DEF98(Global_87698[iVar0], 0, 1);
						unk_0xCD3EBB4EAE50293F(&(Global_87698[iVar0]));
						Global_87708[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_321(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

void func_322(int iParam0)
{
	if (Global_87289 != -1)
	{
		if (iParam0 == Global_87289)
		{
			Global_87293 = 1;
			return;
		}
	}
}

void func_323()
{
	int iVar0;
	
	iVar0 = func_96(unk_0x9F92518438215DD0());
	func_324(unk_0x9F92518438215DD0(), &(Global_89503[iVar0 /*74*/]), &(Global_89734[iVar0 /*3*/]), &(Global_89744[iVar0]), &(Global_89726[iVar0]), &(Global_2545744[iVar0]));
}

void func_324(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	iVar0 = 0;
	iVar1 = 0;
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			if (unk_0x827151D7B70CB853(iParam0, 0))
			{
				iVar1 = unk_0x1161215F69587BDA(iParam0, 0);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = func_96(iParam0);
				if (!unk_0x0BA451447C3B1A8D(Global_89730[iVar2]))
				{
					if (unk_0x4A33023BC86AAA7F(Global_89730[iVar2], -1))
					{
						Var3 = { unk_0x77009B1C011405A9(iParam0, 1) };
						Var6 = { unk_0x77009B1C011405A9(Global_89730[iVar2], 1) };
						if (unk_0xB6A50C909A8FABC3(Global_89730[iVar2]) == joaat("luxor2"))
						{
							if (unk_0x2A488C176D52CCA5(Var3, Var6) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_89730[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_325(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_325(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	uParam2->f_73 = 0;
	iVar0 = 145;
	if (!unk_0x0BA451447C3B1A8D(iParam0) && !unk_0x0BA451447C3B1A8D(iParam1))
	{
		iVar0 = func_96(iParam0);
		if (iVar0 > 3)
		{
			if (unk_0x4B69FB3A5B09A1BA())
			{
			}
			return;
		}
		if (unk_0xB4289912C78431FE(iParam1, "GetawayVehicleValid"))
		{
			if (unk_0x8AEE5670B72C39C1(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_97358.f_7341.f_99.f_58[45] || Global_97358.f_7341.f_99.f_58[12]) || Global_97358.f_7341.f_99.f_58[34])
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
					return;
				}
			}
		}
		if (unk_0x44E080690DA76A2A(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_89730[iVar0] = iParam1;
		}
		else if (unk_0x827151D7B70CB853(iParam0, 0))
		{
			iParam1 = unk_0x1161215F69587BDA(iParam0, 0);
			*uParam5 = 2;
			Global_89730[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_67138.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!unk_0x0BA451447C3B1A8D(Global_89730[iVar0]))
			{
				if (!func_280(Global_89730[iVar0], iVar0, 0) || unk_0x44E080690DA76A2A(iParam0, Global_89730[iVar0], 0))
				{
					Var2 = { unk_0x77009B1C011405A9(iParam0, 1) };
					Var5 = { unk_0x77009B1C011405A9(Global_89730[iVar0], 1) };
					if (func_326(iParam0, Global_89730[iVar0], 0))
					{
						if (unk_0xB7A628320EFF8E47(Var2, Var5) < 22500f)
						{
							*uParam3 = { Var5 };
							*uParam4 = unk_0xE691E4EA6B4440C6(Global_89730[iVar0]);
							*uParam5 = 1;
							Global_89730[iVar0] = iParam1;
							if (unk_0xB7A628320EFF8E47(Var2, Var5) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
				}
			}
		}
	}
	if (unk_0x746960881FB19A89(iParam1))
	{
		*uParam2 = unk_0xB6A50C909A8FABC3(iParam1);
		if (unk_0x5B0D24105AA6799D(iParam1, &iVar9))
		{
			uParam2->f_1 = unk_0xB6A50C909A8FABC3(iVar9);
		}
		uParam2->f_2 = unk_0xFFA8CF72B5CABC31(iParam1);
		uParam2->f_3 = unk_0xFD181DDA4D8D6786(iParam1);
		uParam2->f_4 = unk_0xC566BBF8C62C9A76(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			unk_0x9EB96E7956694DA9(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!unk_0x567194A60F82D51A(*uParam2))
		{
			uParam2->f_10 = 1;
			unk_0x4096E2FD42D248FC(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), unk_0xDFECACF4B22FB69E(iParam1), 16);
		uParam2->f_26 = unk_0x015D5CDAA9114947(iParam1);
		uParam2->f_64 = unk_0x960C88BA5B643397(iParam1);
		unk_0x9A09BEE60599C8C6(iParam1, &(uParam2->f_60), &(uParam2->f_61), &(uParam2->f_62));
		uParam2->f_63 = unk_0x754F7DC22DC17C57(iParam1);
		unk_0x1B3DD3EA702F7E43(iParam1, &(uParam2->f_69), &(uParam2->f_70), &(uParam2->f_71));
		if (unk_0xEA0BE4C867F7CF5D(iParam1, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam2->f_68), 28);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam2->f_68), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam1, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam2->f_68), 29);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam2->f_68), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam1, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam2->f_68), 30);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam2->f_68), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam1, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam2->f_68), 31);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam2->f_68), 31);
		}
		uParam2->f_65 = unk_0x19CE0669140A3681(iParam1);
		uParam2->f_66 = unk_0x87C86C986E8206D3(iParam1);
		iVar8 = 0;
		while (iVar8 < 12)
		{
			uParam2->f_11[iVar8] = unk_0x364F41CAA0A051EA(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (unk_0xD3FA39A943FC7567(iParam1, 0))
		{
			iVar10 = unk_0x110EA7EDEDCFBFE8(iParam1);
			if (iVar10 == 0 || iVar10 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == unk_0x9F92518438215DD0())
		{
			uParam2->f_25 = unk_0x147076C287537800();
		}
		func_294(&iParam1, &(uParam2->f_31), &(uParam2->f_57));
		uParam2->f_72 = unk_0x53A315000C8AF481(iParam1);
		uParam2->f_73 = func_278(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_97358.f_18371.f_69[0 /*54*/].f_42 == unk_0xB6A50C909A8FABC3(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_97358.f_18371.f_69[1 /*54*/].f_42 == unk_0xB6A50C909A8FABC3(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_97358.f_18371.f_69[2 /*54*/].f_42 == unk_0xB6A50C909A8FABC3(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar8 = 0;
		while (iVar8 < uParam2->f_11)
		{
			uParam2->f_11[iVar8] = 0;
			iVar8++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_72 = 0f;
	}
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (unk_0x44E080690DA76A2A(iParam0, iParam1, iParam2))
	{
		iVar0 = unk_0xB6A50C909A8FABC3(iParam1);
		if (unk_0x567194A60F82D51A(iVar0) || (iVar0 == joaat("submersible") || iVar0 == joaat("submersible2")))
		{
			if (unk_0x5BFFEED2EB6664D5(iParam1))
			{
				return 0;
			}
			return 1;
		}
		if ((unk_0xDB519A4108C6BFB1(iVar0) || unk_0xAAF77E03CD60491E(iVar0)) || iVar0 == joaat("blimp"))
		{
			if (unk_0xFAF3D214E00907D8(iParam1))
			{
				return 0;
			}
			return 1;
		}
		return 1;
	}
	return 0;
}

void func_327()
{
	Global_90001 = 1;
}

int func_328(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_250(0))
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *iParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_142(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_329(iParam0, iParam4);
		}
	}
	return 2;
}

void func_329(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_330(var uParam0)
{
	if (func_11(2, *uParam0))
	{
		if (unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
		{
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
			{
				func_70(uParam0, func_331(*uParam0));
				func_84(2, *uParam0, 0);
			}
			else
			{
				func_114(uParam0);
				func_84(2, *uParam0, 0);
			}
		}
	}
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_347(18);
			break;
		
		case 1:
			return func_347(22);
			break;
		
		case 2:
			return func_347(40);
			break;
		
		case 3:
			return func_347(8);
			break;
		
		case 4:
			return func_347(26);
			break;
		
		default:
			break;
	}
	return 0;
}

void func_332(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		fVar0 = unk_0xB7A628320EFF8E47(uParam0->f_401, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1));
		if (unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
		{
			func_343(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0x94E72F17611BCD3C(Global_86376, *uParam0))
		{
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 0))
			{
				if (func_342(uParam0))
				{
					if (unk_0x94E72F17611BCD3C(Global_86376, *uParam0))
					{
						if (unk_0x94E72F17611BCD3C(Global_86378, *uParam0))
						{
							func_337(uParam0);
						}
					}
					else
					{
						func_337(uParam0);
					}
				}
			}
			else
			{
				func_336(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0x94E72F17611BCD3C(Global_86376, *uParam0))
		{
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 0))
			{
				if (unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
				{
					func_334(uParam0);
				}
				func_333(uParam0);
			}
		}
	}
}

void func_333(var uParam0)
{
	unk_0x52AD825A68D804AA("HEIST_BULLETIN_BOARD");
	unk_0x0880E86251A44B7F(joaat("prop_ld_planning_pin_01"));
	unk_0x0880E86251A44B7F(joaat("prop_ld_planning_pin_02"));
	unk_0x0880E86251A44B7F(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		unk_0x76D57BAF1F432EA7(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		unk_0x76D57BAF1F432EA7(&(uParam0->f_414));
	}
	unk_0x84FBD0BE7CDBEEA2(5, 0);
	unk_0xF76EE56D3E7DAF1B(&Global_86377, *uParam0);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 0);
}

void func_334(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
	{
		if (!unk_0xC42238EA2EBA3C42())
		{
			if (unk_0x94E72F17611BCD3C(uParam0->f_449, 2))
			{
				func_70(uParam0, 0);
			}
		}
		func_335(uParam0);
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 1);
		unk_0xF76EE56D3E7DAF1B(&Global_86376, *uParam0);
	}
}

void func_335(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (unk_0x746960881FB19A89(uParam0->f_428[iVar0]))
		{
			unk_0x83A49C880CB75451(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_336(var uParam0)
{
	if (!unk_0xC1D9CE3AAB4FB330())
	{
		return;
	}
	unk_0x9C53AD1E8A38ADEE(&(uParam0->f_1.f_272), 5);
	unk_0xEC2376DA57EC68E1("HEIST_BULLETIN_BOARD", 0);
	if (*uParam0 != 1)
	{
		unk_0x3BC6D217451D6BB7(joaat("prop_ld_planning_pin_01"));
		unk_0x3BC6D217451D6BB7(joaat("prop_ld_planning_pin_02"));
		unk_0x3BC6D217451D6BB7(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = unk_0xDB3859BC4C4D36C9(&(uParam0->f_1.f_268));
	uParam0->f_414 = unk_0xDB3859BC4C4D36C9("INSTRUCTIONAL_BUTTONS");
	unk_0xEDB9A377CD8B7F03(&Global_86375, *uParam0);
	unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 0);
}

void func_337(var uParam0)
{
	int iVar0;
	
	if (!unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_37(uParam0, iVar0);
			iVar0++;
		}
		func_34(uParam0);
		func_32(uParam0);
		func_341(uParam0);
		func_340(uParam0);
		func_338(uParam0);
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 1);
	}
}

void func_338(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_33(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (unk_0xBBDA792448DB5A89((unk_0x073B65E051D2F03E(0, 65535) - 32767)) / 4000f);
			fVar3 = (unk_0xBBDA792448DB5A89((unk_0x073B65E051D2F03E(0, 65535) - 32767)) / 4000f);
			Var4 = { func_339(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = unk_0xA7DA1E6D4C99864B(iVar1, Var4, 1, 1, 0);
			unk_0x8F856D0103CF1B91(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			unk_0x336AE92FD68DEF98(uParam0->f_428[iVar0], 1, 0);
			unk_0xC204B4E5503A54EA(uParam0->f_428[iVar0], 1);
			unk_0x4220BD8C5CDBF540(uParam0->f_428[iVar0], 0, 0);
			unk_0x94B3D134E8D1C817(uParam0->f_428[iVar0], 0);
			unk_0xD9B13F0A69759C12(uParam0->f_428[iVar0], 1);
		}
		iVar0++;
	}
	unk_0xF76EE56D3E7DAF1B(&Global_86378, *uParam0);
}

Vector3 func_339(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * unk_0xD0FFB162F40A139C((90f - fVar6))), (fVar4 * unk_0x0BADBFA3B172435F((90f - fVar6)))) };
	return Var7;
}

void func_340(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		iVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = unk_0x94E72F17611BCD3C(Global_97358.f_1.f_120[iVar1], iVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			unk_0x48F299599202B77A(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x4BD4D58838D3F8E5(uParam0->f_1.f_118[iVar0]);
			unk_0x63E5FA5DEE979BD6(bVar3);
			unk_0x7E86CE5F658823DB();
		}
		else
		{
			unk_0x48F299599202B77A(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x4BD4D58838D3F8E5(uParam0->f_1.f_118[iVar0]);
			unk_0x63E5FA5DEE979BD6(bVar3);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_141[iVar0 /*2*/]));
			unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			unk_0x7E86CE5F658823DB();
		}
		iVar0++;
	}
}

void func_341(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x48F299599202B77A(uParam0->f_413, "CREATE_VIEW");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415 + 1);
	unk_0x4BD4D58838D3F8E5(2);
	unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_14));
	unk_0xC4F81CF078CCB564(unk_0xBBDA792448DB5A89(uParam0->f_1.f_14.f_1));
	unk_0x7E86CE5F658823DB();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_33(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_33(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x4BD4D58838D3F8E5(uParam0->f_415 + 1);
			unk_0x4BD4D58838D3F8E5(iVar1);
			unk_0x4BD4D58838D3F8E5(iVar3);
			func_9(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			unk_0x7E86CE5F658823DB();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x48F299599202B77A(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415 + 1);
	unk_0x7E86CE5F658823DB();
	if (func_33(*uParam0, uParam0->f_1.f_210))
	{
		unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
		unk_0x4BD4D58838D3F8E5(uParam0->f_415 + 1);
		unk_0x63E5FA5DEE979BD6(true);
		unk_0x7E86CE5F658823DB();
	}
	else
	{
		unk_0x48F299599202B77A(uParam0->f_413, "SHOW_VIEW");
		unk_0x4BD4D58838D3F8E5(uParam0->f_415 + 1);
		unk_0x63E5FA5DEE979BD6(false);
		unk_0x7E86CE5F658823DB();
	}
}

int func_342(var uParam0)
{
	if (!unk_0x5E3461E729DA646E(uParam0->f_413))
	{
		return 0;
	}
	if (!unk_0x5E3461E729DA646E(uParam0->f_414))
	{
		return 0;
	}
	if (!unk_0x7DE7B5897062BC2C(5))
	{
		return 0;
	}
	if (unk_0xC1D9CE3AAB4FB330())
	{
		if (!unk_0xEC2376DA57EC68E1("HEIST_BULLETIN_BOARD", 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!unk_0x149162179DBAEDB0(joaat("prop_ld_planning_pin_01")) || !unk_0x149162179DBAEDB0(joaat("prop_ld_planning_pin_02"))) || !unk_0x149162179DBAEDB0(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0xEDB9A377CD8B7F03(&Global_86377, *uParam0);
	return 1;
}

void func_343(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_33(*uParam0, 0))
	{
		func_344(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0x7A15B17D1FB90250(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * unk_0xD0FFB162F40A139C((90f - uParam0->f_404))), (fVar0 * unk_0x0BADBFA3B172435F((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_344(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (unk_0x94E72F17611BCD3C(Global_86375, *uParam0))
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 16);
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 15);
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 14);
		unk_0xF76EE56D3E7DAF1B(&Global_86375, *uParam0);
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_33(*uParam0, iVar1);
			unk_0x48F299599202B77A(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x4BD4D58838D3F8E5(uParam0->f_1.f_118[iVar0]);
			unk_0x63E5FA5DEE979BD6(bVar2);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x7E86CE5F658823DB();
			iVar0++;
		}
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 16);
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_33(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!unk_0x746960881FB19A89(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (unk_0xBBDA792448DB5A89((unk_0x073B65E051D2F03E(0, 65535) - 32767)) / 4000f);
					fVar5 = (unk_0xBBDA792448DB5A89((unk_0x073B65E051D2F03E(0, 65535) - 32767)) / 4000f);
					Var6 = { func_339(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = unk_0xA7DA1E6D4C99864B(iVar3, Var6, 1, 1, 0);
					unk_0x8F856D0103CF1B91(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					unk_0x336AE92FD68DEF98(uParam0->f_428[iVar0], 1, 0);
					unk_0xC204B4E5503A54EA(uParam0->f_428[iVar0], 1);
					unk_0x4220BD8C5CDBF540(uParam0->f_428[iVar0], 0, 0);
					unk_0x94B3D134E8D1C817(uParam0->f_428[iVar0], 0);
					unk_0xD9B13F0A69759C12(uParam0->f_428[iVar0], 1);
				}
			}
			else if (!unk_0x746960881FB19A89(uParam0->f_428[iVar0]))
			{
				unk_0x83A49C880CB75451(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 15);
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 14))
	{
		func_345(uParam0);
		func_34(uParam0);
		func_341(uParam0);
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 14);
	}
}

void func_345(var uParam0)
{
	unk_0x48F299599202B77A(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x4BD4D58838D3F8E5(uParam0->f_415 + 1);
	unk_0x7E86CE5F658823DB();
}

bool func_346(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_347(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97358.f_7341.f_99.f_58[iParam0];
}

void func_348(bool bParam0)
{
	if (bParam0)
	{
		Global_96380 = 0;
	}
	else
	{
		Global_96380 = 1;
	}
}

void func_349(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1.f_120[iParam0]), iParam1);
	}
	unk_0xEDB9A377CD8B7F03(&Global_86375, iParam0);
}

void func_350(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	*uParam0 = iParam1;
	Var0 = { Global_86313[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar3 = Global_86313[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { Var0 };
	uParam0->f_404 = fVar3;
	uParam0->f_405 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * unk_0xD0FFB162F40A139C((360f - fVar3))), (-uParam0->f_1.f_8 * unk_0x0BADBFA3B172435F((360f - fVar3)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar3 };
	unk_0xEDB9A377CD8B7F03(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 0);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 1);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_351(var uParam0, var uParam1)
{
	func_361(uParam0, 0, "HEIST_FINALE", "BOARD6", "FHFAUD", "CRWAUD", 1, 1, 3, 4, uParam1, 96.47825f, -1292.353f, 29.76875f, 5f, 5.5f, 6f);
	func_360(uParam0, 1500, 540, 3.45f, 1.34f, 3.18f, 1.79f, 2.58f, 747, 260, 620, 442, 490, 445, 360, 438, 230, 440, 100, 435, 872, 398, 20, 40, 1150, 415);
	func_359(uParam0, 18f, 17f, 19f);
	func_358(uParam0, "", "", "", "", "FHP16", "", "FHP17", "FHP19");
	func_357(uParam0, 1, "CRW_GM", "");
	func_357(uParam0, 2, "CRW_KA", "");
	func_357(uParam0, 3, "CRW_HW", "");
	func_357(uParam0, 4, "CRW_NR", "");
	func_357(uParam0, 5, "CRW_DJ", "");
	func_357(uParam0, 6, "CRW_PH", "");
	func_357(uParam0, 7, "CRW_CF", "");
	func_357(uParam0, 8, "CRW_ET", "");
	func_357(uParam0, 9, "CRW_KD", "");
	func_357(uParam0, 10, "CRW_PM", "CRM_PM");
	func_357(uParam0, 11, "", "CRM_CH");
	func_357(uParam0, 12, "CRW_RL", "CRM_RL");
	func_357(uParam0, 13, "CRW_TM", "CRM_TM");
	func_356(uParam0, 24, "FHP18");
	func_356(uParam0, 25, "FHP18b");
	func_356(uParam0, 28, "FHP18c");
	func_356(uParam0, 29, "FHP18d");
	func_356(uParam0, 30, "FHP18e");
	func_356(uParam0, 26, "FHP18f");
	func_356(uParam0, 27, "FHP18g");
	func_356(uParam0, 31, "FHP18h");
	func_356(uParam0, 22, "FHP18i");
	func_356(uParam0, 23, "FHP18j");
	func_356(uParam0, 20, "FHP18k");
	func_355(uParam0, 0, 1, 0, 0);
	func_355(uParam0, 1, 1, 0, 0);
	func_355(uParam0, 2, 1, 0, 0);
	func_355(uParam0, 3, 1, 0, 0);
	func_355(uParam0, 4, 1, 0, 0);
	func_355(uParam0, 5, 1, 0, 0);
	func_355(uParam0, 6, 1, 0, 0);
	func_355(uParam0, 7, 1, 0, 0);
	func_355(uParam0, 8, 1, 0, 0);
	func_355(uParam0, 9, 1, 0, 0);
	func_355(uParam0, 10, 1, 0, 0);
	func_355(uParam0, 11, 1, 0, 0);
	func_355(uParam0, 12, 1, 0, 0);
	func_355(uParam0, 13, 1, 0, 0);
	func_355(uParam0, 14, 1, 0, 0);
	func_355(uParam0, 15, 1, 0, 0);
	func_355(uParam0, 16, 1, 0, 0);
	func_355(uParam0, 17, 1, 0, 0);
	func_355(uParam0, 18, 1, 0, 0);
	func_355(uParam0, 19, 1, 0, 0);
	func_355(uParam0, 20, 1, 0, 0);
	func_355(uParam0, 21, 1, 0, 0);
	func_354(uParam0, 0, 0, "H_TD_RES");
	func_354(uParam0, 0, 0, "H_TD_FLY");
	func_354(uParam0, 0, 2, "H_TD_PLAN");
	func_354(uParam0, 0, 10, "H_TD_CREW");
	func_354(uParam0, 3, 5, "H_TD_STNG");
	func_354(uParam0, 3, 6, "H_TD_CARS");
	func_354(uParam0, 4, 7, "H_TD_DRIL");
	func_354(uParam0, 4, 8, "H_TD_TRAI");
	func_354(uParam0, 4, 9, "H_TD_GETA");
	func_353(uParam0, 1, 142, 72);
	func_353(uParam0, 1, 134, 244);
	func_353(uParam0, 1, 262, 54);
	func_353(uParam0, 1, 334, 206);
	func_353(uParam0, 1, 547, 65);
	func_353(uParam0, 1, 550, 200);
	func_353(uParam0, 1, 453, 54);
	func_353(uParam0, 1, 492, 242);
	func_353(uParam0, 1, 731, 179);
	func_353(uParam0, 1, 685, 81);
	func_353(uParam0, 1, 828, 79);
	func_353(uParam0, 1, 982, 167);
	func_353(uParam0, 1, 1155, 70);
	func_353(uParam0, 1, 1293, 60);
	func_353(uParam0, 1, 1254, 191);
	func_353(uParam0, 1, 1433, 84);
	func_353(uParam0, 1, 1469, 172);
	func_353(uParam0, 1, 952, 367);
	func_353(uParam0, 1, 967, 469);
	func_353(uParam0, 1, 1246, 374);
	func_352(uParam0, 1, "FHP9", 777, 165, 1);
	func_352(uParam0, 1, "FHP10", 970, 179, 1);
	func_352(uParam0, 1, "FHP11", 1210, 184, 1);
	func_352(uParam0, 1, "FHP12", 537, 168, 0);
	func_352(uParam0, 1, "FHP13", 579, 229, 1);
	func_352(uParam0, 1, "FHP14", 355, 228, 1);
	func_352(uParam0, 1, "FHP15", 350, 117, 1);
}

void func_352(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_353(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_354(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	struct<8> Var0;
	
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_355(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_356(var uParam0, int iParam1, char* sParam2)
{
	struct<2> Var0;
	
	StringCopy(&Var0, sParam2, 8);
	if (unk_0x6B08EC9A88700FBB(sParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
}

void func_357(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<2> Var0;
	struct<2> Var2;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var2, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!unk_0x6B08EC9A88700FBB(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var2 };
				break;
			
			case 13:
				uParam0->f_304[16 /*2*/] = { Var2 };
				break;
			
			case 12:
				uParam0->f_304[15 /*2*/] = { Var2 };
				break;
			
			case 11:
				uParam0->f_304[17 /*2*/] = { Var2 };
				break;
			
			default:
				break;
			}
	}
}

void func_358(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;
	struct<4> Var12;
	struct<2> Var16;
	struct<2> Var18;
	struct<2> Var20;
	struct<2> Var22;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var4, sParam2, 16);
	StringCopy(&Var8, sParam3, 16);
	StringCopy(&Var12, sParam4, 16);
	StringCopy(&Var16, sParam5, 8);
	StringCopy(&Var18, sParam6, 8);
	StringCopy(&Var20, sParam7, 8);
	StringCopy(&Var22, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var4 };
	uParam0->f_108[0 /*4*/] = { Var8 };
	uParam0->f_108[1 /*4*/] = { Var12 };
	uParam0->f_280[1 /*2*/] = { Var16 };
	uParam0->f_280[2 /*2*/] = { Var18 };
	uParam0->f_280[0 /*2*/] = { Var20 };
	uParam0->f_280[3 /*2*/] = { Var22 };
}

void func_359(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_360(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_361(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param14)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { Param11 };
	uParam0->f_397 = { Param14 };
}

int func_362(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

void func_364()
{
	while (!func_365(&Local_157))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_107(24, 0);
	func_107(25, 0);
	func_107(26, 0);
	func_84(1, 4, 0);
	func_84(2, 4, 0);
	unk_0xD643E324F7E6A17B(uLocal_154, 0);
	if (iLocal_155 != -1)
	{
		if (unk_0xB657144FEEE0F032(iLocal_155))
		{
			unk_0xA2B9221D77CA9020(iLocal_155);
		}
	}
	unk_0x69A5FB1BDF9C17C4();
	unk_0x612AAC6329066DF0(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 1, 0);
	unk_0xF72219EF3DF47F66(5);
	if (iLocal_47 != -1)
	{
		func_203(&iLocal_47);
	}
	unk_0x6308E81AF3BAB9A5();
	if (iLocal_45 != -1)
	{
		func_151(&iLocal_45);
	}
	unk_0xE60DEFFB2A853900();
}

int func_365(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 1))
	{
		func_334(uParam0);
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_449, 0))
	{
		func_333(uParam0);
	}
	return 1;
}

