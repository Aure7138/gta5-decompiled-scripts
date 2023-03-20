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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 25;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
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
	var uLocal_80 = 2;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
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
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106[4] = { 0, 0, 0, 0 };
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 4;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 4;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 4;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 4;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 4;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 4;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	struct<485> Local_150 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
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
	iLocal_34 = 202;
	iLocal_35 = 201;
	iLocal_36 = 24;
	iLocal_37 = 202;
	iLocal_38 = 25;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_100 = -1;
	if (unk_0xC968670BFACE42D9(82))
	{
		func_295();
	}
	func_294(5);
	func_283(&(Local_150.f_1), Global_86218[5 /*19*/]);
	func_282(&Local_150, 2);
	if (Global_97173.f_7311.f_99.f_200[9] != 5)
	{
		Global_97173.f_7311.f_99.f_200[9] = 5;
	}
	while (!func_281(5))
	{
		if (!Global_68336 && !func_280(14))
		{
			func_271();
			func_257(&Local_150, 32f, 35f);
			func_255(&Local_150);
			func_145();
			if (func_143(0) || unk_0xA921AA820C25702F(Local_150.f_449, 2))
			{
				func_67(&Local_150);
				func_4(&Local_150);
				func_3(&Local_150);
			}
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("rural_bank_heist")) > 0)
		{
			func_2();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1(5);
	func_295();
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
	if (unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	
	if (Global_68327)
	{
		return;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return;
	}
	iVar0 = unk_0xF2DB717A73826179((1f + (1000f * unk_0x0000000050597EE2())));
	Global_86409.f_8 = (Global_86409.f_8 + iVar0);
}

void func_3(var uParam0)
{
	if (unk_0xA921AA820C25702F(Global_86197, *uParam0))
	{
		if (unk_0xA921AA820C25702F(uParam0->f_449, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 15);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 16);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 14);
			unk_0xE80492A9AC099A93(&Global_86197, *uParam0);
		}
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (unk_0xA921AA820C25702F(uParam0->f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_64(uParam0);
			uParam0->f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 5);
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 5);
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 5);
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x9CD27B0045628463();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 5);
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 4);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x9CD27B0045628463();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_97173.f_1.f_6[*uParam0] = 1;
			unk_0x8DFCED7A656F8802(false);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 5);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x9CD27B0045628463();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = unk_0x80C2FD58D720C801(2, 13, true);
	sVar1 = unk_0x80C2FD58D720C801(2, 11, true);
	sVar2 = unk_0x0499D7B09FC9B407(0, 32, true);
	sVar3 = unk_0x80C2FD58D720C801(0, 1, true);
	sVar4 = unk_0x0499D7B09FC9B407(2, 201, true);
	sVar5 = unk_0x0499D7B09FC9B407(2, 202, true);
	if (unk_0xA571D46727E2B718(2))
	{
		sVar0 = unk_0x80C2FD58D720C801(2, 6, true);
		sVar1 = unk_0x80C2FD58D720C801(2, 7, true);
		sVar2 = unk_0x80C2FD58D720C801(0, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_MAX_WIDTH");
	unk_0xD69736AAE04DB51A(0.6f);
	unk_0xC6796A8FFA375E53();
	switch (uParam0->f_464)
	{
		case 0:
			if (unk_0xA921AA820C25702F(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(1);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(0);
					func_9(sVar5);
					func_8("PB_H_EXIT");
					unk_0xC6796A8FFA375E53();
				}
				unk_0xF6E48914C7A8694E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0xC58424BA936EB458(false);
				unk_0xC6796A8FFA375E53();
			}
			break;
		
		case 1:
			unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xC58424BA936EB458(false);
			unk_0xC6796A8FFA375E53();
			break;
		
		case 2:
			if (unk_0xA921AA820C25702F(uParam0->f_449, 2))
			{
				unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0xC6796A8FFA375E53();
				if (*uParam0 == 2)
				{
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(2);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(1);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0xC6796A8FFA375E53();
				}
				unk_0xF6E48914C7A8694E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0xC58424BA936EB458(false);
				unk_0xC6796A8FFA375E53();
			}
			break;
		
		case 3:
			if (unk_0xA921AA820C25702F(uParam0->f_449, 2))
			{
				if (unk_0xA921AA820C25702F(uParam0->f_449, 9))
				{
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(1);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xC6796A8FFA375E53();
					unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0xC6796A8FFA375E53();
				}
				unk_0xF6E48914C7A8694E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0xC58424BA936EB458(false);
				unk_0xC6796A8FFA375E53();
			}
			break;
		
		case 4:
			if (unk_0xA921AA820C25702F(uParam0->f_449, 2))
			{
				unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0xC6796A8FFA375E53();
				unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				unk_0xC6796A8FFA375E53();
				unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				unk_0xC6796A8FFA375E53();
				unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(1);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				unk_0xC6796A8FFA375E53();
				unk_0xF6E48914C7A8694E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(0);
				func_9(sVar4);
				func_8("PB_H_CONF");
				unk_0xC6796A8FFA375E53();
				unk_0xF6E48914C7A8694E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0xC58424BA936EB458(false);
				unk_0xC6796A8FFA375E53();
			}
			break;
	}
}

void func_8(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_9(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

bool func_10(int iParam0, int iParam1)
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
	bVar0 = unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iParam0], iParam1);
	return bVar0;
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0 /*4*/])) && !func_12(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			unk_0x8DFCED7A656F8802(false);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(uParam0->f_449), 18);
	}
}

bool func_12(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_13(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_95817 && iParam1)
	{
		if (func_12(sParam0) && !unk_0x327EDEEEAC55C369())
		{
			unk_0x8DFCED7A656F8802(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(sParam0, &(Global_97173.f_23602[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_97173.f_23602.f_145 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_97173.f_23602.f_145 - 1));
			Global_97173.f_23602.f_145 = (Global_97173.f_23602.f_145 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	StringCopy(&(Global_97173.f_23602[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_97173.f_23602[iParam0 /*16*/].f_4), "", 16);
	Global_97173.f_23602[iParam0 /*16*/].f_8 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_9 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_11 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_10 = -1;
	Global_97173.f_23602[iParam0 /*16*/].f_12 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_13 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_14 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_15 = 0;
}

void func_16(int iParam0, int iParam1)
{
	Global_97173.f_23602[iParam0 /*16*/] = { Global_97173.f_23602[iParam1 /*16*/] };
	Global_97173.f_23602[iParam0 /*16*/].f_4 = { Global_97173.f_23602[iParam1 /*16*/].f_4 };
	Global_97173.f_23602[iParam0 /*16*/].f_8 = Global_97173.f_23602[iParam1 /*16*/].f_8;
	Global_97173.f_23602[iParam0 /*16*/].f_10 = Global_97173.f_23602[iParam1 /*16*/].f_10;
	Global_97173.f_23602[iParam0 /*16*/].f_9 = Global_97173.f_23602[iParam1 /*16*/].f_9;
	Global_97173.f_23602[iParam0 /*16*/].f_11 = Global_97173.f_23602[iParam1 /*16*/].f_11;
	Global_97173.f_23602[iParam0 /*16*/].f_12 = Global_97173.f_23602[iParam1 /*16*/].f_12;
	Global_97173.f_23602[iParam0 /*16*/].f_13 = Global_97173.f_23602[iParam1 /*16*/].f_13;
	Global_97173.f_23602[iParam0 /*16*/].f_14 = Global_97173.f_23602[iParam1 /*16*/].f_14;
	Global_97173.f_23602[iParam0 /*16*/].f_15 = Global_97173.f_23602[iParam1 /*16*/].f_15;
}

void func_17(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xC3D0841A0CC546A6(uParam0->f_415);
	unk_0xC6796A8FFA375E53();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(8);
			unk_0xC6796A8FFA375E53();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(9);
			unk_0xC6796A8FFA375E53();
		}
	}
	Var1.f_0 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)
{
	int iVar0;
	
	if (unk_0xA921AA820C25702F(uParam0->f_449, 7))
	{
		if (!unk_0xA921AA820C25702F(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_97173.f_1[*uParam0])
					{
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_97173.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0x4D79439A6B55AC67())
					{
						if (((!unk_0xA921AA820C25702F(uParam0->f_449, 11) && !unk_0xA921AA820C25702F(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
						{
							unk_0x8509B634FBE7DA11("PB_H_CHOICE");
							unk_0x238FFE5C7B0498A6(0, true, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_97173.f_1.f_6[*uParam0])
					{
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_97173.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0x4D79439A6B55AC67())
					{
						if (!unk_0xA921AA820C25702F(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0xA921AA820C25702F(uParam0->f_449, 11) && !unk_0xA921AA820C25702F(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
									{
										switch (Global_86218[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												unk_0x8509B634FBE7DA11("PB_H_GUNM");
												unk_0x238FFE5C7B0498A6(0, true, false, -1);
												break;
											
											case 2:
												unk_0x8509B634FBE7DA11("PB_H_HACK");
												unk_0x238FFE5C7B0498A6(0, true, false, -1);
												break;
											
											case 3:
												unk_0x8509B634FBE7DA11("PB_H_DRIV");
												unk_0x238FFE5C7B0498A6(0, true, false, -1);
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

int func_19()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_97173.f_23602.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xA921AA820C25702F(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_280[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!unk_0xCA042B6957743895(&Param3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x9CD27B0045628463() + 1000;
	Var0 = { func_27(uParam0, &(uParam0->f_411)) };
	func_26(&(uParam0->f_649), Var0, fParam2);
}

void func_26(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_11 = { Param1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_27(var uParam0, var uParam1)
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
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * unk_0xD0FFB162F40A139C((90f - fVar6))), (fVar4 * unk_0x0BADBFA3B172435F((90f - fVar6)))) };
	fVar10 = fVar4;
	fVar11 = unk_0xA9D1795CD5043663((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (Var7.f_2 - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = unk_0xA9D1795CD5043663((fVar14 / uParam0->f_1.f_8));
	fVar16 = ((fVar11 * 3f) / 18f);
	return (fVar15 * 0.95f), fVar16, (-fVar11 * 0.85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_29(int iParam0, int iParam1)
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

int func_30(int iParam0)
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

void func_31(var uParam0)
{
	int iVar0;
	
	unk_0xF6E48914C7A8694E(uParam0->f_413, "CREATE_VIEW");
	unk_0xC3D0841A0CC546A6(uParam0->f_415);
	unk_0xC3D0841A0CC546A6(1);
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16));
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16.f_1));
	unk_0xC6796A8FFA375E53();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(2);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(1);
			unk_0xC3D0841A0CC546A6(1);
			unk_0xC6796A8FFA375E53();
			break;
		
		case 1:
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(3);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(1);
			unk_0xC3D0841A0CC546A6(4);
			unk_0xC6796A8FFA375E53();
			break;
		
		case 3:
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(6);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(1);
			unk_0xC3D0841A0CC546A6(7);
			unk_0xC6796A8FFA375E53();
			break;
		
		case 4:
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(8);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415);
			unk_0xC3D0841A0CC546A6(1);
			unk_0xC3D0841A0CC546A6(9);
			unk_0xC6796A8FFA375E53();
			break;
	}
	unk_0xF6E48914C7A8694E(uParam0->f_413, "DISPLAY_VIEW");
	unk_0xC3D0841A0CC546A6(uParam0->f_415);
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
	unk_0xC3D0841A0CC546A6(uParam0->f_415);
	unk_0xC58424BA936EB458(func_32(*uParam0, uParam0->f_1.f_29));
	unk_0xC6796A8FFA375E53();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
		unk_0xC3D0841A0CC546A6(uParam0->f_415);
		unk_0xC6796A8FFA375E53();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(8);
			unk_0xC6796A8FFA375E53();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(9);
			unk_0xC6796A8FFA375E53();
		}
		unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
		unk_0xC3D0841A0CC546A6(99);
		unk_0xC6796A8FFA375E53();
	}
}

bool func_32(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_97173.f_1.f_120[iParam0], iParam1);
}

void func_33(var uParam0)
{
	unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	unk_0xC6796A8FFA375E53();
}

void func_34(var uParam0)
{
	unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0xC3D0841A0CC546A6(uParam0->f_415);
	unk_0xC6796A8FFA375E53();
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_86218[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_417);
	func_36(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
	unk_0xC3D0841A0CC546A6(iParam1);
	unk_0xC58424BA936EB458(true);
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xC3D0841A0CC546A6(iParam1);
	unk_0xC6796A8FFA375E53();
	func_25(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(9);
			unk_0xC6796A8FFA375E53();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_86218[iVar1 /*19*/].f_1[iParam1];
	unk_0xF6E48914C7A8694E(uParam0->f_413, "CREATE_VIEW");
	unk_0xC3D0841A0CC546A6(iParam1);
	unk_0xC3D0841A0CC546A6(0);
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/]));
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	unk_0xC6796A8FFA375E53();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_97173.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_97173.f_1.f_12[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
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
	if (Global_97173.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
		unk_0xC3D0841A0CC546A6(iParam1);
		unk_0xC58424BA936EB458(true);
		unk_0xC6796A8FFA375E53();
	}
	else
	{
		unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
		unk_0xC3D0841A0CC546A6(iParam1);
		unk_0xC58424BA936EB458(false);
		unk_0xC6796A8FFA375E53();
	}
	unk_0xF6E48914C7A8694E(uParam0->f_413, "DISPLAY_VIEW");
	unk_0xC3D0841A0CC546A6(iParam1);
	unk_0xC6796A8FFA375E53();
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_97173.f_1.f_12[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_97173.f_1.f_118, iParam0);
}

bool func_39(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_97173.f_1.f_116, iParam0);
}

int func_40(int iParam0)
{
	return Global_86064[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0xF6E48914C7A8694E(iParam0, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(iParam2);
	unk_0xC3D0841A0CC546A6(iParam3);
	unk_0xC3D0841A0CC546A6(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0xC3D0841A0CC546A6(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0xC3D0841A0CC546A6(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0xC3D0841A0CC546A6(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0xC3D0841A0CC546A6(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0xC3D0841A0CC546A6(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0xC3D0841A0CC546A6(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0xC3D0841A0CC546A6(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0xC3D0841A0CC546A6(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0xC3D0841A0CC546A6(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0xC3D0841A0CC546A6(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0xC3D0841A0CC546A6(func_42(iParam1));
	unk_0xC6796A8FFA375E53();
}

var func_42(int iParam0)
{
	return Global_86064[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)
{
	return unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_45(iParam0, iParam1)) / unk_0xBBDA792448DB5A89(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)
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

int func_45(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)
{
	return func_47(iParam1, Global_97173.f_1.f_73[iParam0 /*3*/].f_1, Global_97173.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)
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

char* func_48(int iParam0)
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)
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

int func_50(int iParam0, int iParam1)
{
	return unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_52(iParam0, iParam1)) / unk_0xBBDA792448DB5A89(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)
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

int func_52(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)
{
	return unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_56(iParam0, iParam1)) / unk_0xBBDA792448DB5A89(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)
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

int func_56(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)
{
	switch (Global_86064[iParam0 /*5*/])
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

char* func_59(int iParam0)
{
	return func_60(iParam0);
}

char* func_60(int iParam0)
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

void func_61(var uParam0, int iParam1)
{
	unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0xC3D0841A0CC546A6(iParam1);
	unk_0xC6796A8FFA375E53();
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xA921AA820C25702F(Global_86218[iParam1 /*19*/].f_18, iParam2))
	{
		if (!unk_0x0C515FAB3FF9EA92(&(Global_86218[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_86218[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			unk_0x933D6A9EEC1BACD0(&(Global_86218[iParam1 /*19*/].f_18), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0x0C515FAB3FF9EA92(&(Global_86218[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_86218[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0x933D6A9EEC1BACD0(&(Global_86218[iVar0 /*19*/].f_18), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xC3D0841A0CC546A6(99);
	unk_0xC6796A8FFA375E53();
	func_18(uParam0);
}

void func_64(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
			unk_0xC3D0841A0CC546A6(99);
			unk_0xC6796A8FFA375E53();
			break;
	}
	unk_0x8DFCED7A656F8802(false);
}

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_200[iParam0];
}

int func_66(int iParam0)
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

void func_67(var uParam0)
{
	if (unk_0xA921AA820C25702F(uParam0->f_449, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	bVar0 = false;
	if (!unk_0xA921AA820C25702F(uParam0->f_449, 2))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (!func_142(0))
			{
				if (func_133(8))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
						fVar4 = unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1);
						fVar5 = unk_0x73D57CFFDD12C355((uParam0->f_404 - fVar4));
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
								fVar5 = unk_0x73D57CFFDD12C355((fVar6 - fVar4));
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
									fVar5 = unk_0x73D57CFFDD12C355((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = unk_0x73D57CFFDD12C355((fVar6 - fVar4));
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
				func_132(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0);
			}
			else if (func_131(uParam0->f_451, 1))
			{
				func_129(&(uParam0->f_451));
				func_115(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_129(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = func_10(1, *uParam0);
		func_77(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (unk_0x580417101DDB492F(2, iLocal_34) || unk_0x580417101DDB492F(2, 238))) || unk_0xA921AA820C25702F(uParam0->f_449, 8))
		{
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
		if (!bParam1)
		{
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0f, (1f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (1f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2));
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), uParam0->f_404);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			unk_0xF28965D04F570DCA(unk_0xD80958FC74E988A6(), joaat("MotionState_Idle"), false, 0, false);
			unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), true, false);
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 134);
	}
	unk_0xA0EBB943C300E693(true);
	func_72(0);
	func_71();
	unk_0xE1CD1E48E025E661();
	unk_0x450930E616475D0D(17);
	unk_0xD39D13C9FEBF0511(false);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	unk_0x8DFCED7A656F8802(true);
	while (unk_0x4D79439A6B55AC67())
	{
		unk_0x8DFCED7A656F8802(true);
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar3 = unk_0xB0F7F8663821D9C3(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0x261CCE7EED010641(iVar3);
	}
	unk_0xA8638BE228D4751A();
	func_64(uParam0);
	unk_0xE80492A9AC099A93(&(uParam0->f_449), 7);
	unk_0xE80492A9AC099A93(&(uParam0->f_449), 2);
	Global_86196 = 0;
}

void func_70(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		if (bParam2)
		{
			unk_0x07E5B515DB0636FC(false, false, 3000, true, bParam1, 0);
		}
		if (unk_0xDFB2B516207D3534(*uParam0))
		{
			unk_0x026FB97D0A425F84(*uParam0, false);
		}
		unk_0x865908C81A2C22E9(*uParam0, bParam1);
	}
	if (uParam0->f_23)
	{
		unk_0x8183455E16C42E3A();
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

void func_71()
{
	Global_17098.f_5 = 0;
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_76();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_142(0))
		{
			func_73(0);
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

void func_73(int iParam0)
{
	if (Global_14551)
	{
		func_75(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_74())
	{
		Global_14393.f_1 = 3;
	}
}

int func_74()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_142(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

void func_76()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_77(var uParam0)
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = unk_0x80C2FD58D720C801(0, 1, true);
	if (!unk_0x0C515FAB3FF9EA92(sVar0, uParam0->f_466))
	{
		func_7(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_113();
	func_101(uParam0);
	func_85(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_82(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0x9CD27B0045628463();
	func_78(&(uParam0->f_649), unk_0xA921AA820C25702F(uParam0->f_449, 4), (unk_0xA921AA820C25702F(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1);
	if (unk_0xA921AA820C25702F(uParam0->f_449, 7))
	{
		if ((!unk_0xD3C2E180A40F031E() && unk_0x5A859503B0C08678()) && !unk_0xB0034A223497FFCB())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0xA921AA820C25702F(uParam0->f_449, 11) && !unk_0xA921AA820C25702F(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
				{
					if (!unk_0xA921AA820C25702F(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						unk_0x0DF606929C105BE1(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0xA0EBB943C300E693(false);
	unk_0x6806C51AD12B83B8(2);
	unk_0x6806C51AD12B83B8(1);
	unk_0x6806C51AD12B83B8(8);
	unk_0x6806C51AD12B83B8(7);
	unk_0x6806C51AD12B83B8(3);
	unk_0x25F87B30C382FCA7();
	unk_0xB8A850F20A067EB6(82, 66);
	unk_0xAABB1F56E2A17CED(17, 0.612f, 0.818f);
	unk_0xE3A3DB414A373DAB();
	if (!unk_0xD3C2E180A40F031E())
	{
		unk_0xEDE476E5EE29EDB1(2, 201);
	}
	unk_0xEDE476E5EE29EDB1(2, 202);
	unk_0xEDE476E5EE29EDB1(2, 188);
	unk_0xEDE476E5EE29EDB1(2, 187);
	unk_0xEDE476E5EE29EDB1(2, 189);
	unk_0xEDE476E5EE29EDB1(2, 190);
	if (!unk_0xA921AA820C25702F(uParam0->f_449, 7))
	{
		if (!unk_0xD3C2E180A40F031E())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (2.9f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0xC906A7DAB05C8D2B(Var2, &(Var2.f_2));
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 134);
			unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var2, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), uParam0->f_404);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 7);
		}
	}
}

void func_78(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)
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
	
	unk_0x7F4724035FDCA1DD(2);
	func_81(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x77B612531280010D())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xA571D46727E2B718(2))
	{
		fVar5 = unk_0x5B84D09CEC5209C5(2, 239);
		fVar6 = unk_0x5B84D09CEC5209C5(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF34EE736CF047844(((fVar7 * fParam5) * 127f));
			iVar0[3] = -unk_0xF34EE736CF047844(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF34EE736CF047844(((unk_0x5B84D09CEC5209C5(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF34EE736CF047844(((unk_0x5B84D09CEC5209C5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_80((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_80((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x9CD27B0045628463())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xA571D46727E2B718(2))
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
		uParam0->f_27 = unk_0x9CD27B0045628463() + 4000;
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
	if ((unk_0xA571D46727E2B718(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_79((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_79((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_79((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_79(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_79(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_79(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0xA571D46727E2B718(0) && bParam1)
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
		if (unk_0xA571D46727E2B718(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x91AEF906BCA88877(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x9CD27B0045628463() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x91AEF906BCA88877(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x9CD27B0045628463() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_79(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_79(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
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
	unk_0xBFD8727AEA3CCEBA(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		if (unk_0xDFB2B516207D3534(*uParam0))
		{
			if (unk_0x02EC0AF5C5A49B7A(*uParam0))
			{
				unk_0xAF66DCEE6609B148();
			}
		}
	}
}

float func_79(float fParam0, float fParam1, float fParam2)
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

int func_80(int iParam0, int iParam1, int iParam2)
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

void func_81(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x1CEA6BFDF248E5D9(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (unk_0xA571D46727E2B718(2))
	{
		if (bParam5)
		{
			if (unk_0x77B612531280010D())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_82(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (unk_0xA921AA820C25702F(uParam0->f_449, 19))
				{
					uParam0->f_452 = unk_0x9CD27B0045628463() + 500;
				}
				else
				{
					uParam0->f_452 = unk_0x9CD27B0045628463();
				}
			}
			else if (unk_0x9CD27B0045628463() > uParam0->f_452)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!unk_0xA921AA820C25702F(uParam0->f_1.f_303, iVar1 + 4))
						{
							func_84(uParam0, iVar1);
							if (unk_0xA921AA820C25702F(uParam0->f_1.f_370, iVar1))
							{
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 19);
							}
							else
							{
								unk_0xE80492A9AC099A93(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_83(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)
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
	bVar0 = unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_7311.f_99.f_214[iParam0]), iParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_7311.f_99.f_214[iParam0]), iParam1);
	}
}

void func_84(var uParam0, int iParam1)
{
	unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xC3D0841A0CC546A6(99);
	unk_0xC6796A8FFA375E53();
	func_25(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_85(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && unk_0x5A859503B0C08678()) && !unk_0xD3C2E180A40F031E())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0xA921AA820C25702F(uParam0->f_449, 13))
			{
				if (func_86(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						unk_0xE80492A9AC099A93(&(uParam0->f_449), 11);
					}
					else
					{
						unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 11);
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
				unk_0xE80492A9AC099A93(&(uParam0->f_449), 13);
				unk_0xE80492A9AC099A93(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (unk_0xA921AA820C25702F(uParam0->f_449, 11))
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_449), 11);
			}
			if (unk_0xA921AA820C25702F(uParam0->f_449, 13))
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_86(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_100(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_87(sParam2, iParam3, 0);
}

int func_87(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_99();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_97();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_91();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_90())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_74())
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_89();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_88();
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
		func_99();
	}
	return 0;
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_89()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_90()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_91()
{
	if (func_280(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_92();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_92()
{
	func_93();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_93()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_96(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_95(unk_0xD80958FC74E988A6());
			if (func_94(iVar0) && (!func_280(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_94(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_94(int iParam0)
{
	return iParam0 < 3;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)
{
	if (func_94(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_97()
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

bool func_98(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_99()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_101(var uParam0)
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
	if (unk_0x6CD79468A1E595C6(2))
	{
		func_7(uParam0);
	}
	if (!unk_0xA921AA820C25702F(uParam0->f_449, 11))
	{
		if ((unk_0x580417101DDB492F(2, iLocal_35) || unk_0x580417101DDB492F(2, iLocal_37)) || (unk_0xA571D46727E2B718(2) && (unk_0x580417101DDB492F(2, iLocal_36) || unk_0x580417101DDB492F(2, iLocal_38))))
		{
			func_111();
			if (unk_0xA921AA820C25702F(uParam0->f_449, 12))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 13);
				unk_0xE80492A9AC099A93(&(uParam0->f_449), 11);
				unk_0xE80492A9AC099A93(&(uParam0->f_449), 10);
			}
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 12);
		}
	}
	func_81(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0xA571D46727E2B718(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_80((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_80((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (unk_0x77B612531280010D())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > unk_0x9CD27B0045628463())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 4);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 4);
		}
	}
	if (!unk_0xA921AA820C25702F(uParam0->f_449, 10))
	{
		if (!unk_0xA921AA820C25702F(uParam0->f_449, 11))
		{
			if ((unk_0x9CD27B0045628463() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((unk_0x9CD27B0045628463() - uParam0->f_457) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || unk_0xF3A21BCD95725A4A(2, 188)) || unk_0xF3A21BCD95725A4A(2, 189)) || (unk_0xA571D46727E2B718(2) && unk_0x91AEF906BCA88877(2, 241)))
					{
						unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xC3D0841A0CC546A6(8);
						unk_0xC6796A8FFA375E53();
						unk_0xF6E48914C7A8694E(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0xC50AA39A577AF886();
						uParam0->f_456 = unk_0x9CD27B0045628463();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || unk_0xF3A21BCD95725A4A(2, 187)) || unk_0xF3A21BCD95725A4A(2, 190)) || (unk_0xA571D46727E2B718(2) && unk_0x91AEF906BCA88877(0, 242)))
					{
						unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xC3D0841A0CC546A6(9);
						unk_0xC6796A8FFA375E53();
						unk_0xF6E48914C7A8694E(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0xC50AA39A577AF886();
						uParam0->f_456 = unk_0x9CD27B0045628463();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || unk_0xF3A21BCD95725A4A(2, 188)) || (unk_0xA571D46727E2B718(2) && unk_0x91AEF906BCA88877(0, 40)))
					{
						unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xC3D0841A0CC546A6(8);
						unk_0xC6796A8FFA375E53();
						if (uParam0->f_416 != 0)
						{
							unk_0x67C540AA08E4A6F5(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 0;
						if (unk_0xA921AA820C25702F(uParam0->f_449, 9))
						{
							unk_0xE80492A9AC099A93(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x9CD27B0045628463();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || unk_0xF3A21BCD95725A4A(2, 187)) || (unk_0xA571D46727E2B718(2) && unk_0x91AEF906BCA88877(0, 41)))
					{
						unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xC3D0841A0CC546A6(9);
						unk_0xC6796A8FFA375E53();
						if (uParam0->f_416 != 1)
						{
							unk_0x67C540AA08E4A6F5(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 1;
						if (unk_0xA921AA820C25702F(uParam0->f_449, 9))
						{
							unk_0xE80492A9AC099A93(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x9CD27B0045628463();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || unk_0xA921AA820C25702F(uParam0->f_449, 13))
				{
					if (unk_0x580417101DDB492F(2, iLocal_35) || (unk_0xA571D46727E2B718(2) && unk_0x580417101DDB492F(2, iLocal_36)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!unk_0xA921AA820C25702F(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x9CD27B0045628463();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											unk_0xF6E48914C7A8694E(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0xC50AA39A577AF886();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_97173.f_1[*uParam0] = 1;
											unk_0x8DFCED7A656F8802(false);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_86218[iVar1 /*19*/])
									{
										unk_0xF6E48914C7A8694E(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0xC50AA39A577AF886();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_83(4, *uParam0, 1);
									if (!func_110(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_83(5, *uParam0, 1);
								}
								unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_86218[iVar1 /*19*/])
								{
									if (Global_97173.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_97173.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_86218[iVar1 /*19*/].f_1[iVar2])
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
													if (Global_86064[iVar3 /*5*/] != Global_86218[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0xA921AA820C25702F(Global_97173.f_1.f_116, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0xA921AA820C25702F(Global_97173.f_1.f_118, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, iVar3))
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
										Global_97173.f_1.f_12[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0x580417101DDB492F(2, iLocal_37) || (unk_0xA571D46727E2B718(2) && unk_0x580417101DDB492F(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86218[iVar1 /*19*/].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									unk_0x67C540AA08E4A6F5(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x9CD27B0045628463();
								}
								else if (!func_281(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0xC3D0841A0CC546A6(iVar7);
											unk_0xC6796A8FFA375E53();
											unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0xC3D0841A0CC546A6(iVar7);
											unk_0xC58424BA936EB458(true);
											unk_0xC6796A8FFA375E53();
											iVar7++;
										}
										unk_0x67C540AA08E4A6F5(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_107(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = unk_0x9CD27B0045628463();
										uParam0->f_465 = 0;
										func_106(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86218[iVar1 /*19*/].f_1[uParam0->f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_107(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_105(8, 0);
									func_83(5, 1, 0);
									uParam0->f_427 = 0;
									func_11(uParam0, 1);
									uParam0->f_456 = unk_0x9CD27B0045628463();
									func_5(uParam0, 3, 0);
								}
								unk_0x67C540AA08E4A6F5(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_86218[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
			unk_0xC3D0841A0CC546A6(99);
			unk_0xC3D0841A0CC546A6(-1);
			unk_0xC6796A8FFA375E53();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xA921AA820C25702F(uParam0->f_449, 17))
			{
				iVar10 = Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_86218[iVar1 /*19*/].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x9CD27B0045628463();
		unk_0xE80492A9AC099A93(&(uParam0->f_449), 10);
	}
	else if (unk_0x4D79439A6B55AC67())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0x768FF8961BA904D6(uParam0->f_680))
		{
			iVar11 = unk_0x2DE7EFA66B906036(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_105(iVar0, iVar1);
			if (!func_110(0))
			{
				func_104(*uParam0);
			}
			unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_107(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_86218[iVar1 /*19*/])
				{
					unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
					unk_0xC3D0841A0CC546A6(iVar12);
					unk_0xC58424BA936EB458(true);
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
					unk_0xC3D0841A0CC546A6(iVar12);
					unk_0xC58424BA936EB458(false);
					unk_0xC6796A8FFA375E53();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_83(5, *uParam0, 1);
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			unk_0x8DFCED7A656F8802(false);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (unk_0x768FF8961BA904D6(uParam0->f_681))
		{
			iVar13 = unk_0x2DE7EFA66B906036(uParam0->f_681);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_97173.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			unk_0xF6E48914C7A8694E(uParam0->f_413, "UPDATE_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_450);
			unk_0xC3D0841A0CC546A6(iVar13);
			unk_0xC3D0841A0CC546A6(iVar14);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(uParam0->f_413, "FOCUS_VIEW");
			unk_0xC3D0841A0CC546A6(99);
			unk_0xC6796A8FFA375E53();
			unk_0x67C540AA08E4A6F5(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			unk_0xE80492A9AC099A93(&(uParam0->f_449), 17);
			func_103(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x9CD27B0045628463();
			uParam0->f_457 = uParam0->f_456;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				unk_0x8DFCED7A656F8802(false);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (unk_0x768FF8961BA904D6(uParam0->f_682))
		{
			iVar15 = unk_0x2DE7EFA66B906036(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					unk_0x67C540AA08E4A6F5(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_102(uParam0, uParam0->f_427);
	}
}

void func_102(var uParam0, int iParam1)
{
	if (!func_19())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0xA921AA820C25702F(Global_97173.f_1.f_119, 14))
					{
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 10);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 14);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0xA921AA820C25702F(Global_97173.f_1.f_119, 16))
					{
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 10);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 16);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0xA921AA820C25702F(Global_97173.f_1.f_119, 15))
					{
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 10);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 15);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0xA921AA820C25702F(Global_97173.f_1.f_119, 17))
					{
						if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 10);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 17);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_103(var uParam0, int iParam1)
{
	if (!unk_0xA921AA820C25702F(uParam0->f_463, iParam1))
	{
		if (!unk_0xA921AA820C25702F(Global_97173.f_1.f_119, iParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(&(uParam0->f_1.f_304[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
				unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_119), iParam1);
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
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 0))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 1))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 3))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 0))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 1))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 5))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 15))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 3))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 2))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 18))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 6))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 10))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 0))
								{
									if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 7))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 11))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 1))
								{
									if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 8))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 19))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 4))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 16))
							{
								if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 5))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0xA921AA820C25702F(Global_97173.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_463), iParam1);
	}
}

void func_104(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_97173.f_7311.f_99.f_200[7];
			if (iVar0 == 1)
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_jewel_stealth"), true, true);
			}
			else
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_jewel_stealth"), false, true);
			}
			break;
		
		case 1:
			iVar0 = Global_97173.f_7311.f_99.f_200[8];
			if (iVar0 == 3)
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_docks_sink_ship"), true, true);
			}
			else
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_docks_sink_ship"), false, true);
			}
			break;
		
		case 3:
			iVar0 = Global_97173.f_7311.f_99.f_200[10];
			if (iVar0 == 6)
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_bureau_firecrew"), true, true);
			}
			else
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_bureau_firecrew"), false, true);
			}
			break;
		
		case 4:
			iVar0 = Global_97173.f_7311.f_99.f_200[11];
			if (iVar0 == 8)
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_bigs_traffic"), true, true);
			}
			else
			{
				unk_0x4B33C4243DE0C432(joaat("sp_heist_chose_bigs_traffic"), false, true);
			}
			break;
	}
}

void func_105(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_200[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_200[iParam0] = iParam1;
}

void func_106(int iParam0, int iParam1)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_58[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_120[iParam0]), iParam1);
	}
	unk_0x933D6A9EEC1BACD0(&Global_86197, iParam0);
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_97173.f_7311.f_99.f_200[7];
			iVar0 = 0;
			while (iVar0 < Global_86218[iVar1 /*19*/])
			{
				switch (Global_97173.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 0);
						break;
					
					case 10:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 1);
						unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 14);
						break;
					
					case 7:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 2);
						break;
					
					case 12:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 3);
						unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 4);
						break;
					
					case 8:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 5);
						break;
					
					case 9:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 6);
						break;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_119), Global_97173.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_97173.f_7311.f_99.f_200[9];
			iVar0 = 0;
			while (iVar0 < Global_86218[iVar1 /*19*/])
			{
				switch (Global_97173.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 7);
						break;
					
					case 10:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 8);
						unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 14);
						break;
					
					case 11:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 9);
						unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 17);
						break;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_119), Global_97173.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_97173.f_7311.f_99.f_200[10];
			iVar0 = 0;
			while (iVar0 < Global_86218[iVar1 /*19*/])
			{
				switch (Global_97173.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 10);
						break;
					
					case 10:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 11);
						unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 14);
						break;
					
					case 5:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 12);
						break;
					
					case 3:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 13);
						break;
					
					case 4:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 17);
						break;
					
					case 7:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 14);
						break;
					
					case 12:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 15);
						unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 19);
						break;
					
					case 8:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 16);
						break;
					
					case 9:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 18);
						break;
					
					case 13:
						unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_117), 20);
						unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_119), 16);
						break;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_97173.f_1.f_119), Global_97173.f_1.f_12[iVar1 /*6*/][iVar0]);
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
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 0);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 1);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 2);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 3);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 4);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 5);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 6);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 7);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 8);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 9);
			break;
		
		case 3:
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 10);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 11);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 12);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 13);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 14);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 15);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 16);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 17);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 18);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 19);
			unk_0xE80492A9AC099A93(&(Global_97173.f_1.f_117), 20);
			break;
	}
}

bool func_110(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_111()
{
	Global_14558 = 0;
	func_112();
}

void func_112()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_113()
{
	unk_0xEB2D525B57F42B40();
	func_114();
}

void func_114()
{
	Global_17098.f_134 = 1;
}

void func_115(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!unk_0xD3C2E180A40F031E())
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (Global_35953 == 1)
			{
				func_120(unk_0xD80958FC74E988A6());
			}
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (2.9f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2));
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 134);
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), uParam0->f_404);
			unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
		}
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 7);
	}
	unk_0xA0EBB943C300E693(false);
	func_72(1);
	func_119();
	unk_0xFDB423997FA30340();
	unk_0xA56F01F3765B93A0(uParam0->f_401, 5f, true, true, false, false);
	unk_0xDD19FA1C6D657305(uParam0->f_401, 5f);
	unk_0xD39D13C9FEBF0511(true);
	unk_0xB8A850F20A067EB6(82, 66);
	unk_0xAABB1F56E2A17CED(17, 0.612f, 0.818f);
	unk_0xE3A3DB414A373DAB();
	func_118(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar3 = unk_0xB0F7F8663821D9C3(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0x2CA429C029CCF247(iVar3);
	}
	unk_0xAF348AFCB575A441(&(Global_86135[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x405DC2AEF6AF95B9(unk_0x399685DB942336BC(unk_0xD80958FC74E988A6()));
	}
	func_117(0);
	func_116();
	unk_0xC6ED9D5092438D91(0);
	if (unk_0x48AF36444B965238())
	{
		unk_0xF6E48914C7A8694E(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		unk_0xC58424BA936EB458(false);
		unk_0xC6796A8FFA375E53();
	}
	uParam0->f_466 = unk_0x80C2FD58D720C801(2, 10, true);
	unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 2);
	Global_86196 = 1;
	func_6(uParam0, uParam0->f_464, 0);
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_97173.f_23602.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	if (unk_0x4D79439A6B55AC67())
	{
		unk_0x8DFCED7A656F8802(true);
	}
}

void func_117(bool bParam0)
{
	if (!bParam0)
	{
		Global_95819 = unk_0x9CD27B0045628463() + 250;
	}
	Global_95816 = bParam0;
}

void func_118(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
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
	*uParam0 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x026FB97D0A425F84(*uParam0, true);
	unk_0xBFD8727AEA3CCEBA(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x6A25241C340D3822(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		unk_0xC7848EFCCC545182(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x299FAEBB108AE05B(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_119()
{
	Global_17098.f_5 = 1;
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35756[iVar0 /*5*/];
		func_123(1, iVar1, 1);
		return;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_121(iVar2);
}

void func_121(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	func_124(iParam0, iParam1, iParam2, 0, 0);
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_126(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_125();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35837[iVar0 /*5*/] = iParam0;
	Global_35837[iVar0 /*5*/].f_1 = iParam1;
	Global_35837[iVar0 /*5*/].f_2 = iParam2;
	Global_35837[iVar0 /*5*/].f_3 = iParam3;
	Global_35837[iVar0 /*5*/].f_4 = iParam4;
}

int func_125()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35837[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	if (func_127(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
			{
				if (iParam1 == Global_35837[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_128(int iParam0)
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
		if (!Global_35756[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_129(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_130(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/].f_6 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_130(int iParam0)
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
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_131(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_142(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1 && Global_35609[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35609[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35609[iVar0 /*18*/].f_4 = 1;
			Global_35609[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35609[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35609[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

void func_132(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*uParam0 == -1)
		{
			func_129(uParam0);
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
		if (!Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/] = 1;
			Global_35609[iVar0 /*18*/].f_1 = Global_35726;
			Global_35726++;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_16 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35609[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35609[iVar0 /*18*/].f_5 = iParam3;
			Global_35609[iVar0 /*18*/].f_17 = unk_0xC30338E8088E2E21();
			Global_35609[iVar0 /*18*/].f_6 = 0;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_35609[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35609[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35609[iVar0 /*18*/].f_11 = 0;
			}
			*uParam0 = Global_35609[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_133(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_92();
				if (!func_94(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_141()) || Global_96220) || Global_24446) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_137()) || func_136()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_141()) || Global_24446) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_141()) || Global_96220) || Global_24446) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_141()) || Global_96220) || Global_24446) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_136()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_141() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_98(8, -1)) || func_136()) || func_135()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_139()) || func_138()) || func_135()) || func_134())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_141()) || Global_24446) || func_140()) || func_98(8, -1)) || func_138()) || func_137()) || func_136()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_141()) || func_138()) || Global_96220) || Global_24446) || func_140()) || Global_35953) || func_98(8, -1)) || func_137()) || func_135()) || func_136()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_141()) || Global_96220) || Global_24446) || func_140()) || func_98(8, -1)) || func_137()) || func_135()) || func_139()) || func_138()) || func_136())
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

var func_134()
{
	return Global_89823.f_1;
}

int func_135()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_136()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_138()
{
	return Global_89836.f_291 > 0;
}

bool func_139()
{
	return Global_89836.f_290 > 0;
}

var func_140()
{
	return Global_1315898;
}

int func_141()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_143(int iParam0)
{
	return func_144(iParam0, Global_34909);
}

int func_144(int iParam0, int iParam1)
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

void func_145()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	if (func_281(39))
	{
		if (!unk_0xA921AA820C25702F(iLocal_39, 10))
		{
			unk_0x7A86743F475D9E09("RBHS_MSC_3_P3", 8);
			unk_0x963D27A58DF860AC(joaat("player_two"));
			unk_0xD3BD40951412FEF6("MISSHEISTPALETOSCORE1LEADINOUT");
			unk_0x944955FB2A3935C8();
			unk_0x933D6A9EEC1BACD0(&iLocal_39, 10);
		}
		else if (unk_0xB56BBBCC2955D9CB())
		{
			unk_0xBA01E7B6DEEFBBC9("LESTER", 0, 0, 0, 0);
			unk_0xBA01E7B6DEEFBBC9("LESTER", 2, 0, 0, 0);
			unk_0xBA01E7B6DEEFBBC9("LESTER", 3, 0, 1, 0);
			unk_0xBA01E7B6DEEFBBC9("LESTER", 4, 1, 1, 0);
			unk_0xBA01E7B6DEEFBBC9("LESTER", 5, 0, 0, 0);
			unk_0xBA01E7B6DEEFBBC9("LESTER", 7, 0, 0, 0);
			unk_0xBA01E7B6DEEFBBC9("LESTER", 8, 1, 0, 0);
			unk_0x0546524ADE2E9723("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_281(40))
	{
		if (func_281(39))
		{
			if (((unk_0xC59F528E9AB9F339() && unk_0x98A4EB5D89A0C952(joaat("player_two"))) && unk_0xD031A9162D01088C("MISSHEISTPALETOSCORE1LEADINOUT")) && unk_0xCA7D9B86ECA7481B())
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_102))
				{
					unk_0xE40C1C56DF95C2E8(iLocal_102, "LESTER", 1, 0, 0);
				}
				if (!unk_0x5F9532F3B5CC2551(iLocal_103))
				{
					unk_0xE40C1C56DF95C2E8(iLocal_103, "MICHAEL", 0, joaat("player_zero"), 0);
				}
				if (!unk_0x5F9532F3B5CC2551(iLocal_106[2]))
				{
					unk_0xE40C1C56DF95C2E8(iLocal_106[2], "TREVOR", 0, joaat("player_two"), 0);
				}
				func_117(1);
				func_72(1);
				func_248(1, 1, 1, 0);
				iLocal_40 = -1;
				if (func_92() == 2)
				{
					bLocal_105 = true;
				}
				else
				{
					bLocal_105 = false;
				}
				unk_0x186D5CB5E7B0FF7B(2048);
				if (func_110(0))
				{
					unk_0x8093F23ABACCC7D4(false, false, false, false);
				}
				unk_0x2F844A8B08D76685("Taxi_vomit", 0);
				func_106(39, 0);
			}
		}
		else if (unk_0xD3C2E180A40F031E())
		{
			func_113();
			if (unk_0xA921AA820C25702F(iLocal_39, 18))
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_103))
				{
					unk_0xEA1C610A04DB6BBB(iLocal_103, 1);
				}
				if (!unk_0x5F9532F3B5CC2551(iLocal_102))
				{
					unk_0xEA1C610A04DB6BBB(iLocal_102, 1);
				}
				if (unk_0x7239B21A38F536BA(iLocal_106[2]))
				{
					unk_0xEA1C610A04DB6BBB(iLocal_106[2], 1);
				}
				unk_0xE80492A9AC099A93(&iLocal_39, 18);
			}
			if (!unk_0xA7A932170592B50E(iLocal_101))
			{
				iLocal_101 = unk_0x6ABFA3E16460F22D(26379945, 1398.167f, 3605.438f, 39.6443f, -8.2882f, 0f, 126.8884f, 50f, true, 2);
			}
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			if (unk_0x7239B21A38F536BA(unk_0xC0741A26499654CD("Trevor", 0)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_39, 7))
				{
					iLocal_106[2] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("Trevor", 0));
					unk_0x933D6A9EEC1BACD0(&iLocal_39, 7);
				}
			}
			if (unk_0x4C6A6451C79E4662("Trevor", 0))
			{
				if (func_92() != 2)
				{
					if (func_243(&iLocal_106, 2))
					{
						func_183(&iLocal_106, 0, 0, 0);
					}
				}
				unk_0xE532F5D78798DAAB(joaat("player_two"));
				if (!func_110(0))
				{
					unk_0x013A80FC08F6E4F2("PS_1_TREVOR_PUKING");
					Var0 = { 1391.81f, 3614.606f, 37.97f };
					unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2));
					unk_0xE8854A4326B9E12B(&iVar3);
					unk_0x83CDB10EA29B370B(0, "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_PUKING_LEADOUT", 1396.911f, 3603.942f, 38.925f, 0f, 0f, 108f, 1000f, -4f, -1, 0, 0f, 2, 0);
					unk_0x39E72BC99E6360CB(iVar3);
					unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iVar3);
					unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					unk_0x933D6A9EEC1BACD0(&iLocal_39, 11);
					iLocal_104 = 0;
				}
				else
				{
					unk_0xE80492A9AC099A93(&iLocal_39, 11);
					unk_0xE80492A9AC099A93(&iLocal_39, 17);
				}
			}
			if (unk_0xB2CBCD0930DFB420(true))
			{
				if (!func_110(0))
				{
					unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				}
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				if (unk_0x7239B21A38F536BA(iLocal_102))
				{
					unk_0x9614299DCB53E54B(&iLocal_102);
				}
				if (unk_0x7239B21A38F536BA(iLocal_103))
				{
					unk_0x9614299DCB53E54B(&iLocal_103);
				}
				func_182(15000);
				unk_0xE3E2C1B4C59DBC77(6);
			}
		}
		else if (unk_0xA921AA820C25702F(iLocal_39, 11))
		{
			unk_0xFE99B66D079CF6BC(2, 19, true);
			unk_0xFE99B66D079CF6BC(0, 28, true);
			unk_0xFE99B66D079CF6BC(0, 29, true);
			unk_0xFE99B66D079CF6BC(0, 171, true);
			unk_0xFE99B66D079CF6BC(0, 36, true);
			unk_0xFE99B66D079CF6BC(0, 37, true);
			unk_0xFE99B66D079CF6BC(0, 44, true);
			unk_0xFE99B66D079CF6BC(0, 45, true);
			unk_0xFE99B66D079CF6BC(0, 55, true);
			unk_0xFE99B66D079CF6BC(0, 21, true);
			unk_0xFE99B66D079CF6BC(0, 23, true);
			unk_0xFE99B66D079CF6BC(0, 24, true);
			unk_0xFE99B66D079CF6BC(0, 22, true);
			if (unk_0x8D4D46230B2C353A() == 4)
			{
				unk_0xFE99B66D079CF6BC(0, 31, true);
				unk_0xFE99B66D079CF6BC(0, 30, true);
				unk_0xFE99B66D079CF6BC(0, 2, true);
				unk_0xFE99B66D079CF6BC(0, 1, true);
				unk_0xB4EC2312F4E5B1F1(0f);
				unk_0x6D0858B8EDFD2B7D(-56f, 1f);
			}
			unk_0x719FF505F097FD20();
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0xA921AA820C25702F(iLocal_39, 12))
				{
					func_181(&(Local_150.f_484), 2, unk_0xD80958FC74E988A6(), "TREVOR", 1, 1);
					if (func_86(&(Local_150.f_484), "RBS1AUD", "RBS1_VOMIT", 8, 0, 0, 0))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_39, 12);
					}
				}
				if (unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_PUKING_LEADOUT", 3))
				{
					fVar4 = unk_0x346D81500D088F42(unk_0xD80958FC74E988A6(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_PUKING_LEADOUT");
					if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
					{
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					}
					if (fVar4 < 1f && fVar4 >= 0f)
					{
						if (fVar4 > 0.092f && fVar4 < 0.184f)
						{
							if (!unk_0xA921AA820C25702F(iLocal_39, 13))
							{
								if (iLocal_104 == 0)
								{
									iLocal_104 = unk_0xF28DA9F38CD1787C("SCR_TREV_PUKE", unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
									unk_0x933D6A9EEC1BACD0(&iLocal_39, 13);
									if (!bLocal_105)
									{
										unk_0x5C41E6BABC9E2112(3);
									}
									unk_0x07E5B515DB0636FC(false, true, 1000, true, false, 0);
									if (unk_0xA7A932170592B50E(iLocal_101))
									{
										unk_0x865908C81A2C22E9(iLocal_101, false);
									}
								}
							}
						}
						else if (fVar4 > 0.22f && fVar4 < 0.3f)
						{
							if (!unk_0xA921AA820C25702F(iLocal_39, 14))
							{
								if (iLocal_104 == 0)
								{
									iLocal_104 = unk_0xF28DA9F38CD1787C("SCR_TREV_PUKE", unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
									unk_0x933D6A9EEC1BACD0(&iLocal_39, 14);
								}
							}
						}
						else if (fVar4 > 0.34f && fVar4 < 0.36f)
						{
							if (!unk_0xA921AA820C25702F(iLocal_39, 15))
							{
								if (iLocal_104 == 0)
								{
									iLocal_104 = unk_0xF28DA9F38CD1787C("SCR_TREV_PUKE", unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
									unk_0x933D6A9EEC1BACD0(&iLocal_39, 15);
								}
							}
						}
						else if (fVar4 > 0.4222f && fVar4 < 0.516f)
						{
							if (!unk_0xA921AA820C25702F(iLocal_39, 16))
							{
								if (iLocal_104 == 0)
								{
									iLocal_104 = unk_0xF28DA9F38CD1787C("SCR_TREV_PUKE", unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
									unk_0x933D6A9EEC1BACD0(&iLocal_39, 16);
								}
							}
						}
						else if (unk_0x74AFEF0D2E1E409B(iLocal_104))
						{
							unk_0x8F75998877616996(iLocal_104, false);
							iLocal_104 = 0;
						}
						if (fVar4 > 0.98f)
						{
							unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
							if (unk_0x8D4D46230B2C353A() == 4)
							{
								unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LeadOut_FPS", 4f, -1.5f, -1, 48, 0f, false, false, false);
							}
							else
							{
								unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LEADOUT", 4f, -1.5f, -1, 48, 0f, false, false, false);
							}
							if (unk_0xB65B60556E2A9225("PS_1_TREVOR_PUKING"))
							{
								unk_0xDFE8422B3B94E688("PS_1_TREVOR_PUKING");
							}
						}
					}
				}
				else if (unk_0xA921AA820C25702F(iLocal_39, 16))
				{
					unk_0xE80492A9AC099A93(&iLocal_39, 11);
				}
			}
		}
		else if (iLocal_40 == -1)
		{
			func_248(0, 1, 1, 0);
			unk_0xF66A602F829E2A06("MISSHEISTPALETOSCORE1LEADINOUT");
			unk_0x88C6814073DD4A73();
			if (func_110(0))
			{
				unk_0x891B5B39AC6302AF(0);
				iLocal_40 = 0;
			}
			else
			{
				iLocal_40 = unk_0x9CD27B0045628463() + 1000;
			}
		}
		else if (unk_0x9CD27B0045628463() > iLocal_40)
		{
			if (!func_110(0))
			{
				Global_54572 = 0;
				Global_89823 = 0;
				func_180();
			}
			func_72(0);
			func_178(&(Global_97173.f_1729.f_539), 91);
			func_153(&(Global_97173.f_1729.f_539), 91);
			if (unk_0x7239B21A38F536BA(iLocal_44))
			{
				if (unk_0x4C241E39B23DF959(iLocal_44, false))
				{
					unk_0x2FA133A4A9D37ED8(iLocal_44, 0, true);
				}
			}
			func_152(&iLocal_42);
			unk_0xE80492A9AC099A93(&iLocal_39, 1);
			unk_0x31D16B74C6E29D66(iLocal_99, false);
			if (iLocal_100 != -1)
			{
				if (unk_0x0EAEB0DB4B132399(iLocal_100))
				{
					unk_0x46399A7895957C0E(iLocal_100);
				}
			}
			unk_0x2E05208086BA0651();
			unk_0x34F060F4BF92E018(Local_150.f_1.f_394 - Local_150.f_1.f_397, Local_150.f_1.f_394 + Local_150.f_1.f_397, true, 0);
			unk_0xAA5F02DB48D704B9(5);
			func_147(2, 0);
			func_146(24);
			func_106(40, 0);
		}
	}
	else if (!func_281(39))
	{
		if (unk_0x228D3D94F8A11C3C("RBHS_MSC_3_P3"))
		{
			unk_0x440AF51A3462B86F();
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LEADOUT", 3) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LeadOut_FPS", 3))
		{
			iLocal_41 = unk_0x9CD27B0045628463() + 4000;
		}
	}
	if (unk_0x9CD27B0045628463() < iLocal_41)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		}
		unk_0xFE99B66D079CF6BC(2, 19, true);
		unk_0xFE99B66D079CF6BC(0, 28, true);
		unk_0xFE99B66D079CF6BC(0, 29, true);
		unk_0xFE99B66D079CF6BC(0, 171, true);
		unk_0xFE99B66D079CF6BC(0, 36, true);
		unk_0xFE99B66D079CF6BC(0, 37, true);
		unk_0xFE99B66D079CF6BC(0, 44, true);
		unk_0xFE99B66D079CF6BC(0, 45, true);
		unk_0xFE99B66D079CF6BC(0, 55, true);
		unk_0xFE99B66D079CF6BC(0, 21, true);
		unk_0xFE99B66D079CF6BC(0, 23, true);
		unk_0xFE99B66D079CF6BC(0, 24, true);
		unk_0xFE99B66D079CF6BC(0, 22, true);
	}
}

void func_146(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_66960[iParam0] = 0;
	Global_66960.f_69[iParam0] = 0;
}

void func_147(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1))
		{
			if (!func_38(iVar1))
			{
				if (!(iVar1 == 11 && iParam0 == 3))
				{
					switch (iVar1)
					{
						case 1:
							func_150(4, 1);
							break;
						
						case 2:
							func_150(7, 1);
							break;
						
						case 3:
							func_150(5, 1);
							break;
						
						case 4:
							func_150(8, 1);
							break;
						
						case 5:
							func_150(2, 1);
							break;
						
						case 6:
							func_150(10, 1);
							break;
						
						case 7:
							func_150(1, 1);
							break;
						
						case 8:
							func_150(3, 1);
							break;
						
						case 9:
							func_150(6, 1);
							break;
						
						case 10:
							func_150(9, 1);
							break;
						
						case 11:
							func_150(0, 1);
							break;
						
						case 12:
							func_150(11, 1);
							break;
						
						case 13:
							func_150(12, 1);
							break;
						}
					}
				}
		}
		iVar0++;
	}
	if (!bParam1)
	{
		if (!func_149(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_148("DI_FEED_HST");
	}
}

void func_148(char* sParam0)
{
	unk_0x202709F4C58A0424("");
	unk_0xC6F580E4C94926AC("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR", sParam0);
}

int func_149(int iParam0)
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_150(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!unk_0xA921AA820C25702F(Global_97173.f_29532.f_1, iVar0))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_29532.f_1), iVar0);
			if (!bParam1)
			{
				func_148(func_151(iParam0));
			}
		}
	}
}

char* func_151(int iParam0)
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

void func_152(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34871)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

void func_153(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_154(uParam0, 0, 12);
			break;
		
		case 19:
			func_154(uParam0, 1, 13);
			break;
		
		case 29:
			func_154(uParam0, 1, 14);
			break;
		
		case 30:
			func_154(uParam0, 2, 15);
			func_154(uParam0, 1, 29);
			break;
		
		case 32:
			func_154(uParam0, 1, 16);
			func_154(uParam0, 0, 17);
			break;
		
		case 39:
			func_154(uParam0, 0, 21);
			func_154(uParam0, 1, 20);
			break;
		
		case 31:
			func_154(uParam0, 0, 18);
			break;
		
		case 20:
			func_154(uParam0, 2, 22);
			break;
		
		case 66:
			func_154(uParam0, 1, 23);
			break;
		
		case 68:
			func_154(uParam0, 1, 24);
			break;
		
		case 70:
			func_154(uParam0, 1, 67);
			break;
		
		case 8:
			func_154(uParam0, 1, 25);
			func_154(uParam0, 2, 26);
			break;
		
		case 67:
			func_154(uParam0, 1, 27);
			break;
		
		case 9:
			func_154(uParam0, 2, 28);
			break;
		
		case 38:
			func_154(uParam0, 2, 30);
			func_154(uParam0, 1, 19);
			break;
		
		case 83:
			func_154(uParam0, 2, 33);
			break;
		
		case 45:
			func_154(uParam0, 1, 35);
			break;
		
		case 64:
			func_154(uParam0, 0, 36);
			func_154(uParam0, 1, 37);
			break;
		
		case 91:
			func_154(uParam0, 0, 41);
			break;
		
		case 42:
			func_154(uParam0, 0, 58);
			Global_89325[0 /*74*/] = 0;
			func_154(uParam0, 2, 59);
			Global_89325[2 /*74*/] = 0;
			break;
		
		case 41:
			func_154(uParam0, 1, 42);
			func_154(uParam0, 2, 42);
			break;
		
		case 15:
			func_154(uParam0, 0, 46);
			func_154(uParam0, 1, 47);
			break;
		
		case 16:
			func_154(uParam0, 0, 48);
			break;
		
		case 48:
			func_154(uParam0, 1, 50);
			func_154(uParam0, 2, 51);
			break;
		
		case 74:
			func_154(uParam0, 0, 52);
			func_154(uParam0, 1, 66);
			break;
		
		case 76:
			func_154(uParam0, 1, 53);
			func_154(uParam0, 2, 54);
			func_154(uParam0, 0, 62);
			break;
		
		case 75:
			func_154(uParam0, 0, 61);
			func_154(uParam0, 1, 31);
			break;
		
		case 69:
			func_154(uParam0, 1, 63);
			break;
		
		case 84:
			func_154(uParam0, 0, 68);
			func_154(uParam0, 2, 69);
			break;
		
		case 85:
			func_154(uParam0, 0, 64);
			func_154(uParam0, 2, 65);
			break;
		
		case 93:
			func_154(uParam0, 1, 38);
			func_154(uParam0, 2, 39);
			break;
		
		case 11:
			func_154(uParam0, 2, 55);
			break;
		
		case 77:
			func_154(uParam0, 1, 56);
			func_154(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_154(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	var uVar75;
	var uVar78;
	var uVar79;
	var uVar82;
	
	if (!unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[0], 9))
	{
		iVar0 = Global_97173.f_16754[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_97173.f_16754[iParam1] = iParam2;
	uParam0->f_1524[iParam1] = func_167();
	if (!func_166(iParam2, &(uParam0->f_1528[iParam1 /*3*/]), &(uParam0->f_1538[iParam1])))
	{
		return 0;
	}
	if (!func_165(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f))
	{
		if (!func_165(Global_88360[iParam2 /*3*/], 0f, 0f, 0f))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 25;
			Var1.f_57 = 2;
			if (func_155(iParam1, iParam2, &Var1, &uVar75, &uVar78, &uVar79, &uVar82))
			{
				Global_89325[iParam1 /*74*/] = { Var1 };
			}
		}
	}
	uParam0->f_1542[iParam1] = 0;
	uParam0->f_1546[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1556[iParam1] = 0;
	return 1;
}

int func_155(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_60 = 255;
	uParam2->f_61 = 255;
	uParam2->f_62 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_89325[iParam0 /*74*/] };
			if (Global_89548[iParam0] != 2)
			{
				if (unk_0x2A70BAE8883E4C81(Global_89556[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, false, true))
				{
					if (Global_89548[iParam0] == 1)
					{
						*uParam3 = { Global_89556[iParam0 /*3*/] - Global_97173.f_1729.f_539.f_1528[iParam0 /*3*/] };
						*uParam4 = (Global_89566[iParam0] - Global_97173.f_1729.f_539.f_1538[iParam0]);
						if (unk_0xA8CEACB4F35AE058(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_89556[iParam0 /*3*/] - Global_97173.f_1729.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_89566[iParam0] - Global_97173.f_1729.f_539.f_1538[iParam0]);
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
			*uParam2 = { Global_89325[iParam0 /*74*/] };
			if (Global_89548[iParam0] != 2)
			{
				*uParam3 = { Global_89556[iParam0 /*3*/] - Global_97173.f_1729.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_89566[iParam0] - Global_97173.f_1729.f_539.f_1538[iParam0]);
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
			*uParam2 = { Global_89325[iParam0 /*74*/] };
			if (Global_89548[iParam0] != 2)
			{
				*uParam3 = { Global_89556[iParam0 /*3*/] - Global_97173.f_1729.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_89566[iParam0] - Global_97173.f_1729.f_539.f_1538[iParam0]);
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
			func_157(iParam0, uParam2, 0);
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
			return func_155(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_155(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_157(iParam0, uParam2, 2);
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
			func_157(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_155(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_157(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_157(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 1);
			uParam2->f_67 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_157(iParam0, uParam2, 2);
			uParam2->f_67 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_157(iParam0, uParam2, 0);
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
			func_156(iParam0, uParam2, 1);
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
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_157(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_157(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_157(iParam0, uParam2, 0);
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
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { unk_0x313CE5879CEB6FCD(-5f, 5f), unk_0x313CE5879CEB6FCD(-5f, 5f), 0f };
			*uParam4 = unk_0x313CE5879CEB6FCD(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_155(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x313CE5879CEB6FCD(-5f, 5f), unk_0x313CE5879CEB6FCD(-5f, 5f), 0f };
				*uParam4 = unk_0x313CE5879CEB6FCD(-180f, 180f);
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
			if (func_155(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_155(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
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
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_157(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_155(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_155(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_155(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_155(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_155(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_157(iParam0, uParam2, 0);
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
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_155(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { unk_0x313CE5879CEB6FCD(-5f, 5f), unk_0x313CE5879CEB6FCD(-5f, 5f), 0f };
			*uParam4 = unk_0x313CE5879CEB6FCD(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x313CE5879CEB6FCD(-5f, 5f), unk_0x313CE5879CEB6FCD(-5f, 5f), 0f };
				*uParam4 = unk_0x313CE5879CEB6FCD(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x313CE5879CEB6FCD(-5f, 5f), unk_0x313CE5879CEB6FCD(-5f, 5f), 0f };
				*uParam4 = unk_0x313CE5879CEB6FCD(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x313CE5879CEB6FCD(-5f, 5f), unk_0x313CE5879CEB6FCD(-5f, 5f), 0f };
				*uParam4 = unk_0x313CE5879CEB6FCD(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_155(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_155(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_155(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_155(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_155(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_157(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_155(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_155(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_156(iParam0, uParam2, 2);
			uParam2->f_67 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_155(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_156(iParam0, uParam2, 1);
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
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_155(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_155(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_155(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_155(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_155(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_155(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_155(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_155(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_155(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_155(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_155(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_155(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_73 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_67 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_156(iParam0, uParam2, 1);
			uParam2->f_67 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_155(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_155(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
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
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_157(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_157(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0x2FFB6B224F4B2926(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0x2FFB6B224F4B2926(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0x2FFB6B224F4B2926(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_88360[iParam1 /*3*/] };
			*uParam4 = unk_0x313CE5879CEB6FCD(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_156(int iParam0, var uParam1, int iParam2)
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
			if (Global_97173.f_7311.f_99.f_58[128] && !Global_97173.f_7311.f_99.f_58[131])
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
					if (Global_97173.f_7311.f_99.f_58[119])
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
			else if (Global_97173.f_7311.f_99.f_58[118])
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

int func_157(int iParam0, var uParam1, int iParam2)
{
	if (Global_89325[iParam0 /*74*/] == 0)
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("blimp"))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (func_164(iParam0))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0x45A9187928F4B9E3(Global_89325[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0xA0948AB42D7BA0DE(Global_89325[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0xDCE4334788AF94EA(Global_89325[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (unk_0xAB935175B22E822B(Global_89325[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x7F6DB52EEFC96DF8(Global_89325[iParam0 /*74*/]))
		{
			func_156(iParam0, uParam1, iParam2);
			uParam1->f_67 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0xB50C0B0CEDC6CE84(Global_89325[iParam0 /*74*/]))
		{
			func_156(iParam0, uParam1, iParam2);
			uParam1->f_67 = iParam2;
			return 1;
		}
	}
	if (!func_158(Global_89325[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_67 = iParam2;
		if (Global_89325[iParam0 /*74*/] != *uParam1)
		{
			*uParam1 = { Global_89325[iParam0 /*74*/] };
			uParam1->f_67 = 0;
			return 0;
		}
	}
	else
	{
		func_156(iParam0, uParam1, 1);
		uParam1->f_67 = 1;
		if (Global_89325[iParam0 /*74*/] == *uParam1)
		{
			func_156(iParam0, uParam1, 1);
			uParam1->f_67 = 1;
			return 1;
		}
		func_156(iParam0, uParam1, 2);
		uParam1->f_67 = 2;
		if (Global_89325[iParam0 /*74*/] == *uParam1)
		{
			func_156(iParam0, uParam1, 2);
			uParam1->f_67 = 2;
			return 1;
		}
		*uParam1 = { Global_89325[iParam0 /*74*/] };
		uParam1->f_67 = 0;
		return 0;
	}
	func_156(iParam0, uParam1, iParam2);
	uParam1->f_67 = iParam2;
	return 1;
}

int func_158(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_163())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
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
		if ((((!func_162() && !func_161()) && !func_160()) && !func_159()) && !func_163())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x4D982ADB1978442D() || unk_0x48AF36444B965238()) || unk_0xA72BC0B675B1519E())
		{
		}
		else if (!func_160())
		{
			return 0;
		}
	}
	return 1;
}

int func_159()
{
	return 0;
}

int func_160()
{
	return 1;
}

int func_161()
{
	return 1;
}

int func_162()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (Global_89325[iParam0 /*74*/] == joaat("blimp") || Global_89325[iParam0 /*74*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("submersible") || Global_89325[iParam0 /*74*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("burrito2") || Global_89325[iParam0 /*74*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("entityxf") && !Global_97173.f_7311.f_325[8 /*6*/])
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("cheetah") && !Global_97173.f_7311.f_325[8 /*6*/])
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("policeb") && !Global_97173.f_7311.f_325[8 /*6*/])
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("ztype") && !Global_97173.f_7311.f_325[9 /*6*/])
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("polmav") && !Global_97173.f_7311.f_325[9 /*6*/])
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("jb700") && !Global_97173.f_7311.f_325[10 /*6*/])
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("monroe") && !Global_97173.f_7311.f_325[11 /*6*/])
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_89325[iParam0 /*74*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_89325[iParam0 /*74*/] == joaat("gauntlet") && !Global_97173.f_7311.f_325[80 /*6*/]) && !Global_97173.f_7311.f_325[81 /*6*/]) && !Global_97173.f_7311.f_325[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_165(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_166(int iParam0, var uParam1, float fParam2)
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
			return func_166(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_166(8, uParam1, fParam2);
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

var func_167()
{
	var uVar0;
	
	func_177(&uVar0, unk_0x494E97C2EF27C470());
	func_176(&uVar0, unk_0x13D2B8ADD79640F2());
	func_175(&uVar0, unk_0x25223CA6B4D20B7F());
	func_170(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_169(&uVar0, unk_0xBBC72712E80257A1());
	func_168(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_168(var uParam0, int iParam1)
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

void func_169(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_170(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_174(*uParam0);
	iVar1 = func_172(*uParam0);
	if (iParam1 < 1 || iParam1 > func_171(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_171(int iParam0, int iParam1)
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

var func_172(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_173(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_173(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_174(var uParam0)
{
	return uParam0 & 15;
}

void func_175(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_178(var uParam0, int iParam1)
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
		iVar1 = Global_97173.f_16754[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_166(Global_97173.f_16754[iVar0], &Var2, &fVar5))
			{
				Global_97173.f_16754[iVar0] = 318;
				func_179(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87579[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_9 = 0f;
				Global_87579[iVar0 /*29*/].f_12 = 0f;
				Global_87579[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_10 = 0f;
				Global_87579[iVar0 /*29*/].f_13 = 0f;
				Global_87579[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_11 = 0f;
				Global_87579[iVar0 /*29*/].f_14 = 0f;
				Global_87579[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_26 = 0f;
				Global_87579[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_27 = 0f;
				Global_87579[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_179(var uParam0)
{
	*uParam0 = -15;
}

int func_180()
{
	if (func_110(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_182(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

int func_183(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!unk_0x84A2DD9AC37C35C1((*iParam0)[iParam0->f_7]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && (*iParam0)[iParam0->f_7] != unk_0xD80958FC74E988A6())
	{
		if (!bParam2)
		{
			if ((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) && !unk_0x28D3FED7190D3A0B(unk_0xD80958FC74E988A6())) && !unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6()))
			{
				unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
			}
			else
			{
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			}
			if ((unk_0x47E4E977581C5B55((*iParam0)[iParam0->f_7]) && !unk_0x28D3FED7190D3A0B((*iParam0)[iParam0->f_7])) && !unk_0xBB062B2B5722478E((*iParam0)[iParam0->f_7]))
			{
				unk_0xAAA34F8A7CB32098((*iParam0)[iParam0->f_7]);
			}
			else
			{
				unk_0xE1EF3C1216AFF2CD((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = unk_0xD80958FC74E988A6();
		iVar1 = func_92();
		if (!iParam0->f_23)
		{
			func_231(iVar0, 0);
		}
		func_229(iVar1, &iVar0);
		unk_0x1913FE4CBF41C463(iVar0, 32, true);
		unk_0x1913FE4CBF41C463(iVar0, 250, true);
		iVar2 = func_228(iParam0->f_7);
		func_231((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((unk_0xBBDA792448DB5A89(unk_0xEEF059FAD016D209((*iParam0)[iParam0->f_7])) - 100f) / (unk_0xBBDA792448DB5A89(unk_0x4700A416E8324EF3((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_95(unk_0xD80958FC74E988A6()))
		{
			case 0:
				if (unk_0x36AD3E690DA5ACEB("BulletTime"))
				{
					unk_0x068E835A1D0DC0E3("BulletTime");
				}
				if (unk_0x36AD3E690DA5ACEB("BulletTimeOut"))
				{
					unk_0x068E835A1D0DC0E3("BulletTimeOut");
				}
				break;
			
			case 1:
				if (unk_0x36AD3E690DA5ACEB("DrivingFocus"))
				{
					unk_0x068E835A1D0DC0E3("DrivingFocus");
				}
				if (unk_0x36AD3E690DA5ACEB("DrivingFocusOut"))
				{
					unk_0x068E835A1D0DC0E3("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (unk_0x36AD3E690DA5ACEB("REDMIST"))
				{
					unk_0x068E835A1D0DC0E3("REDMIST");
				}
				if (unk_0x36AD3E690DA5ACEB("REDMISTOut"))
				{
					unk_0x068E835A1D0DC0E3("REDMISTOut");
				}
				break;
		}
		unk_0x048189FAC643DEEE(unk_0x4F8644AF03D0E0D6(), (*iParam0)[iParam0->f_7], bParam2, false);
		unk_0x6806C51AD12B83B8(3);
		unk_0x6806C51AD12B83B8(13);
		if (iParam3 & 1 != 0)
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 210, false);
		}
		if (func_227(0) || func_227(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (unk_0xA921AA820C25702F(Global_80941[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_80941[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_80977[Global_68336.f_109[iVar5 /*4*/] /*34*/]), 64);
						unk_0x9B5A68C6489E9909(unk_0xD24D37CC275948CC(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		iParam0->f_5 = func_226(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_226(iVar2);
		iParam0->f_7 = 4;
		iVar22 = unk_0xD80958FC74E988A6();
		unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), 1);
		func_225(iVar22);
		unk_0xE861D0B05C7662B8(iVar22, false, 0);
		if (fVar3 < 25f && !unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
		{
			unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), unk_0xF2DB717A73826179((((25f / 100f) * (unk_0xBBDA792448DB5A89(unk_0x4700A416E8324EF3(unk_0xD80958FC74E988A6())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				unk_0xEA1C610A04DB6BBB(iVar0, 1);
				func_225(iVar0);
				unk_0xE861D0B05C7662B8(iVar0, false, 0);
				unk_0x88CBB5CEB96B7BD2(iVar0, false, 0);
			}
		}
		else if (unk_0x7239B21A38F536BA(iVar0))
		{
			unk_0x9614299DCB53E54B(&iVar0);
		}
		Global_87471 = 1;
		func_223(unk_0xD80958FC74E988A6());
		func_222();
		func_221(iVar2);
		func_212();
		func_206(iVar2);
		func_190(func_204(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 145, 0));
		unk_0xA6F312FCCE9C1DFE(unk_0x4F8644AF03D0E0D6());
		unk_0x79F020FF9EDC0748(unk_0xD80958FC74E988A6(), false);
		unk_0xC1670E958EEE24E5(unk_0xD80958FC74E988A6(), true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x9F343285A00B4BB6(unk_0x4F8644AF03D0E0D6(), func_281(67));
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xD2B315B6689D537D(unk_0x4F8644AF03D0E0D6(), func_281(68));
		}
		func_187(iVar2, &iVar22);
		if (((func_280(0) || func_280(3)) || func_280(2)) || func_280(4))
		{
			unk_0x1913FE4CBF41C463(iVar22, 32, false);
			unk_0x1913FE4CBF41C463(iVar22, 250, false);
		}
		else
		{
			unk_0x1913FE4CBF41C463(iVar22, 32, true);
			unk_0x1913FE4CBF41C463(iVar22, 250, true);
		}
		if (!func_186())
		{
			func_184();
		}
		Global_87108 = 0;
		return 1;
	}
	else
	{
		if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
		}
		if (unk_0x84A2DD9AC37C35C1((*iParam0)[iParam0->f_7]))
		{
		}
		if (unk_0xD80958FC74E988A6() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_184()
{
	if (Global_87501)
	{
		func_93();
		unk_0xBF59707B3E5ED531(func_185(Global_97173.f_1729.f_539.f_3213));
	}
	else
	{
		unk_0xBF59707B3E5ED531("");
	}
}

char* func_185(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

bool func_186()
{
	return Global_17096;
}

void func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_188(4, *iParam1);
			func_188(7, *iParam1);
			func_188(8, *iParam1);
			func_188(11, *iParam1);
			break;
		
		case 1:
			if (Global_97173.f_7311.f_325[2 /*6*/])
			{
				func_188(4, *iParam1);
			}
			func_188(7, *iParam1);
			func_188(8, *iParam1);
			func_188(11, *iParam1);
			if (Global_97173.f_7311.f_99.f_58[126])
			{
				func_188(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_97173.f_7311.f_325[20 /*6*/])
			{
				func_188(4, *iParam1);
			}
			func_188(7, *iParam1);
			func_188(8, *iParam1);
			func_188(11, *iParam1);
			break;
	}
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0x7239B21A38F536BA(iParam1))
	{
		return;
	}
	if (func_189(iParam0, iParam1))
	{
		return;
	}
	if (Global_34032[iParam0 /*31*/].f_24 < 5)
	{
		Global_34032[iParam0 /*31*/].f_25[Global_34032[iParam0 /*31*/].f_24] = iParam1;
		Global_34032[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_34032[iParam0 /*31*/].f_25[iVar0];
			if (!unk_0x7239B21A38F536BA(iVar1) || unk_0x84A2DD9AC37C35C1(iVar1))
			{
				Global_34032[iParam0 /*31*/].f_25[iVar0] = iParam1;
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

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34032[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34032[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_190(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(38 / 32)]), (38 % 32));
			func_191(38, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(41 / 32)]), (41 % 32));
			func_191(41, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(43 / 32)]), (43 % 32));
			func_191(43, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(42 / 32)]), (42 % 32));
			func_191(42, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(44 / 32)]), (44 % 32));
			func_191(44, 0);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(51 / 32)]), (51 % 32));
			func_191(51, 0);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(51 / 32)]), (51 % 32));
			func_191(51, 0);
			break;
		
		case 3:
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(53 / 32)]), (53 % 32));
			func_191(53, 0);
			break;
		
		case 4:
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(81 / 32)]), (81 % 32));
			func_191(81, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(82 / 32)]), (82 % 32));
			func_191(82, 0);
			break;
		
		case 5:
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(47 / 32)]), (47 % 32));
			func_191(47, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(50 / 32)]), (50 % 32));
			func_191(50, 0);
			break;
		
		case 6:
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(50 / 32)]), (50 % 32));
			func_191(50, 0);
			break;
	}
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68067)
		{
			iVar0 = Global_2421967.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_97173.f_5518[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xA921AA820C25702F(Global_30784[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x933D6A9EEC1BACD0(&(Global_30793[(iParam0 / 32)]), (iParam0 % 32));
				Global_31254[iParam0] = iParam1;
			}
			else if (Global_68067)
			{
				Global_2421967.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_97173.f_5518[iParam0] = iParam1;
			}
			unk_0x933D6A9EEC1BACD0(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
			func_193(iParam0);
			if (unk_0xA921AA820C25702F(Global_30784[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_192(iParam0);
			}
		}
	}
}

void func_192(int iParam0)
{
	if (!unk_0xA921AA820C25702F(Global_31723.f_227[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_31723.f_227[(iParam0 / 32)]), (iParam0 % 23));
		Global_31723[Global_31723.f_226] = iParam0;
		Global_31723.f_226++;
	}
}

void func_193(int iParam0)
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
	
	if (!func_202())
	{
		return;
	}
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	Var0 = { func_201(iParam0) };
	if (unk_0xA921AA820C25702F(Var0.f_4, 2))
	{
		func_198(iParam0, &Var0);
	}
	if (!unk_0xC153C43EA202C8C1(Var0.f_5))
	{
		if (unk_0xD3C2E180A40F031E())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0xF1B760881820C952(Var0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), true);
	if ((unk_0xA921AA820C25702F(Global_30793[(iParam0 / 32)], (iParam0 % 32)) && Global_31254[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0xE80492A9AC099A93(&(Global_30793[(iParam0 / 32)]), (iParam0 % 32));
		Global_30802[iParam0] = 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("startup_positioning")) == 0)
	{
		if (unk_0xA921AA820C25702F(Global_31028[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_89836.f_288 == 0)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
					{
						Global_89836.f_288 = unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6());
					}
				}
				iVar11 = Global_89836.f_288;
				iVar12 = unk_0xB0F7F8663821D9C3(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0x933D6A9EEC1BACD0(&(Global_30793[(iParam0 / 32)]), (iParam0 % 32));
					Global_31254[iParam0] = 3;
					unk_0x933D6A9EEC1BACD0(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xE80492A9AC099A93(&(Global_31028[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xA921AA820C25702F(Global_30793[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31254[iParam0];
	}
	else if (unk_0xA921AA820C25702F(Var0.f_4, 0))
	{
		if (Global_97173.f_7311)
		{
			iVar9 = func_195(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_280(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xA921AA820C25702F(Var0.f_4, 1) && unk_0x2C83A9DA6BFFC4F9(joaat("ambient_solomon")) == 0)
	{
		if (func_194())
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
		iVar9 = Global_97173.f_5518[iParam0];
	}
	if (Global_31480[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0xA921AA820C25702F(Global_30784[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xA921AA820C25702F(Global_30793[(iParam0 / 32)], (iParam0 % 32)) || (Global_30802[iParam0] == 0 && Global_31254[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30783)
		{
		}
		else
		{
			if (!unk_0xC153C43EA202C8C1(Var0.f_5))
			{
				unk_0x6F8838D03D1DC226(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0xA921AA820C25702F(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0x73D57CFFDD12C355(unk_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar14 = unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6());
						iVar15 = unk_0xB0F7F8663821D9C3(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, false);
						}
						unk_0x6BAB9442830C7F53(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, false);
					}
					unk_0x6BAB9442830C7F53(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, false);
					}
					unk_0x6BAB9442830C7F53(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, true);
					}
					unk_0x6BAB9442830C7F53(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, false);
					}
					unk_0x6BAB9442830C7F53(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, false);
					}
					unk_0x6BAB9442830C7F53(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, false);
					}
					unk_0x6BAB9442830C7F53(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, false, false);
					}
					unk_0x6BAB9442830C7F53(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0xE80492A9AC099A93(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
			Global_31480[iParam0] = iVar9;
		}
	}
	if (unk_0xA921AA820C25702F(Global_30793[(iParam0 / 32)], (iParam0 % 32)) && Global_31254[iParam0] != 2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
		func_192(iParam0);
		if (Global_30802[iParam0] < 2)
		{
			Global_30802[iParam0]++;
		}
	}
}

int func_194()
{
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return 0;
	}
	switch (func_92())
	{
		case 0:
			if (Global_97173.f_7311.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_97173.f_7311.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_97173.f_7311.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = func_92();
	if (func_196(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xA921AA820C25702F(Global_97173.f_5486[5], 0) || unk_0xA921AA820C25702F(Global_97173.f_5486[6], 0))
			{
				return 0;
			}
		}
		if (func_94(iVar0))
		{
			if (unk_0xA921AA820C25702F(Global_85216[5], iVar0))
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
				if (unk_0xA921AA820C25702F(Global_97173.f_5486[0], 0))
				{
					return 0;
				}
			}
			if (func_94(iVar0))
			{
				if (unk_0xA921AA820C25702F(Global_85216[0], iVar0))
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
				if (unk_0xA921AA820C25702F(Global_97173.f_5486[5], 0))
				{
					return 0;
				}
			}
			if (func_94(iVar0))
			{
				if (unk_0xA921AA820C25702F(Global_85216[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xA921AA820C25702F(Global_97173.f_5486[6], 0))
				{
					return 0;
				}
			}
			if (func_94(iVar0))
			{
				if (unk_0xA921AA820C25702F(Global_85216[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xA921AA820C25702F(Global_97173.f_5486[2], 0))
				{
					return 0;
				}
				if (func_94(iVar0))
				{
					if (unk_0xA921AA820C25702F(Global_85216[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xA921AA820C25702F(Global_97173.f_5486[1], 0))
				{
					return 0;
				}
				if (func_94(iVar0))
				{
					if (unk_0xA921AA820C25702F(Global_85216[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xA921AA820C25702F(Global_97173.f_5486[3], 0))
				{
					return 0;
				}
			}
			if (func_94(iVar0))
			{
				if (unk_0xA921AA820C25702F(Global_85216[3], iVar0))
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

int func_196(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				iVar0 = unk_0x9F47B058362C84B5(func_197(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true)));
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

int func_197(int iParam0)
{
	return iParam0;
}

void func_198(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA921AA820C25702F(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_167();
	iVar1 = func_200(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_199(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_97173.f_5518[iParam0] = 0;
						unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_199(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_97173.f_5518[iParam0] = 0;
						unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_199(iParam0))
			{
				if ((unk_0x2C83A9DA6BFFC4F9(joaat("jewelry_heist")) == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("jewelry_setup1")) == 0) && !Global_97173.f_7311.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_97173.f_5518[iParam0] = 0;
							unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_97173.f_7311.f_99.f_58[4])
				{
					Global_97173.f_5518[iParam0] = 0;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else if (Global_97173.f_7311.f_99.f_58[4])
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			else if (unk_0x2C83A9DA6BFFC4F9(joaat("jewelry_heist")) == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 18f)
					{
						Global_97173.f_5518[iParam0] = 1;
						unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 18f)
					{
						Global_97173.f_5518[iParam0] = 1;
						unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_199(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_97173.f_5518[iParam0] = 0;
						unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 40f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), *uParam1) >= 40f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_199(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_199(iParam0))
			{
				if (unk_0x2C83A9DA6BFFC4F9(joaat("assassin_valet")) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else if (unk_0x2C83A9DA6BFFC4F9(joaat("assassin_valet")) > 0)
			{
				Global_97173.f_5518[iParam0] = 0;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x2C83A9DA6BFFC4F9(Global_80977[70 /*34*/].f_6) == 0)
			{
				if (!func_199(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("omega2")) == 0)
			{
				if (!func_199(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_199(iParam0) && unk_0x2C83A9DA6BFFC4F9(Global_80977[26 /*34*/].f_6) == 0)
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
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
			if (!func_199(iParam0))
			{
				if (unk_0x2C83A9DA6BFFC4F9(Global_80977[43 /*34*/].f_6) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_199(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			break;
		
		case 193:
			if (!func_199(iParam0))
			{
				if (unk_0x2C83A9DA6BFFC4F9(Global_80977[93 /*34*/].f_6) > 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_199(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			break;
		
		case 80:
			if (!func_199(iParam0))
			{
				if (unk_0x2C83A9DA6BFFC4F9(Global_80977[8 /*34*/].f_6) == 0 && unk_0x2C83A9DA6BFFC4F9(Global_80977[10 /*34*/].f_6) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_199(iParam0))
			{
				if (unk_0x2C83A9DA6BFFC4F9(Global_80977[47 /*34*/].f_6) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x2C83A9DA6BFFC4F9(Global_80977[70 /*34*/].f_6) == 0)
			{
				if (!func_199(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
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
			if (unk_0x2C83A9DA6BFFC4F9(Global_80977[48 /*34*/].f_6) == 0)
			{
				if (!func_199(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x2C83A9DA6BFFC4F9(Global_80977[39 /*34*/].f_6) == 0)
			{
				if (!func_199(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
				}
			}
			break;
		
		case 216:
			if (!func_199(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			break;
		
		case 217:
		case 218:
			if (!func_199(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_199(iParam0))
			{
				Global_97173.f_5518[iParam0] = 0;
				unk_0x6BAB9442830C7F53(uParam1->f_5, Global_97173.f_5518[iParam0], true, true);
			}
			break;
	}
}

bool func_199(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_201(iParam0) };
	iVar7 = unk_0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_200(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

struct<7> func_201(int iParam0)
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 0);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 3);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 1);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 3);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
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
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0x933D6A9EEC1BACD0(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_202()
{
	if (func_203() == -1 || func_203() == 999)
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	return Global_24444;
}

int func_204(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_85227[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85227[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_205(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF1B760881820C952(Param0, Global_85227[iVar0 /*10*/].f_3, true);
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

bool func_205(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_97173.f_5486[iParam0], 0);
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_207(iParam0, iVar0);
		iVar0++;
	}
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_211(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = func_208(iVar3, -1, 0);
	}
	else
	{
		unk_0x767FBC2AC802EF3D(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x4A3DC7ECCC321032(unk_0x4F8644AF03D0E0D6(), fVar1);
			break;
		
		case 7:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("armenian3")) != 0 || unk_0x2C83A9DA6BFFC4F9(joaat("trevor3")) != 0)
			{
				Global_87472 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0xDB89EF50FF25FCE9(unk_0x4F8644AF03D0E0D6(), fVar1);
				unk_0xB2C1A29588A9F47C(unk_0x4F8644AF03D0E0D6(), fVar1);
				unk_0x4E9021C1FCDD507A(unk_0x4F8644AF03D0E0D6(), fVar1);
			}
			break;
	}
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_209(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_209(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_210();
		if (iVar1 > -1)
		{
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
		}
	}
	return iVar0;
}

int func_210()
{
	return Global_1312736;
}

void func_211(int iParam0, int iParam1, var uParam2, var uParam3)
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
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_212()
{
	struct<50> Var0;
	
	if ((unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) || !func_94(func_92())) || !func_218())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_214(unk_0xD80958FC74E988A6(), &Var0, 1);
	func_213(1306, Var0[0], -1, 1);
	func_213(1307, Var0[1], -1, 1);
	func_213(1308, Var0[2], -1, 1);
	func_213(1309, Var0[3], -1, 1);
	func_213(1310, Var0[4], -1, 1);
	func_213(1311, Var0[5], -1, 1);
	func_213(1312, Var0[6], -1, 1);
	func_213(1313, Var0[7], -1, 1);
	func_213(1314, Var0[8], -1, 1);
	func_213(1315, Var0[9], -1, 1);
	func_213(1316, Var0[10], -1, 1);
	func_213(1317, Var0[11], -1, 1);
	func_213(1318, Var0.f_13[0], -1, 1);
	func_213(1319, Var0.f_13[1], -1, 1);
	func_213(1320, Var0.f_13[2], -1, 1);
	func_213(1321, Var0.f_13[3], -1, 1);
	func_213(1322, Var0.f_13[4], -1, 1);
	func_213(1323, Var0.f_13[5], -1, 1);
	func_213(1324, Var0.f_13[6], -1, 1);
	func_213(1325, Var0.f_13[7], -1, 1);
	func_213(1326, Var0.f_13[8], -1, 1);
	func_213(1327, Var0.f_13[9], -1, 1);
	func_213(1328, Var0.f_13[10], -1, 1);
	func_213(1329, Var0.f_13[11], -1, 1);
	func_213(1330, Var0.f_26[0], -1, 1);
	func_213(1331, Var0.f_26[1], -1, 1);
	func_213(1332, Var0.f_26[2], -1, 1);
	func_213(1333, Var0.f_26[3], -1, 1);
	func_213(1334, Var0.f_26[4], -1, 1);
	func_213(1335, Var0.f_26[5], -1, 1);
	func_213(1336, Var0.f_26[6], -1, 1);
	func_213(1337, Var0.f_26[7], -1, 1);
	func_213(1338, Var0.f_26[8], -1, 1);
	func_213(1339, Var0.f_26[9], -1, 1);
	func_213(1340, Var0.f_26[10], -1, 1);
	func_213(1341, Var0.f_26[11], -1, 1);
	func_213(1342, Var0.f_39[0], -1, 1);
	func_213(1343, Var0.f_39[1], -1, 1);
	func_213(1344, Var0.f_39[2], -1, 1);
	func_213(1345, Var0.f_39[3], -1, 1);
	func_213(1346, Var0.f_39[4], -1, 1);
	func_213(1347, Var0.f_39[5], -1, 1);
	func_213(1348, Var0.f_39[6], -1, 1);
	func_213(1349, Var0.f_39[7], -1, 1);
	func_213(1350, Var0.f_39[8], -1, 1);
	func_213(1351, Var0.f_49[0], -1, 1);
	func_213(1352, Var0.f_49[1], -1, 1);
	func_213(1353, Var0.f_49[2], -1, 1);
	func_213(1354, Var0.f_49[3], -1, 1);
	func_213(1355, Var0.f_49[4], -1, 1);
	func_213(1356, Var0.f_49[5], -1, 1);
	func_213(1357, Var0.f_49[6], -1, 1);
	func_213(1358, Var0.f_49[7], -1, 1);
	func_213(1359, Var0.f_49[8], -1, 1);
	func_213(1360, func_92(), -1, 1);
	unk_0x4B33C4243DE0C432(joaat("clo_stored_initial"), true, true);
	Global_97173.f_1729.f_539.f_3207 = 1;
}

bool func_213(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_210();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x61E111E323419E07((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x61E111E323419E07((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x61E111E323419E07((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x61E111E323419E07((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xD16C2AD6B8E32854((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xD16C2AD6B8E32854((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2B4CDCA6F07FF3DA((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2B4CDCA6F07FF3DA((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	bVar2 = unk_0x7BBB1B54583ED410(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

void func_214(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		iVar0 = func_95(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_217(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_216(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_94(iVar0))
		{
			uParam1->f_59 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x10FAB35428CCC9D7() && unk_0x9F47B058362C84B5(iParam0) == unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			if (func_215(161, -1))
			{
				uParam1->f_59 = func_208(2033, Global_67926, 0);
			}
			else
			{
				uParam1->f_59 = func_208(738, Global_67926, 0);
			}
			uParam1->f_60 = func_208(739, Global_67926, 0);
			uParam1->f_61 = func_208(740, Global_67926, 0);
		}
		if (unk_0x10FAB35428CCC9D7() && iParam0 == unk_0xD80958FC74E988A6())
		{
			if (func_215(161, -1))
			{
				uParam1->f_59 = func_208(2033, Global_67926, 0);
			}
			else
			{
				uParam1->f_59 = func_208(738, Global_67926, 0);
			}
		}
	}
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2472519[iParam0 /*6*/][func_209(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_216(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x898CC20EA75BACD8(iParam0, iParam1);
		*uParam3 = unk_0xE131A28626F81AB2(iParam0, iParam1);
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
				if (unk_0xF33BDFE19B309B19(iParam0) && unk_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = unk_0x451294E859ECC018(iParam0);
					*uParam3 = unk_0x9D728C1E12BF5518(iParam0);
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

void func_217(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x67F3780DD425D4FC(iParam0, iParam1);
		*uParam3 = unk_0x04A355E041E004E6(iParam0, iParam1);
		*uParam4 = unk_0xE3DD5F2A84B42281(iParam0, iParam1);
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

int func_218()
{
	if (func_220() && func_219(0))
	{
		return 1;
	}
	return 0;
}

var func_219(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_220()
{
	return func_219(func_210() + 1);
}

void func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0xBF25EB89375A37AD(255, 1166638144, joaat("player"));
			unk_0xBF25EB89375A37AD(2, joaat("player"), -1865950624);
			unk_0xBF25EB89375A37AD(255, -1865950624, joaat("player"));
			unk_0xBF25EB89375A37AD(1, Global_85192, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85192);
			unk_0xBF25EB89375A37AD(1, Global_85193, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85193);
			unk_0xBF25EB89375A37AD(1, Global_85194, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85194);
			break;
		
		case 1:
			unk_0xBF25EB89375A37AD(1, 1166638144, joaat("player"));
			unk_0xBF25EB89375A37AD(2, joaat("player"), -1865950624);
			unk_0xBF25EB89375A37AD(255, -1865950624, joaat("player"));
			unk_0xBF25EB89375A37AD(1, Global_85192, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85192);
			unk_0xBF25EB89375A37AD(1, Global_85193, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85193);
			unk_0xBF25EB89375A37AD(1, Global_85194, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85194);
			break;
		
		case 2:
			unk_0xBF25EB89375A37AD(255, 1166638144, joaat("player"));
			unk_0xBF25EB89375A37AD(5, joaat("player"), -1865950624);
			unk_0xBF25EB89375A37AD(5, -1865950624, joaat("player"));
			unk_0xBF25EB89375A37AD(1, Global_85192, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85192);
			unk_0xBF25EB89375A37AD(1, Global_85193, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85193);
			unk_0xBF25EB89375A37AD(1, Global_85194, joaat("player"));
			unk_0xBF25EB89375A37AD(1, joaat("player"), Global_85194);
			break;
		
		default:
			break;
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	
	func_93();
	iVar0 = unk_0xDCD4EC3F419D02FA();
	if (unk_0xA6DB27D19ECBB7DA(iVar0))
	{
		iVar1 = Global_97173.f_1729.f_539.f_3213;
		if (func_280(14))
		{
			iVar1 = func_95(unk_0xD80958FC74E988A6());
		}
		if (iVar1 == 0)
		{
			unk_0xEAA0FFE120D92784(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			unk_0xEAA0FFE120D92784(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			unk_0xEAA0FFE120D92784(iVar0, "BLIP_TREV");
		}
		else
		{
			unk_0xEAA0FFE120D92784(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_223(int iParam0)
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
		iVar2 = func_224(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = unk_0xEFFED78E9011134D(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (unk_0x015A522136D7F951(iParam0, iVar3) == -1)
				{
					if (unk_0xDC16122C7A20C933(iParam0, iVar3, &uVar1))
					{
						unk_0x3EDCB0505123623B(iParam0, false, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0xEE47635F352DA367();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0x79923CD21BECE14E(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0x015A522136D7F951(iParam0, iVar3) == -1)
			{
				if (unk_0xDC16122C7A20C933(iParam0, iVar3, &uVar1))
				{
					unk_0x3EDCB0505123623B(iParam0, false, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_224(int iParam0)
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

void func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (iParam0 == unk_0xD80958FC74E988A6() && unk_0x4700A416E8324EF3(iParam0) == 200)
		{
			unk_0xF5F6378C4F3419D3(iParam0, unk_0xF2DB717A73826179((IntToFloat(unk_0x4700A416E8324EF3(iParam0)) * Global_262145.f_86)));
		}
		if (Global_97173.f_1729.f_539.f_290[iVar0] <= 0f)
		{
			Global_97173.f_1729.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_97173.f_1729.f_539.f_290[iVar0] <= 10f)
		{
			Global_97173.f_1729.f_539.f_290[iVar0] = 10f;
		}
		unk_0x6B76DC1F3AE6E6A3(iParam0, unk_0xF2DB717A73826179((((Global_97173.f_1729.f_539.f_290[iVar0] / 100f) * (unk_0xBBDA792448DB5A89(unk_0x4700A416E8324EF3(iParam0)) - 100f)) + 100f)));
	}
}

int func_226(int iParam0)
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

int func_227(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_143(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0)
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

void func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_230(4, *iParam1);
			func_230(7, *iParam1);
			func_230(8, *iParam1);
			func_230(11, *iParam1);
			break;
		
		case 1:
			func_230(4, *iParam1);
			func_230(7, *iParam1);
			func_230(8, *iParam1);
			func_230(11, *iParam1);
			if (Global_97173.f_7311.f_99.f_58[126])
			{
				func_230(12, *iParam1);
			}
			break;
		
		case 2:
			func_230(4, *iParam1);
			func_230(7, *iParam1);
			func_230(8, *iParam1);
			func_230(11, *iParam1);
			break;
	}
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (!unk_0x7239B21A38F536BA(iParam1))
	{
		return;
	}
	if (Global_34032[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_34032[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_34032[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_34032[iParam0 /*31*/].f_25[iVar0];
			Global_34032[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_34032[iParam0 /*31*/].f_25[iVar0])
		{
			Global_34032[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_34032[iParam0 /*31*/].f_24 = (Global_34032[iParam0 /*31*/].f_24 - 1);
	}
}

void func_231(int iParam0, bool bParam1)
{
	func_242(iParam0);
	func_237(iParam0, bParam1);
	func_236(iParam0);
	func_235(iParam0);
	func_234(iParam0);
	func_233(iParam0);
	func_232(iParam0);
}

void func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (iParam0 == unk_0xD80958FC74E988A6())
		{
			Global_97173.f_1729.f_539.f_1556[iVar0] = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
		}
	}
}

void func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		Global_97173.f_1729.f_539.f_1546[iVar0 /*3*/] = { unk_0x4805D2B1D8CF94A9(iParam0) };
	}
}

void func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3)
		{
			if (unk_0x470555300D10B2A5() == 8)
			{
				return;
			}
		}
		Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/] = { unk_0x3FEF770D40960D5A(iParam0, true) };
		Global_97173.f_1729.f_539.f_1538[iVar0] = unk_0xE83D4F9BA2A38914(iParam0);
		Global_97173.f_1729.f_539.f_1542[iVar0] = unk_0x47C2A06D4F5F424B(iParam0);
		if (Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/] >= 8000f)
		{
			Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/] = 7500f;
		}
		else if (Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/] <= -8000f)
		{
			Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/] = -7500f;
		}
		if (Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_97173.f_1729.f_539.f_1528[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		Global_97173.f_1729.f_539.f_294[iVar0] = unk_0x9483AF821605B1D8(iParam0);
	}
}

void func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		Global_97173.f_1729.f_539.f_290[iVar0] = (((unk_0xBBDA792448DB5A89(unk_0xEEF059FAD016D209(iParam0)) - 100f) / (unk_0xBBDA792448DB5A89(unk_0x4700A416E8324EF3(iParam0)) - 100f)) * 100f);
	}
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (iParam0 == unk_0xD80958FC74E988A6())
		{
			func_238(iParam0, &(Global_97173.f_1729.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_97173.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0xA13E93403F26C812(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xA48931185F0536FE();
					if (Global_97173.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_97173.f_1729.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x6E9C742F340CE5A2(unk_0x4F8644AF03D0E0D6(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xB3271D7AB655B441(joaat("sp0_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				unk_0xB3271D7AB655B441(joaat("sp1_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				unk_0xB3271D7AB655B441(joaat("sp2_parachute_current_tint"), iVar3, true);
			}
		}
	}
}

void func_238(int iParam0, var uParam1)
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
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
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
			iVar3 = func_224(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xEFFED78E9011134D(iParam0, func_224(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x015A522136D7F951(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x933D6A9EEC1BACD0(&(Var4.f_2), (20 + unk_0x2B9EEDC07BD06B9F(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_240(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC593212475FAE340(iParam0, Var4.f_0, iVar2))
						{
							unk_0x933D6A9EEC1BACD0(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_240(Var4.f_0, iVar1);
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
		iVar8 = unk_0xEE47635F352DA367();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x79923CD21BECE14E(iVar7, &Var9) && !func_239(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xD4D7B033C3AA243C(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x015A522136D7F951(iParam0, Var4.f_0);
					if (unk_0x8DECB02F88F428BC(iParam0, Var4.f_0, false))
					{
						unk_0x933D6A9EEC1BACD0(&(Var4.f_2), (20 + unk_0x2B9EEDC07BD06B9F(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x933D6A9EEC1BACD0(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x405425358A7D61FE(iVar7))
					{
						if (unk_0x6CF598A2957C2BF8(iVar7, iVar1, &Var48))
						{
							if (unk_0xC593212475FAE340(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x933D6A9EEC1BACD0(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x8DECB02F88F428BC(iParam0, Var4.f_0, false))
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

int func_239(int iParam0)
{
	if (unk_0x10FAB35428CCC9D7())
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

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var* uVar2;
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
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_241(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x405425358A7D61FE(iVar1))
					{
						if (unk_0x6CF598A2957C2BF8(iVar1, iParam1, &Var41))
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

int func_241(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xEE47635F352DA367();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x79923CD21BECE14E(iVar0, uParam1))
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

void func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = func_95(iParam0);
	if (func_94(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		Global_97173.f_1729.f_539.f_1524[iVar0] = func_167();
	}
}

int func_243(int iParam0, int iParam1)
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
		if (func_226(func_92()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[iParam1] != 0) || ((func_247(iParam1) && func_244(iParam1)) && !iParam0->f_18[iParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!unk_0x84A2DD9AC37C35C1((*iParam0)[iParam1]) || bVar0)
					{
						if (iParam0->f_34[iParam1] != 1 && iParam0->f_34[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && (unk_0x10FAB35428CCC9D7() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)) && !unk_0xA921AA820C25702F(Global_87667.f_47, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((unk_0xA921AA820C25702F(Global_97173.f_7311.f_2[27 /*3*/], 1) && !Global_3) && !func_110(0)))
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

int func_244(int iParam0)
{
	if (Global_97173.f_7311 || Global_3)
	{
		if (!Global_68067 || (Global_68067 && iParam0 != func_226(func_246())))
		{
			if (!func_245(func_228(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_245(int iParam0)
{
	if (func_94(iParam0))
	{
		if ((Global_97173.f_7311 || Global_3) || func_110(0))
		{
			return Global_97173.f_1729.f_539.f_1576[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_246()
{
	return Global_97173.f_1729.f_539.f_3215;
}

int func_247(int iParam0)
{
	if ((Global_97173.f_7311 || Global_3) || func_110(0))
	{
		if (!Global_68067 || (Global_68067 && iParam0 != func_226(func_246())))
		{
			if (((iParam0 == 0 && !func_281(115)) || (iParam0 == 1 && !func_281(116))) || (iParam0 == 2 && !func_281(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_248(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_254(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_74())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_253(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_254(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_253(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_249(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_249(int iParam0)
{
	if (func_251(iParam0, 0))
	{
		return 1;
	}
	if (func_250())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_250()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_251(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_252(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_252(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_210();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_253(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_254(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

void func_255(var uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (unk_0xA921AA820C25702F(uParam0->f_449, 1))
		{
			if (unk_0xA921AA820C25702F(uParam0->f_449, 2))
			{
				func_69(uParam0, func_256(*uParam0));
				func_83(2, *uParam0, 0);
			}
			else
			{
				func_115(uParam0);
				func_83(2, *uParam0, 0);
			}
		}
	}
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_281(18);
			break;
		
		case 1:
			return func_281(22);
			break;
		
		case 2:
			return func_281(40);
			break;
		
		case 3:
			return func_281(8);
			break;
		
		case 4:
			return func_281(26);
			break;
		
		default:
			break;
	}
	return 0;
}

void func_257(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		fVar0 = unk_0xB7A628320EFF8E47(uParam0->f_401, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
		if (unk_0xA921AA820C25702F(uParam0->f_449, 1))
		{
			func_268(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xA921AA820C25702F(Global_86198, *uParam0))
		{
			if (unk_0xA921AA820C25702F(uParam0->f_449, 0))
			{
				if (func_267(uParam0))
				{
					if (unk_0xA921AA820C25702F(Global_86198, *uParam0))
					{
						if (unk_0xA921AA820C25702F(Global_86200, *uParam0))
						{
							func_262(uParam0);
						}
					}
					else
					{
						func_262(uParam0);
					}
				}
			}
			else
			{
				func_261(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xA921AA820C25702F(Global_86198, *uParam0))
		{
			if (unk_0xA921AA820C25702F(uParam0->f_449, 0))
			{
				if (unk_0xA921AA820C25702F(uParam0->f_449, 1))
				{
					func_259(uParam0);
				}
				func_258(uParam0);
			}
		}
	}
}

void func_258(var uParam0)
{
	unk_0x77ED170667F50170("HEIST_BULLETIN_BOARD");
	unk_0xE532F5D78798DAAB(joaat("prop_ld_planning_pin_01"));
	unk_0xE532F5D78798DAAB(joaat("prop_ld_planning_pin_02"));
	unk_0xE532F5D78798DAAB(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		unk_0x1D132D614DD86811(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		unk_0x1D132D614DD86811(&(uParam0->f_414));
	}
	unk_0x2A179DF17CCF04CD(5, false);
	unk_0xE80492A9AC099A93(&Global_86199, *uParam0);
	unk_0xE80492A9AC099A93(&(uParam0->f_449), 0);
}

void func_259(var uParam0)
{
	if (unk_0xA921AA820C25702F(uParam0->f_449, 1))
	{
		if (!unk_0xD3C2E180A40F031E())
		{
			if (unk_0xA921AA820C25702F(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_260(uParam0);
		unk_0xE80492A9AC099A93(&(uParam0->f_449), 1);
		unk_0xE80492A9AC099A93(&Global_86198, *uParam0);
	}
}

void func_260(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_428[iVar0]))
		{
			unk_0x539E0AE3E6634B9F(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_261(var uParam0)
{
	if (!unk_0x5B50ABB1FE3746F4())
	{
		return;
	}
	unk_0x71A78003C8E71424(&(uParam0->f_1.f_272), 5);
	unk_0x2F844A8B08D76685("HEIST_BULLETIN_BOARD", 0);
	if (*uParam0 != 1)
	{
		unk_0x963D27A58DF860AC(joaat("prop_ld_planning_pin_01"));
		unk_0x963D27A58DF860AC(joaat("prop_ld_planning_pin_02"));
		unk_0x963D27A58DF860AC(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = unk_0xC514489CFB8AF806(&(uParam0->f_1.f_268));
	uParam0->f_414 = unk_0xC514489CFB8AF806("INSTRUCTIONAL_BUTTONS");
	unk_0x933D6A9EEC1BACD0(&Global_86197, *uParam0);
	unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 0);
}

void func_262(var uParam0)
{
	int iVar0;
	
	if (!unk_0xA921AA820C25702F(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_266(uParam0);
		func_265(uParam0);
		func_263(uParam0);
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 1);
	}
}

void func_263(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
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
			fVar2 = (unk_0xBBDA792448DB5A89((unk_0xD53343AA4FB7DD28(0, 65535) - 32767)) / 4000f);
			fVar3 = (unk_0xBBDA792448DB5A89((unk_0xD53343AA4FB7DD28(0, 65535) - 32767)) / 4000f);
			Var4 = { func_264(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = unk_0x509D5878EB39E842(iVar1, Var4, true, true, false);
			unk_0x8524A8B0171D5E07(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, true);
			unk_0xAD738C3085FE7E11(uParam0->f_428[iVar0], true, false);
			unk_0x3882114BDE571AD4(uParam0->f_428[iVar0], true);
			unk_0x1A9205C1B9EE827F(uParam0->f_428[iVar0], false, false);
			unk_0x4A4722448F18EEF5(uParam0->f_428[iVar0], false);
			unk_0x428CA6DBD1094446(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	unk_0xE80492A9AC099A93(&Global_86200, *uParam0);
}

Vector3 func_264(var uParam0, var uParam1)
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
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * unk_0xD0FFB162F40A139C((90f - fVar6))), (fVar4 * unk_0x0BADBFA3B172435F((90f - fVar6)))) };
	return Var7;
}

void func_265(var uParam0)
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
		bVar3 = unk_0xA921AA820C25702F(Global_97173.f_1.f_120[iVar1], iVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0xC3D0841A0CC546A6(uParam0->f_1.f_118[iVar0]);
			unk_0xC58424BA936EB458(bVar3);
			unk_0xC6796A8FFA375E53();
		}
		else
		{
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0xC3D0841A0CC546A6(uParam0->f_1.f_118[iVar0]);
			unk_0xC58424BA936EB458(bVar3);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_141[iVar0 /*2*/]));
			unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			unk_0xC6796A8FFA375E53();
		}
		iVar0++;
	}
}

void func_266(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF6E48914C7A8694E(uParam0->f_413, "CREATE_VIEW");
	unk_0xC3D0841A0CC546A6(uParam0->f_415 + 1);
	unk_0xC3D0841A0CC546A6(2);
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_14));
	unk_0xD69736AAE04DB51A(unk_0xBBDA792448DB5A89(uParam0->f_1.f_14.f_1));
	unk_0xC6796A8FFA375E53();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xC3D0841A0CC546A6(uParam0->f_415 + 1);
			unk_0xC3D0841A0CC546A6(iVar1);
			unk_0xC3D0841A0CC546A6(iVar3);
			func_8(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			unk_0xC6796A8FFA375E53();
			iVar1++;
		}
		iVar2++;
	}
	unk_0xF6E48914C7A8694E(uParam0->f_413, "DISPLAY_VIEW");
	unk_0xC3D0841A0CC546A6(uParam0->f_415 + 1);
	unk_0xC6796A8FFA375E53();
	if (func_32(*uParam0, uParam0->f_1.f_210))
	{
		unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
		unk_0xC3D0841A0CC546A6(uParam0->f_415 + 1);
		unk_0xC58424BA936EB458(true);
		unk_0xC6796A8FFA375E53();
	}
	else
	{
		unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_VIEW");
		unk_0xC3D0841A0CC546A6(uParam0->f_415 + 1);
		unk_0xC58424BA936EB458(false);
		unk_0xC6796A8FFA375E53();
	}
}

int func_267(var uParam0)
{
	if (!unk_0x85F01B8D5B90570E(uParam0->f_413))
	{
		return 0;
	}
	if (!unk_0x85F01B8D5B90570E(uParam0->f_414))
	{
		return 0;
	}
	if (!unk_0x02245FE4BED318B8(5))
	{
		return 0;
	}
	if (unk_0x5B50ABB1FE3746F4())
	{
		if (!unk_0x2F844A8B08D76685("HEIST_BULLETIN_BOARD", 0))
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
		if ((!unk_0x98A4EB5D89A0C952(joaat("prop_ld_planning_pin_01")) || !unk_0x98A4EB5D89A0C952(joaat("prop_ld_planning_pin_02"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0x933D6A9EEC1BACD0(&Global_86199, *uParam0);
	return 1;
}

void func_268(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_269(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0x87D51D72255D4E78(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * unk_0xD0FFB162F40A139C((90f - uParam0->f_404))), (fVar0 * unk_0x0BADBFA3B172435F((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_269(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (unk_0xA921AA820C25702F(Global_86197, *uParam0))
	{
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 16);
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 15);
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 14);
		unk_0xE80492A9AC099A93(&Global_86197, *uParam0);
	}
	if (unk_0xA921AA820C25702F(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			unk_0xF6E48914C7A8694E(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0xC3D0841A0CC546A6(uParam0->f_1.f_118[iVar0]);
			unk_0xC58424BA936EB458(bVar2);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC6796A8FFA375E53();
			iVar0++;
		}
		unk_0xE80492A9AC099A93(&(uParam0->f_449), 16);
	}
	if (unk_0xA921AA820C25702F(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!unk_0x7239B21A38F536BA(uParam0->f_428[iVar0]))
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
					fVar4 = (unk_0xBBDA792448DB5A89((unk_0xD53343AA4FB7DD28(0, 65535) - 32767)) / 4000f);
					fVar5 = (unk_0xBBDA792448DB5A89((unk_0xD53343AA4FB7DD28(0, 65535) - 32767)) / 4000f);
					Var6 = { func_264(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = unk_0x509D5878EB39E842(iVar3, Var6, true, true, false);
					unk_0x8524A8B0171D5E07(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, true);
					unk_0xAD738C3085FE7E11(uParam0->f_428[iVar0], true, false);
					unk_0x3882114BDE571AD4(uParam0->f_428[iVar0], true);
					unk_0x1A9205C1B9EE827F(uParam0->f_428[iVar0], false, false);
					unk_0x4A4722448F18EEF5(uParam0->f_428[iVar0], false);
					unk_0x428CA6DBD1094446(uParam0->f_428[iVar0], true);
				}
			}
			else if (!unk_0x7239B21A38F536BA(uParam0->f_428[iVar0]))
			{
				unk_0x539E0AE3E6634B9F(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		unk_0xE80492A9AC099A93(&(uParam0->f_449), 15);
	}
	if (unk_0xA921AA820C25702F(uParam0->f_449, 14))
	{
		func_270(uParam0);
		func_33(uParam0);
		func_266(uParam0);
		unk_0xE80492A9AC099A93(&(uParam0->f_449), 14);
	}
}

void func_270(var uParam0)
{
	unk_0xF6E48914C7A8694E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0xC3D0841A0CC546A6(uParam0->f_415 + 1);
	unk_0xC6796A8FFA375E53();
}

void func_271()
{
	if (func_281(37) || func_281(38))
	{
		if (!func_110(0))
		{
			if (func_281(37))
			{
				if (!unk_0xA921AA820C25702F(iLocal_39, 8))
				{
					if (unk_0xA921AA820C25702F(iLocal_39, 9))
					{
						unk_0x440AF51A3462B86F();
						unk_0xE80492A9AC099A93(&iLocal_39, 9);
					}
					unk_0xC23DE0E91C30B58C("RBHS_MCS_3", 5, 8);
					unk_0x933D6A9EEC1BACD0(&iLocal_39, 8);
				}
				if (unk_0xB56BBBCC2955D9CB())
				{
					unk_0xBA01E7B6DEEFBBC9("LESTER", 0, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 2, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 3, 0, 1, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 4, 1, 1, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 5, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 7, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 8, 1, 0, 0);
					unk_0x0546524ADE2E9723("LESTER", 1, 0, 0, 0);
				}
			}
			else
			{
				if (!unk_0xA921AA820C25702F(iLocal_39, 9))
				{
					if (unk_0xA921AA820C25702F(iLocal_39, 8))
					{
						unk_0x440AF51A3462B86F();
						unk_0xE80492A9AC099A93(&iLocal_39, 8);
					}
					unk_0xC23DE0E91C30B58C("RBHS_MCS_3", 6, 8);
					unk_0x933D6A9EEC1BACD0(&iLocal_39, 9);
				}
				if (unk_0xB56BBBCC2955D9CB())
				{
					unk_0xBA01E7B6DEEFBBC9("LESTER", 0, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 2, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 3, 0, 1, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 4, 1, 1, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 5, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 7, 0, 0, 0);
					unk_0xBA01E7B6DEEFBBC9("LESTER", 8, 1, 0, 0);
					unk_0x0546524ADE2E9723("LESTER", 1, 0, 0, 0);
				}
			}
			if (func_279(91))
			{
				if (func_143(0))
				{
					if (func_277(&iLocal_42, 0, 0, 0, 0) == 1)
					{
						func_276();
						iLocal_99 = unk_0x1B5C85C612E5256E(Local_150.f_1.f_394 - Local_150.f_1.f_397, Local_150.f_1.f_394 + Local_150.f_1.f_397, false, true, true, true);
						iLocal_100 = unk_0xFCD5C8E06E502F5A(Local_150.f_1.f_394, Local_150.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, false, 7);
						unk_0xEE01041D559983EA(Local_150.f_1.f_394 - Local_150.f_1.f_397, Local_150.f_1.f_394 + Local_150.f_1.f_397);
						unk_0x34F060F4BF92E018(Local_150.f_1.f_394 - Local_150.f_1.f_397, Local_150.f_1.f_394 + Local_150.f_1.f_397, false, 0);
						if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
						{
							unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
							unk_0xAA5F02DB48D704B9(0);
						}
						unk_0x933D6A9EEC1BACD0(&iLocal_39, 1);
					}
				}
			}
			if (unk_0xA921AA820C25702F(iLocal_39, 1))
			{
				if (func_275("RBHS_MCS_3"))
				{
					if (!unk_0xD3C2E180A40F031E())
					{
						func_72(1);
						func_248(1, 1, 1, 0);
						if (unk_0x7239B21A38F536BA(iLocal_44))
						{
							if (unk_0x4C241E39B23DF959(iLocal_44, false))
							{
								unk_0x2FA133A4A9D37ED8(iLocal_44, 0, false);
							}
						}
						if (unk_0x7239B21A38F536BA(Global_86686.f_9[0]))
						{
							unk_0xAD738C3085FE7E11(Global_86686.f_9[0], true, true);
							iLocal_102 = Global_86686.f_9[0];
							Global_86686.f_9[0] = 0;
						}
						if (func_92() == 0)
						{
							if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
							{
								unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "MICHAEL", 0, joaat("player_zero"), 0);
							}
							if (unk_0x7239B21A38F536BA(iLocal_106[2]) && !unk_0x5F9532F3B5CC2551(iLocal_106[2]))
							{
								unk_0xE40C1C56DF95C2E8(iLocal_106[2], "TREVOR", 0, joaat("player_two"), 0);
							}
							else
							{
								unk_0xE40C1C56DF95C2E8(iLocal_106[2], "TREVOR", 2, joaat("player_two"), 0);
								unk_0x933D6A9EEC1BACD0(&iLocal_39, 2);
							}
						}
						else if (func_92() == 2)
						{
							if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
							{
								unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "TREVOR", 0, joaat("player_two"), 0);
							}
							if (unk_0x7239B21A38F536BA(iLocal_103) && !unk_0x5F9532F3B5CC2551(iLocal_103))
							{
								unk_0xE40C1C56DF95C2E8(iLocal_103, "MICHAEL", 0, joaat("player_zero"), 0);
							}
							else
							{
								unk_0xE40C1C56DF95C2E8(iLocal_103, "MICHAEL", 2, joaat("player_zero"), 0);
								unk_0x933D6A9EEC1BACD0(&iLocal_39, 3);
							}
						}
						func_181(&(Local_150.f_484), 0, 0, "MICHAEL", 1, 1);
						func_181(&(Local_150.f_484), 2, unk_0xD80958FC74E988A6(), "TREVOR", 1, 1);
						func_181(&(Local_150.f_484), 3, 0, "LESTER", 1, 1);
						iLocal_40 = unk_0x9CD27B0045628463();
						unk_0x186D5CB5E7B0FF7B(2048);
					}
					else
					{
						func_113();
						if (!unk_0xA921AA820C25702F(iLocal_39, 19))
						{
							if (!unk_0x5A859503B0C08678() && !unk_0x5C544BC6C57AC575())
							{
								unk_0xD4E8E24955024033(500);
							}
							unk_0x933D6A9EEC1BACD0(&iLocal_39, 19);
						}
						if (unk_0x7239B21A38F536BA(Global_86686[0]))
						{
							unk_0xAD738C3085FE7E11(Global_86686[0], true, true);
							unk_0xEA386986E786A54F(&(Global_86686[0]));
						}
						if (unk_0x7239B21A38F536BA(Global_86686[1]))
						{
							unk_0xAD738C3085FE7E11(Global_86686[1], true, true);
							unk_0xEA386986E786A54F(&(Global_86686[1]));
						}
						if (unk_0x7239B21A38F536BA(iLocal_102))
						{
							unk_0x9614299DCB53E54B(&iLocal_102);
						}
						if (unk_0xA921AA820C25702F(iLocal_39, 2))
						{
							if (unk_0x7239B21A38F536BA(unk_0xC0741A26499654CD("Trevor", joaat("player_two"))))
							{
								iLocal_106[2] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("Trevor", joaat("player_two")));
								unk_0xE80492A9AC099A93(&iLocal_39, 2);
							}
						}
						if (unk_0xA921AA820C25702F(iLocal_39, 3))
						{
							if (unk_0x7239B21A38F536BA(unk_0xC0741A26499654CD("Michael", joaat("player_zero"))))
							{
								iLocal_103 = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("Michael", joaat("player_zero")));
								unk_0xE80492A9AC099A93(&iLocal_39, 3);
							}
						}
						if (!unk_0xA921AA820C25702F(iLocal_39, 4))
						{
							if ((unk_0xE625BEABBAFFDAB9() > 43160 && func_281(38)) || (unk_0xE625BEABBAFFDAB9() > 42740 && func_281(37)))
							{
								func_107(2, 0, 1);
								func_107(2, 1, 1);
								unk_0x933D6A9EEC1BACD0(&iLocal_39, 4);
							}
						}
						if (func_92() == 0)
						{
							if (unk_0x4C6A6451C79E4662("TREVOR", joaat("player_two")))
							{
								if (!unk_0x7239B21A38F536BA(iLocal_106[2]))
								{
									iLocal_106[2] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("Trevor", joaat("player_two")));
									unk_0xE80492A9AC099A93(&iLocal_39, 2);
								}
								if (!unk_0x5F9532F3B5CC2551(iLocal_106[2]))
								{
									unk_0x9F8AA94D6D97DBF4(iLocal_106[2], true);
									unk_0x1913FE4CBF41C463(iLocal_106[2], 208, true);
									unk_0x1913FE4CBF41C463(iLocal_106[2], 118, false);
									unk_0x1913FE4CBF41C463(iLocal_106[2], 213, false);
								}
							}
						}
						else if (func_92() == 2)
						{
							if (unk_0x4C6A6451C79E4662("MICHAEL", joaat("player_zero")))
							{
								if (!unk_0x7239B21A38F536BA(iLocal_103))
								{
									iLocal_103 = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("Michael", joaat("player_zero")));
									unk_0xE80492A9AC099A93(&iLocal_39, 3);
								}
								if (!unk_0x5F9532F3B5CC2551(iLocal_103))
								{
									unk_0x9F8AA94D6D97DBF4(iLocal_103, true);
									unk_0x1913FE4CBF41C463(iLocal_103, 208, true);
									unk_0x1913FE4CBF41C463(iLocal_103, 118, false);
									unk_0x1913FE4CBF41C463(iLocal_103, 213, false);
								}
							}
						}
						if (unk_0x4C6A6451C79E4662("LESTER", 0))
						{
							if (unk_0x7239B21A38F536BA(iLocal_102))
							{
								unk_0x06843DA7060A026B(iLocal_102, 1398.198f, 3605.6f, 37.9419f, true, false, false, true);
								unk_0x8E2530AA8ADA980E(iLocal_102, 194.2789f);
								unk_0x9614299DCB53E54B(&iLocal_102);
							}
						}
						if (unk_0xB2CBCD0930DFB420(false))
						{
							if (!unk_0xA921AA820C25702F(iLocal_39, 0))
							{
								func_274();
								unk_0x933D6A9EEC1BACD0(&iLocal_39, 0);
							}
							unk_0xA56F01F3765B93A0(1397.884f, 3594.627f, 33.9271f, 50f, true, false, false, false);
							func_146(24);
							func_106(37, 0);
							func_106(38, 0);
							if (!unk_0xA921AA820C25702F(iLocal_39, 4))
							{
								func_107(2, 0, 1);
								func_107(2, 1, 1);
								func_259(&Local_150);
								unk_0x933D6A9EEC1BACD0(&iLocal_39, 4);
							}
							if (!unk_0xA921AA820C25702F(iLocal_39, 18))
							{
								if (!unk_0x5F9532F3B5CC2551(iLocal_103))
								{
									unk_0xEA1C610A04DB6BBB(iLocal_103, 0);
								}
								if (!unk_0x5F9532F3B5CC2551(iLocal_102))
								{
									unk_0xEA1C610A04DB6BBB(iLocal_102, 0);
								}
								if (unk_0x7239B21A38F536BA(iLocal_106[2]))
								{
									unk_0xEA1C610A04DB6BBB(iLocal_106[2], 0);
								}
								unk_0x933D6A9EEC1BACD0(&iLocal_39, 18);
							}
						}
						if (unk_0x40C8656EDAEDD569())
						{
							unk_0x933D6A9EEC1BACD0(&iLocal_39, 20);
						}
						else if (!unk_0x5A859503B0C08678() && !unk_0x5C544BC6C57AC575())
						{
							unk_0xD4E8E24955024033(800);
						}
						if (unk_0xA921AA820C25702F(iLocal_39, 20))
						{
							if (unk_0xB16FCE9DDC7BA182())
							{
								if (!unk_0xA921AA820C25702F(iLocal_39, 0))
								{
									func_274();
									unk_0x933D6A9EEC1BACD0(&iLocal_39, 0);
								}
								if (unk_0xA921AA820C25702F(iLocal_39, 8))
								{
									unk_0xE80492A9AC099A93(&iLocal_39, 8);
								}
								if (unk_0xA921AA820C25702F(iLocal_39, 9))
								{
									unk_0xE80492A9AC099A93(&iLocal_39, 9);
								}
								func_106(37, 0);
								func_106(38, 0);
								if (!unk_0xA921AA820C25702F(iLocal_39, 4))
								{
									func_107(2, 0, 1);
									func_107(2, 1, 1);
									unk_0x933D6A9EEC1BACD0(&iLocal_39, 4);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (func_143(0))
			{
				if (func_277(&iLocal_42, 0, 0, 0, 0) == 1)
				{
					unk_0x933D6A9EEC1BACD0(&iLocal_39, 1);
				}
			}
			if (unk_0xA921AA820C25702F(iLocal_39, 1))
			{
				func_181(&(Local_150.f_484), 0, 0, "MICHAEL", 1, 1);
				func_181(&(Local_150.f_484), 2, unk_0xD80958FC74E988A6(), "TREVOR", 1, 1);
				func_181(&(Local_150.f_484), 3, 0, "LESTER", 1, 1);
				func_274();
				func_106(37, 0);
				func_106(38, 0);
			}
		}
	}
	else
	{
		if (iLocal_43 != -1)
		{
			func_272(&iLocal_43);
		}
		if (unk_0x228D3D94F8A11C3C("RBHS_MCS_3"))
		{
			unk_0x440AF51A3462B86F();
		}
		if (unk_0xA921AA820C25702F(iLocal_39, 8))
		{
			unk_0xE80492A9AC099A93(&iLocal_39, 8);
		}
		if (unk_0xA921AA820C25702F(iLocal_39, 9))
		{
			unk_0xE80492A9AC099A93(&iLocal_39, 9);
		}
	}
}

void func_272(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_68064 == *iParam0)
	{
		func_273(*iParam0, 0);
	}
	if (Global_68063 == *iParam0)
	{
		Global_68063 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_68060)
	{
		if (Global_68049[iVar1 /*2*/] == *iParam0)
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
	while (iVar2 <= (Global_68060 - 2))
	{
		Global_68049[iVar2 /*2*/] = Global_68049[iVar2 + 1 /*2*/];
		Global_68049[iVar2 /*2*/].f_1 = Global_68049[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_68049[(Global_68060 - 1) /*2*/] = -1;
	Global_68049[(Global_68060 - 1) /*2*/].f_1 = 3;
	Global_68060 = (Global_68060 - 1);
	Global_68061 = 1;
	Global_68062 = unk_0xFC8202EFC642E6F2();
	*iParam0 = -1;
}

void func_273(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_68063 == iParam0)
		{
			Global_68064 = iParam0;
		}
	}
	else if (Global_68064 == iParam0)
	{
		Global_68064 = -1;
	}
}

void func_274()
{
	func_83(1, 2, 1);
	func_83(2, 2, 1);
	func_255(&Local_150);
	func_67(&Local_150);
}

bool func_275(char* sParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x228D3D94F8A11C3C(sParam0);
	if (!Global_68066)
	{
		if (!bVar0)
		{
			Global_68066 = 1;
		}
	}
	return bVar0;
}

void func_276()
{
	Global_89823 = 1;
}

int func_277(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_227(0))
		{
			return 0;
		}
		Global_34873++;
		*iParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *iParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_143(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*iParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_278(iParam0, iParam4);
		}
	}
	return 2;
}

void func_278(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_279(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

bool func_280(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_281(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

void func_282(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	*uParam0 = iParam1;
	Var0 = { Global_86135[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar3 = Global_86135[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { Var0 };
	uParam0->f_404 = fVar3;
	uParam0->f_405 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * unk_0xD0FFB162F40A139C((360f - fVar3))), (-uParam0->f_1.f_8 * unk_0x0BADBFA3B172435F((360f - fVar3)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar3 };
	unk_0x933D6A9EEC1BACD0(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	unk_0xE80492A9AC099A93(&(uParam0->f_449), 0);
	unk_0xE80492A9AC099A93(&(uParam0->f_449), 1);
	unk_0xE80492A9AC099A93(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_283(var uParam0, var uParam1)
{
	func_293(uParam0, 2, "HEIST_PALETO", "BOARD3", "RHFAUD", "CRWAUD", 13, 1, 13, 13, uParam1, 1394.511f, 3607.037f, 36.94191f, 7.5f, 7.75f, 6.75f);
	func_292(uParam0, 750, 540, 2.03f, 1.3f, 3.35f, 1.88f, 1.85f, 375, 252, 150, 400, 0, 0, 0, 0, 0, 0, 0, 0, 620, 370, 0, 85, 695, 215);
	func_291(uParam0, 20f, 22f, 28f);
	func_290(uParam0, "", "", "", "", "", "RHP1", "RHP8", "RHFP11");
	func_289(uParam0, 1, "CRW_GM", "");
	func_289(uParam0, 4, "CRW_NR", "");
	func_289(uParam0, 5, "CRW_DJ", "");
	func_289(uParam0, 10, "CRW_PM", "CRM_PM");
	func_289(uParam0, 11, "", "CRM_CH");
	func_288(uParam0, 18, "RHP10B");
	func_287(uParam0, 0, 1, 0, 0);
	func_287(uParam0, 1, 1, 0, 0);
	func_287(uParam0, 2, 1, 0, 0);
	func_287(uParam0, 3, 1, 0, 0);
	func_287(uParam0, 4, 1, 0, 0);
	func_287(uParam0, 5, 1, 0, 0);
	func_287(uParam0, 6, 1, 0, 0);
	func_287(uParam0, 7, 1, 0, 0);
	func_287(uParam0, 8, 1, 0, 0);
	func_287(uParam0, 9, 1, 0, 0);
	func_287(uParam0, 10, 1, 0, 0);
	func_287(uParam0, 12, 1, 0, 0);
	func_287(uParam0, 14, 1, 0, 0);
	func_287(uParam0, 15, 1, 0, 0);
	func_287(uParam0, 16, 1, 0, 0);
	func_286(uParam0, 1, 1, "H_TD_TOWN");
	func_286(uParam0, 1, 1, "H_TD_ALAR");
	func_286(uParam0, 1, 1, "H_TD_COPS");
	func_286(uParam0, 1, 2, "H_TD_CREW");
	func_286(uParam0, 1, 3, "H_TD_MILI");
	func_285(uParam0, 1, 67, 78);
	func_285(uParam0, 1, 204, 61);
	func_285(uParam0, 1, 217, 256);
	func_285(uParam0, 1, 337, 24);
	func_285(uParam0, 1, 466, 32);
	func_285(uParam0, 1, 570, 20);
	func_285(uParam0, 1, 565, 150);
	func_285(uParam0, 1, 671, 184);
	func_285(uParam0, 1, 379, 311);
	func_285(uParam0, 1, 50, 192);
	func_284(uParam0, 1, "RHP5", 396, 232, 1);
	func_284(uParam0, 1, "RHP6", 175, 150, 1);
	func_284(uParam0, 1, "RHP7", 455, 85, 1);
}

void func_284(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_286(var uParam0, int iParam1, int iParam2, char* sParam3)
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

void func_287(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_288(var uParam0, int iParam1, char* sParam2)
{
	struct<2> Var0;
	
	StringCopy(&Var0, sParam2, 8);
	if (unk_0x0C515FAB3FF9EA92(sParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
}

void func_289(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<2> Var0;
	struct<2> Var2;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var2, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!unk_0x0C515FAB3FF9EA92(sParam3, ""))
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

void func_290(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
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

void func_291(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_292(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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

void func_293(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param14)
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

int func_294(int iParam0)
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
	if (unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
	return 1;
}

void func_295()
{
	while (!func_296(&Local_150))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_106(37, 0);
	func_106(38, 0);
	func_106(40, 0);
	func_106(39, 0);
	func_83(1, 2, 0);
	func_83(2, 2, 0);
	unk_0x31D16B74C6E29D66(iLocal_99, false);
	if (iLocal_100 != -1)
	{
		if (unk_0x0EAEB0DB4B132399(iLocal_100))
		{
			unk_0x46399A7895957C0E(iLocal_100);
		}
	}
	unk_0x2E05208086BA0651();
	unk_0x34F060F4BF92E018(Local_150.f_1.f_394 - Local_150.f_1.f_397, Local_150.f_1.f_394 + Local_150.f_1.f_397, true, 0);
	unk_0xAA5F02DB48D704B9(5);
	unk_0x440AF51A3462B86F();
	if (iLocal_42 != -1)
	{
		func_152(&iLocal_42);
	}
	unk_0x1090044AD1DA76FA();
}

int func_296(var uParam0)
{
	if (unk_0xA921AA820C25702F(uParam0->f_449, 1))
	{
		func_259(uParam0);
	}
	if (unk_0xA921AA820C25702F(uParam0->f_449, 0))
	{
		func_258(uParam0);
	}
	return 1;
}

