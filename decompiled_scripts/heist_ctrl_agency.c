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
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 4;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 4;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 4;
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
	int iLocal_94 = 0;
	struct<485> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	iLocal_94 = -1;
	if (unk_0x24862A9CDC8F8874(82))
	{
		func_327();
	}
	func_326(0);
	func_314(&(Local_95.f_1), func_325(Global_87468[6 /*19*/], Global_87468[7 /*19*/]));
	func_313(&Local_95, 3);
	while (!func_312(2))
	{
		if (!Global_69586)
		{
			func_310();
			if (func_309(3, 0))
			{
				if (!func_308(66))
				{
					if (!unk_0xDCC86F723E82125E(iLocal_41, 8))
					{
						Local_95.f_1.f_141[0 /*2*/] = 302;
						Local_95.f_1.f_141[0 /*2*/].f_1 = 191;
						Local_95.f_1.f_141[1 /*2*/] = 309;
						Local_95.f_1.f_141[1 /*2*/].f_1 = 109;
						Local_95.f_1.f_141[2 /*2*/] = 196;
						Local_95.f_1.f_141[2 /*2*/].f_1 = 318;
						Local_95.f_1.f_141[3 /*2*/] = 220;
						Local_95.f_1.f_141[3 /*2*/].f_1 = 227;
						unk_0x59A0729D503ED758(&iLocal_41, 8);
					}
				}
				else if (!unk_0xDCC86F723E82125E(iLocal_41, 9))
				{
					Local_95.f_1.f_141[0 /*2*/] = 0;
					Local_95.f_1.f_141[0 /*2*/].f_1 = 0;
					Local_95.f_1.f_141[1 /*2*/] = 0;
					Local_95.f_1.f_141[1 /*2*/].f_1 = 0;
					Local_95.f_1.f_141[2 /*2*/] = 0;
					Local_95.f_1.f_141[2 /*2*/].f_1 = 0;
					Local_95.f_1.f_141[3 /*2*/] = 0;
					Local_95.f_1.f_141[3 /*2*/].f_1 = 0;
					unk_0x59A0729D503ED758(&iLocal_41, 9);
				}
			}
			func_309(3, 0);
			if (Global_100976.f_5895.f_227[71] == 1 && !func_307(14))
			{
				func_296(&Local_95, 40f, 50f);
				func_294(&Local_95);
				func_272();
				func_148();
			}
			else if (unk_0xDCC86F723E82125E(Local_95.f_449, 0))
			{
				func_144(&Local_95);
			}
			if (func_142(0) || unk_0xDCC86F723E82125E(Local_95.f_449, 2))
			{
				func_68(&Local_95);
				func_6(&Local_95);
				func_5(&Local_95);
			}
		}
		if (unk_0xCBC8FFE55DC722B5(joaat("agency_heist3a")) > 0 || unk_0xCBC8FFE55DC722B5(joaat("agency_heist3b")) > 0)
		{
			func_4();
		}
		if (func_312(12))
		{
			if (!func_3(0))
			{
				if (!unk_0xDCC86F723E82125E(Global_100976.f_1.f_120[3], 8))
				{
					func_2(3, 8, 1);
				}
			}
			else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_120[3], 8))
			{
				func_2(3, 8, 0);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_120[3], 8))
		{
			func_2(3, 8, 0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1(0);
	func_327();
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
	if (unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iVar0], iVar1))
	{
		unk_0x77621132305B133B(&(Global_100976.f_7719.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_1.f_120[iParam0]), iParam1);
	}
	unk_0x59A0729D503ED758(&Global_87447, iParam0);
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_4()
{
	int iVar0;
	
	if (Global_69577)
	{
		return;
	}
	if (!unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		return;
	}
	iVar0 = unk_0xF2DB717A73826179((1f + (1000f * unk_0x0000000050597EE2())));
	Global_87659.f_8 = (Global_87659.f_8 + iVar0);
}

void func_5(var uParam0)
{
	if (unk_0xDCC86F723E82125E(Global_87447, *uParam0))
	{
		if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
		{
			unk_0x59A0729D503ED758(&(uParam0->f_449), 15);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 16);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 14);
			unk_0x77621132305B133B(&Global_87447, *uParam0);
		}
	}
}

void func_6(var uParam0)
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
		if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
		{
			func_7(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_65(uParam0);
			uParam0->f_464 = iParam1;
			func_8(uParam0, iParam1, iParam2);
		}
	}
}

void func_8(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_64(uParam0);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_36(uParam0, uParam0->f_417, iParam2);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x693EBB4F13506457();
			break;
		
		case 3:
			func_19(uParam0);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x693EBB4F13506457();
			break;
		
		case 4:
			func_15(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_15(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_100976.f_1.f_6[*uParam0] = 1;
			unk_0x9F4AA6F234E8A860(0);
			func_13(uParam0, 0);
			func_64(uParam0);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x693EBB4F13506457();
			break;
	}
	func_9(uParam0);
}

void func_9(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	
	uVar0 = unk_0x52374D5DBC0F5DC7(2, 13, 1);
	uVar1 = unk_0x52374D5DBC0F5DC7(2, 11, 1);
	uVar2 = unk_0x3F78CAF40CD146C4(0, 32, 1);
	uVar3 = unk_0x52374D5DBC0F5DC7(0, 1, 1);
	uVar4 = unk_0x3F78CAF40CD146C4(2, 201, 1);
	uVar5 = unk_0x3F78CAF40CD146C4(2, 202, 1);
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		uVar0 = unk_0x52374D5DBC0F5DC7(2, 6, 1);
		uVar1 = unk_0x52374D5DBC0F5DC7(2, 7, 1);
		uVar2 = unk_0x52374D5DBC0F5DC7(0, 29, 1);
	}
	bVar6 = func_12(1, *uParam0);
	unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_MAX_WIDTH");
	unk_0x512B59C08EAFA3B9(0.6f);
	unk_0xD013AC29829DDC02();
	switch (uParam0->f_464)
	{
		case 0:
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_11(uVar2);
					func_10("PB_H_ZOOM");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_11(uVar3);
					func_10("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
				}
				else
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(2);
					func_11(uVar2);
					func_10("PB_H_ZOOM");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_11(uVar3);
					func_10("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_11(uVar5);
					func_10("PB_H_EXIT");
					unk_0xD013AC29829DDC02();
				}
				unk_0x7C38F93AF52620B1(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x0139C89EE907A315(false);
				unk_0xD013AC29829DDC02();
			}
			break;
		
		case 1:
			unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x0139C89EE907A315(false);
			unk_0xD013AC29829DDC02();
			break;
		
		case 2:
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0xD013AC29829DDC02();
				if (*uParam0 == 2)
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(2);
					func_11(uVar0);
					func_10("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_11(uVar3);
					func_10("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_11(uVar4);
					func_10("PB_H_TRIG");
					unk_0xD013AC29829DDC02();
				}
				else
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(3);
					func_11(uVar0);
					func_10("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(2);
					func_11(uVar3);
					func_10("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_11(uVar5);
					func_10("PB_H_UNDO");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_11(uVar4);
					func_10("PB_H_TRIG");
					unk_0xD013AC29829DDC02();
				}
				unk_0x7C38F93AF52620B1(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x0139C89EE907A315(false);
				unk_0xD013AC29829DDC02();
			}
			break;
		
		case 3:
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				if (unk_0xDCC86F723E82125E(uParam0->f_449, 9))
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_11(uVar1);
					func_10("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_11(uVar3);
					func_10("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
				}
				else
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(2);
					func_11(uVar1);
					func_10("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_11(uVar3);
					func_10("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_11(uVar4);
					func_10("PB_H_TRIG");
					unk_0xD013AC29829DDC02();
				}
				unk_0x7C38F93AF52620B1(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x0139C89EE907A315(false);
				unk_0xD013AC29829DDC02();
			}
			break;
		
		case 4:
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(3);
				func_11(uVar2);
				func_10("PB_H_ZOOM");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(2);
				func_11(uVar3);
				func_10("PB_H_LOOK");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(1);
				func_11(uVar5);
				func_10("PB_H_UNDO");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(0);
				func_11(uVar4);
				func_10("PB_H_CONF");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x0139C89EE907A315(false);
				unk_0xD013AC29829DDC02();
			}
			break;
	}
}

void func_10(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

void func_11(var uParam0)
{
	unk_0x621B4D0F6ED2315D(uParam0);
}

bool func_12(int iParam0, int iParam1)
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
	bVar0 = unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&(uParam0->f_449), 18);
		if (((!func_14(&(uParam0->f_1.f_20[0 /*4*/])) && !func_14(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_14(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_14(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			unk_0x9F4AA6F234E8A860(0);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(uParam0->f_449), 18);
	}
}

bool func_14(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_15(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99618 && iParam1)
	{
		if (func_14(uParam0) && !unk_0x347B6C0AC3348271())
		{
			unk_0x9F4AA6F234E8A860(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xF8D041B05C3D1FD4(uParam0, &(Global_100976.f_24879[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_100976.f_24879.f_145 - 2))
			{
				func_18(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_17((Global_100976.f_24879.f_145 - 1));
			Global_100976.f_24879.f_145 = (Global_100976.f_24879.f_145 - 1);
			func_16();
			return;
		}
		iVar0++;
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_100976.f_24879.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 0))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[0])
			{
				Global_100976.f_24879.f_146[0] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 1))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[1])
			{
				Global_100976.f_24879.f_146[1] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 2))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[2])
			{
				Global_100976.f_24879.f_146[2] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0)
{
	StringCopy(&(Global_100976.f_24879[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_100976.f_24879[iParam0 /*16*/].f_4), "", 16);
	Global_100976.f_24879[iParam0 /*16*/].f_8 = 0;
	Global_100976.f_24879[iParam0 /*16*/].f_9 = 0;
	Global_100976.f_24879[iParam0 /*16*/].f_11 = 0;
	Global_100976.f_24879[iParam0 /*16*/].f_10 = -1;
	Global_100976.f_24879[iParam0 /*16*/].f_12 = 0;
	Global_100976.f_24879[iParam0 /*16*/].f_13 = 0;
	Global_100976.f_24879[iParam0 /*16*/].f_14 = 0;
	Global_100976.f_24879[iParam0 /*16*/].f_15 = 0;
}

void func_18(int iParam0, int iParam1)
{
	Global_100976.f_24879[iParam0 /*16*/] = { Global_100976.f_24879[iParam1 /*16*/] };
	Global_100976.f_24879[iParam0 /*16*/].f_4 = { Global_100976.f_24879[iParam1 /*16*/].f_4 };
	Global_100976.f_24879[iParam0 /*16*/].f_8 = Global_100976.f_24879[iParam1 /*16*/].f_8;
	Global_100976.f_24879[iParam0 /*16*/].f_10 = Global_100976.f_24879[iParam1 /*16*/].f_10;
	Global_100976.f_24879[iParam0 /*16*/].f_9 = Global_100976.f_24879[iParam1 /*16*/].f_9;
	Global_100976.f_24879[iParam0 /*16*/].f_11 = Global_100976.f_24879[iParam1 /*16*/].f_11;
	Global_100976.f_24879[iParam0 /*16*/].f_12 = Global_100976.f_24879[iParam1 /*16*/].f_12;
	Global_100976.f_24879[iParam0 /*16*/].f_13 = Global_100976.f_24879[iParam1 /*16*/].f_13;
	Global_100976.f_24879[iParam0 /*16*/].f_14 = Global_100976.f_24879[iParam1 /*16*/].f_14;
	Global_100976.f_24879[iParam0 /*16*/].f_15 = Global_100976.f_24879[iParam1 /*16*/].f_15;
}

void func_19(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_35(uParam0);
	func_33(uParam0);
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0xD013AC29829DDC02();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_31(*uParam0, 0))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(8);
			unk_0xD013AC29829DDC02();
		}
		else if (iVar0 == func_31(*uParam0, 1))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(9);
			unk_0xD013AC29829DDC02();
		}
	}
	Var1.f_0 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_27(uParam0, &Var1, uParam0->f_1.f_10);
	func_25(uParam0, 1, 1);
	func_13(uParam0, 0);
	func_20(uParam0);
}

void func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 7))
	{
		if (!unk_0xDCC86F723E82125E(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_100976.f_1[*uParam0])
					{
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_100976.f_1[*uParam0] = 1;
					}
					else if (func_22() && !unk_0xB45DF29A98EEAD5D())
					{
						if (((!unk_0xDCC86F723E82125E(uParam0->f_449, 11) && !unk_0xDCC86F723E82125E(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0)
						{
							unk_0xF4A7F7324E8C92A2("PB_H_CHOICE");
							unk_0x31D76F87C39FB8DD(0, 1, 0, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_100976.f_1.f_6[*uParam0])
					{
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_100976.f_1.f_6[*uParam0] = 1;
					}
					else if (func_22() && !unk_0xB45DF29A98EEAD5D())
					{
						if (!unk_0xDCC86F723E82125E(uParam0->f_449, 10))
						{
							if ((!func_14("PB_H_GUNM") && !func_14("PB_H_HACK")) && !func_14("PB_H_DRIV"))
							{
								iVar0 = func_66(func_32(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0xDCC86F723E82125E(uParam0->f_449, 11) && !unk_0xDCC86F723E82125E(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0)
									{
										switch (Global_87468[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												unk_0xF4A7F7324E8C92A2("PB_H_GUNM");
												unk_0x31D76F87C39FB8DD(0, 1, 0, -1);
												break;
											
											case 2:
												unk_0xF4A7F7324E8C92A2("PB_H_HACK");
												unk_0x31D76F87C39FB8DD(0, 1, 0, -1);
												break;
											
											case 3:
												unk_0xF4A7F7324E8C92A2("PB_H_DRIV");
												unk_0x31D76F87C39FB8DD(0, 1, 0, -1);
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

int func_21()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

int func_22()
{
	if (Global_100976.f_24879.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_23(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_24(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_24(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF8D041B05C3D1FD4(sParam0, ""))
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
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xF8D041B05C3D1FD4(&(Global_100976.f_24879[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_100976.f_24879.f_145 < 9)
	{
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_4), sParam1, 16);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_8 = (unk_0x693EBB4F13506457() + iParam3);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_9 = iParam5;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_11 = iParam6;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_12 = uParam2;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_13 = iParam7;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_14 = iParam8;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = ((unk_0x693EBB4F13506457() + iParam3) + iParam4);
		}
		else
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = -1;
		}
		Global_100976.f_24879.f_145++;
		func_16();
	}
}

void func_25(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_280[iParam1 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			unk_0x59A0729D503ED758(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_26(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!unk_0xB8A06E7E729EED0A(&Param3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483++;
	}
}

void func_27(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x693EBB4F13506457() + 1000;
	Var0 = { func_29(uParam0, &(uParam0->f_411)) };
	func_28(&(uParam0->f_649), Var0, fParam2);
}

void func_28(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_11 = { Param1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_29(var uParam0, var uParam1)
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
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * unk_0xD0FFB162F40A139C((90f - fVar6))), (fVar4 * unk_0x0BADBFA3B172435F((90f - fVar6)))) };
	fVar10 = fVar4;
	fVar11 = unk_0xFC4CBB95F50A780A((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (Var7.f_2 - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = unk_0xFC4CBB95F50A780A((fVar14 / uParam0->f_1.f_8));
	fVar16 = ((fVar11 * 3f) / 18f);
	return (fVar15 * 0.95f), fVar16, (-fVar11 * 0.85f);
}

void func_30(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_31(int iParam0, int iParam1)
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

int func_32(int iParam0)
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

void func_33(var uParam0)
{
	int iVar0;
	
	unk_0x7C38F93AF52620B1(uParam0->f_413, "CREATE_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0x65960B4E2ADC9F6D(1);
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16));
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16.f_1));
	unk_0xD013AC29829DDC02();
	func_34(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(2);
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(1);
			unk_0x65960B4E2ADC9F6D(1);
			unk_0xD013AC29829DDC02();
			break;
		
		case 1:
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(3);
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(1);
			unk_0x65960B4E2ADC9F6D(4);
			unk_0xD013AC29829DDC02();
			break;
		
		case 3:
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(6);
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(1);
			unk_0x65960B4E2ADC9F6D(7);
			unk_0xD013AC29829DDC02();
			break;
		
		case 4:
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(8);
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415);
			unk_0x65960B4E2ADC9F6D(1);
			unk_0x65960B4E2ADC9F6D(9);
			unk_0xD013AC29829DDC02();
			break;
	}
	unk_0x7C38F93AF52620B1(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0xD013AC29829DDC02();
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0x0139C89EE907A315(func_309(*uParam0, uParam0->f_1.f_29));
	unk_0xD013AC29829DDC02();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
		unk_0x65960B4E2ADC9F6D(uParam0->f_415);
		unk_0xD013AC29829DDC02();
		if (iVar0 == func_31(*uParam0, 0))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(8);
			unk_0xD013AC29829DDC02();
		}
		else if (iVar0 == func_31(*uParam0, 1))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(9);
			unk_0xD013AC29829DDC02();
		}
		unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
		unk_0x65960B4E2ADC9F6D(99);
		unk_0xD013AC29829DDC02();
	}
}

void func_34(var uParam0)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_LABELS");
	func_10("H_CRW_NAME");
	func_10("H_CRW_TYPE");
	func_10("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_JWL");
			break;
		
		case 1:
			func_10("H_LBL_DOC");
			break;
		
		case 2:
			func_10("H_LBL_RUR");
			break;
		
		case 3:
			func_10("H_LBL_AGN");
			break;
		
		case 4:
			func_10("H_LBL_FA");
			func_10("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_10("H_LBL_CRW");
	}
	func_10("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_10("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_J1");
			func_10("H_LBL_J2");
			func_10("H_LBL_J3");
			func_10("H_LBL_J4");
			func_10("HC_J_IMPACT");
			func_10("HC_J_STEALTH");
			break;
		
		case 1:
			func_10("HC_D_BLOW_UP");
			func_10("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_10("H_LBL_R1");
			func_10("H_LBL_R2");
			func_10("H_LBL_R3");
			func_10("H_LBL_R4");
			func_10("H_LBL_R5");
			func_10("H_LBL_R6");
			func_10("H_LBL_R7");
			func_10("H_LBL_R8");
			func_10("H_LBL_R9");
			func_10("H_LBL_R10");
			func_10("H_LBL_R11");
			func_10("H_LBL_R12");
			break;
		
		case 3:
			func_10("H_LBL_A1");
			func_10("H_LBL_A2");
			func_10("H_LBL_A3");
			func_10("H_LBL_A4");
			func_10("H_LBL_A5");
			func_10("HC_A_FIRETRUCK");
			func_10("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_10("H_LBL_F1");
			func_10("H_LBL_F2");
			func_10("H_LBL_F3");
			func_10("H_LBL_F4");
			func_10("H_LBL_F5");
			func_10("HC_F_TRAFFCONT");
			func_10("HC_F_HELI");
			break;
	}
	unk_0xD013AC29829DDC02();
}

void func_35(var uParam0)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0xD013AC29829DDC02();
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
	func_25(uParam0, 2, 1);
	iVar0 = func_66(func_32(*uParam0));
	iVar1 = Global_87468[iVar0 /*19*/].f_1[iParam1];
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
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x0139C89EE907A315(true);
	unk_0xD013AC29829DDC02();
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
	func_27(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(9);
			unk_0xD013AC29829DDC02();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_13(uParam0, 0);
	func_20(uParam0);
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
	
	iVar0 = func_32(*uParam0);
	iVar1 = func_66(iVar0);
	iVar2 = Global_87468[iVar1 /*19*/].f_1[iParam1];
	unk_0x7C38F93AF52620B1(uParam0->f_413, "CREATE_VIEW");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x65960B4E2ADC9F6D(0);
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/]));
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	unk_0xD013AC29829DDC02();
	func_34(uParam0);
	iVar3 = 0;
	if (Global_100976.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_100976.f_1.f_12[iVar1 /*6*/][iParam1];
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
	if (Global_100976.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
		unk_0x65960B4E2ADC9F6D(iParam1);
		unk_0x0139C89EE907A315(true);
		unk_0xD013AC29829DDC02();
	}
	else
	{
		unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
		unk_0x65960B4E2ADC9F6D(iParam1);
		unk_0x0139C89EE907A315(false);
		unk_0xD013AC29829DDC02();
	}
	unk_0x7C38F93AF52620B1(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
}

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_32(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_100976.f_1.f_12[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_39(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_1.f_118, iParam0);
}

bool func_40(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_1.f_116, iParam0);
}

int func_41(int iParam0)
{
	return Global_87314[iParam0 /*5*/];
}

void func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x7C38F93AF52620B1(uParam0, "SET_DATA_SLOT");
	unk_0x65960B4E2ADC9F6D(iParam2);
	unk_0x65960B4E2ADC9F6D(iParam3);
	unk_0x65960B4E2ADC9F6D(iParam4);
	func_10(func_60(iParam1));
	func_10(func_59(iParam1));
	switch (func_41(iParam1))
	{
		case 1:
			func_10(func_58(0));
			unk_0x65960B4E2ADC9F6D(func_55(iParam1, 0));
			func_10(func_58(1));
			unk_0x65960B4E2ADC9F6D(func_55(iParam1, 1));
			func_10(func_58(2));
			unk_0x65960B4E2ADC9F6D(func_55(iParam1, 2));
			func_10(func_58(3));
			unk_0x65960B4E2ADC9F6D(func_55(iParam1, 3));
			break;
		
		case 2:
			func_10(func_54(0));
			unk_0x65960B4E2ADC9F6D(func_51(iParam1, 0));
			func_10(func_54(1));
			unk_0x65960B4E2ADC9F6D(func_51(iParam1, 1));
			func_10(func_54(2));
			unk_0x65960B4E2ADC9F6D(func_51(iParam1, 2));
			break;
		
		case 3:
			func_10(func_49(0));
			unk_0x65960B4E2ADC9F6D(func_44(iParam1, 0));
			func_10(func_49(1));
			unk_0x65960B4E2ADC9F6D(func_44(iParam1, 1));
			func_10(func_49(2));
			unk_0x65960B4E2ADC9F6D(func_44(iParam1, 2));
			break;
	}
	func_10("H_CRW_CUT");
	unk_0x65960B4E2ADC9F6D(func_43(iParam1));
	unk_0xD013AC29829DDC02();
}

var func_43(int iParam0)
{
	return Global_87314[iParam0 /*5*/].f_1;
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
	return func_48(iParam1, Global_100976.f_1.f_73[iParam0 /*3*/].f_1, Global_100976.f_1.f_73[iParam0 /*3*/].f_2);
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
	switch (Global_87314[iParam0 /*5*/])
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
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
}

void func_63(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xDCC86F723E82125E(Global_87468[iParam1 /*19*/].f_18, iParam2))
	{
		if (!unk_0xF8D041B05C3D1FD4(&(Global_87468[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, Global_87468[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			unk_0x59A0729D503ED758(&(Global_87468[iParam1 /*19*/].f_18), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_87468[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_87468[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0x59A0729D503ED758(&(Global_87468[iVar0 /*19*/].f_18), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_64(var uParam0)
{
	func_27(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(99);
	unk_0xD013AC29829DDC02();
	func_20(uParam0);
}

void func_65(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
			unk_0x65960B4E2ADC9F6D(99);
			unk_0xD013AC29829DDC02();
			break;
	}
	unk_0x9F4AA6F234E8A860(0);
}

int func_66(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_99.f_205[iParam0];
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
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
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
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 2))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (!func_141(0))
			{
				if (func_132(8))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
						fVar4 = unk_0x949D03817D2A6977(Var1.f_0, Var1.f_1);
						fVar5 = unk_0xA3C5926D6E5619AE((uParam0->f_404 - fVar4));
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
								fVar5 = unk_0xA3C5926D6E5619AE((fVar6 - fVar4));
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
									fVar5 = unk_0xA3C5926D6E5619AE((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = unk_0xA3C5926D6E5619AE((fVar6 - fVar4));
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
				func_131(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0);
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
		bVar7 = func_12(1, *uParam0);
		func_78(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (unk_0x8D9008B8900A28D0(2, iLocal_36) || unk_0x8D9008B8900A28D0(2, 238))) || unk_0xDCC86F723E82125E(uParam0->f_449, 8))
		{
			unk_0x77621132305B133B(&(uParam0->f_449), 8);
			func_70(uParam0, 0);
		}
	}
}

void func_70(var uParam0, bool bParam1)
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
		if (!bParam1)
		{
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0f, (1f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (1f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0x32B7B9548CC32D81(Var0, &(Var0.f_2), 0);
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var0, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), uParam0->f_404);
			unk_0x8C67D2FDE360FBCA(0);
			unk_0x0F9FDCEB321235AB(0, 1065353216);
			unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Idle"), 0, 0, 0);
			unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 1, 0);
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 134);
	}
	unk_0xB7709513BF7C1AC0(1);
	func_73(0);
	func_72();
	unk_0x11D0AD0D13C88D1A();
	unk_0x19479CF94A711302(17);
	unk_0x986FBFBE2397DE42(0);
	func_71(&(uParam0->f_649), 0, 1);
	func_15(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	unk_0x9F4AA6F234E8A860(1);
	while (unk_0xB45DF29A98EEAD5D())
	{
		unk_0x9F4AA6F234E8A860(1);
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar3 = unk_0x2F748CE5313AA2BB(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0xBB2FAA651AEDFE3A(iVar3);
	}
	unk_0x96F391C14D138208();
	func_65(uParam0);
	unk_0x77621132305B133B(&(uParam0->f_449), 7);
	unk_0x77621132305B133B(&(uParam0->f_449), 2);
	Global_87446 = 0;
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x844838E5D8A21336(*uParam0))
	{
		if (bParam2)
		{
			unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0xF96FC657C212A30E(*uParam0))
		{
			unk_0x7D1795B1E14EDFFD(*uParam0, 0);
		}
		unk_0x5CF5A880ED809DDA(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0x46502D4C83316BA8();
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
	Global_17118.f_5 = 0;
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		func_77();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_141(0))
		{
			func_74(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_74(int iParam0)
{
	if (Global_14571)
	{
		func_76(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_75())
	{
		Global_14413.f_1 = 3;
	}
}

int func_75()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

void func_77()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_78(var uParam0)
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = unk_0x52374D5DBC0F5DC7(0, 1, 1);
	if (!unk_0xF8D041B05C3D1FD4(sVar0, uParam0->f_466))
	{
		func_9(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_112();
	func_102(uParam0);
	func_86(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_83(uParam0);
	}
	if (func_22())
	{
		func_20(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0x693EBB4F13506457();
	func_79(&(uParam0->f_649), unk_0xDCC86F723E82125E(uParam0->f_449, 4), (unk_0xDCC86F723E82125E(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216);
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 7))
	{
		if ((!unk_0x308528B5CF35F306() && unk_0xB66DD474AA9E764E()) && !unk_0x2BF05095F2389894())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0xDCC86F723E82125E(uParam0->f_449, 11) && !unk_0xDCC86F723E82125E(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0))
				{
					if (!unk_0xDCC86F723E82125E(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						unk_0x16387DB49A36A0F3(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0xB7709513BF7C1AC0(0);
	unk_0x68A38902ADFD05FE(2);
	unk_0x68A38902ADFD05FE(1);
	unk_0x68A38902ADFD05FE(8);
	unk_0x68A38902ADFD05FE(7);
	unk_0x68A38902ADFD05FE(3);
	unk_0x7662B6FB19655462();
	unk_0xF799955FDE53592F(82, 66);
	unk_0x6304F4F223560FF0(17, 0.612f, 0.818f);
	unk_0xFA99CE7438CDE58B();
	if (!unk_0x308528B5CF35F306())
	{
		unk_0x80904D7F494D0C30(2, 201);
	}
	unk_0x80904D7F494D0C30(2, 202);
	unk_0x80904D7F494D0C30(2, 188);
	unk_0x80904D7F494D0C30(2, 187);
	unk_0x80904D7F494D0C30(2, 189);
	unk_0x80904D7F494D0C30(2, 190);
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 7))
	{
		if (!unk_0x308528B5CF35F306())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (2.9f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0x32B7B9548CC32D81(Var2, &(Var2.f_2), 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 134);
			unk_0xBA73099E237C7E5E(unk_0xC8B93D94F8954288());
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 1);
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var2, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), uParam0->f_404);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 7);
		}
	}
}

void func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7)
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
	
	unk_0xBD76D2728ECB1AC6(2);
	func_82(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x720887E96C08F0E8())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		fVar5 = unk_0x882A55CDEA060AA5(2, 239);
		fVar6 = unk_0x882A55CDEA060AA5(2, 240);
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
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0x882A55CDEA060AA5(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0x882A55CDEA060AA5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_81((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_81((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x693EBB4F13506457())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xBDC482FE4AF5F4F1(2))
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
		uParam0->f_27 = unk_0x693EBB4F13506457() + 4000;
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
	if ((unk_0xBDC482FE4AF5F4F1(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_80(((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_80(((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_80(((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_80(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_80(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_80(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0xBDC482FE4AF5F4F1(0) && bParam1)
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
		if (unk_0xBDC482FE4AF5F4F1(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x3BE6F47A1187EFE0(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x693EBB4F13506457() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x3BE6F47A1187EFE0(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x693EBB4F13506457() + 4000;
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
	unk_0xF24FE6EB928DD893(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x844838E5D8A21336(*uParam0))
	{
		if (unk_0xF96FC657C212A30E(*uParam0))
		{
			if (unk_0xB1E18FA70927BDAB(*uParam0))
			{
				unk_0x4C7566DC433A2982();
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
	*uParam0 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xD78553F3D1E80C89(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 218) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 219) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 220) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 221) * 127f));
		}
	}
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (bParam5)
		{
			if (unk_0x720887E96C08F0E8())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xC41E7799A66E5FCB())
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
	
	if (!func_12(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (unk_0xDCC86F723E82125E(uParam0->f_449, 19))
				{
					uParam0->f_452 = unk_0x693EBB4F13506457() + 500;
				}
				else
				{
					uParam0->f_452 = unk_0x693EBB4F13506457();
				}
			}
			else if (unk_0x693EBB4F13506457() > uParam0->f_452)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!unk_0xDCC86F723E82125E(uParam0->f_1.f_303, iVar1 + 4))
						{
							func_85(uParam0, iVar1);
							if (unk_0xDCC86F723E82125E(uParam0->f_1.f_370, iVar1))
							{
								unk_0x59A0729D503ED758(&(uParam0->f_449), 19);
							}
							else
							{
								unk_0x77621132305B133B(&(uParam0->f_449), 19);
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
	bVar0 = unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_7719.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_7719.f_99.f_219[iParam0]), iParam1);
	}
}

void func_85(var uParam0, int iParam1)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(99);
	unk_0xD013AC29829DDC02();
	func_27(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_25(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_21() && unk_0xB66DD474AA9E764E()) && !unk_0x308528B5CF35F306())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0xDCC86F723E82125E(uParam0->f_449, 13))
			{
				if (func_87(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						unk_0x77621132305B133B(&(uParam0->f_449), 11);
					}
					else
					{
						unk_0x59A0729D503ED758(&(uParam0->f_449), 11);
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
				unk_0x77621132305B133B(&(uParam0->f_449), 13);
				unk_0x77621132305B133B(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 11))
			{
				unk_0x77621132305B133B(&(uParam0->f_449), 11);
			}
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 13))
			{
				unk_0x77621132305B133B(&(uParam0->f_449), 13);
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_88(sParam2, iParam3, 0);
}

int func_88(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_99(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_98();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_92();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_91())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_90();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_89();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_90()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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
	if (func_307(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_93();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_93()
{
	func_94();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_94()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_97(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_96(unk_0xC8B93D94F8954288());
			if (func_95(iVar0) && (!func_307(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_95(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_95(int iParam0)
{
	return iParam0 < 3;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_100()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_101(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
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
	if (unk_0x7EF0ED41FC8F3EC1(2))
	{
		func_9(uParam0);
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 11))
	{
		if ((unk_0x8D9008B8900A28D0(2, iLocal_37) || unk_0x8D9008B8900A28D0(2, iLocal_39)) || (unk_0xBDC482FE4AF5F4F1(2) && (unk_0x8D9008B8900A28D0(2, iLocal_38) || unk_0x8D9008B8900A28D0(2, iLocal_40))))
		{
			func_110();
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 12))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_449), 13);
				unk_0x77621132305B133B(&(uParam0->f_449), 11);
				unk_0x77621132305B133B(&(uParam0->f_449), 10);
			}
			unk_0x77621132305B133B(&(uParam0->f_449), 12);
		}
	}
	func_82(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_81((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_81((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (unk_0x720887E96C08F0E8())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > unk_0x693EBB4F13506457())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			unk_0x59A0729D503ED758(&(uParam0->f_449), 4);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
		}
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 10))
	{
		if (!unk_0xDCC86F723E82125E(uParam0->f_449, 11))
		{
			if ((unk_0x693EBB4F13506457() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((unk_0x693EBB4F13506457() - uParam0->f_457) > 25000)
					{
						func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || unk_0x0139E142C27412BC(2, 188)) || unk_0x0139E142C27412BC(2, 189)) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x3BE6F47A1187EFE0(2, 241)))
					{
						unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x65960B4E2ADC9F6D(8);
						unk_0xD013AC29829DDC02();
						unk_0x7C38F93AF52620B1(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0xE8866D60840897A4();
						uParam0->f_456 = unk_0x693EBB4F13506457();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || unk_0x0139E142C27412BC(2, 187)) || unk_0x0139E142C27412BC(2, 190)) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x3BE6F47A1187EFE0(0, 242)))
					{
						unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x65960B4E2ADC9F6D(9);
						unk_0xD013AC29829DDC02();
						unk_0x7C38F93AF52620B1(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0xE8866D60840897A4();
						uParam0->f_456 = unk_0x693EBB4F13506457();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || unk_0x0139E142C27412BC(2, 188)) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x3BE6F47A1187EFE0(0, 40)))
					{
						unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x65960B4E2ADC9F6D(8);
						unk_0xD013AC29829DDC02();
						if (uParam0->f_416 != 0)
						{
							unk_0xC4EE38A4CFF7544C(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (unk_0xDCC86F723E82125E(uParam0->f_449, 9))
						{
							unk_0x77621132305B133B(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
						uParam0->f_456 = unk_0x693EBB4F13506457();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || unk_0x0139E142C27412BC(2, 187)) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x3BE6F47A1187EFE0(0, 41)))
					{
						unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x65960B4E2ADC9F6D(9);
						unk_0xD013AC29829DDC02();
						if (uParam0->f_416 != 1)
						{
							unk_0xC4EE38A4CFF7544C(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (unk_0xDCC86F723E82125E(uParam0->f_449, 9))
						{
							unk_0x77621132305B133B(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
						uParam0->f_456 = unk_0x693EBB4F13506457();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_21() || unk_0xDCC86F723E82125E(uParam0->f_449, 13))
				{
					if (unk_0x8D9008B8900A28D0(2, iLocal_37) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x8D9008B8900A28D0(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_21())
								{
									if (!unk_0xDCC86F723E82125E(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x693EBB4F13506457();
										iVar0 = func_32(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x7C38F93AF52620B1(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0xE8866D60840897A4();
											func_13(uParam0, 1);
											func_15(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_15(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_100976.f_1[*uParam0] = 1;
											unk_0x9F4AA6F234E8A860(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_12(4, *uParam0))
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									if (uParam0->f_450 < Global_87468[iVar1 /*19*/])
									{
										unk_0x7C38F93AF52620B1(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0xE8866D60840897A4();
										func_13(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_84(4, *uParam0, 1);
									if (!func_3(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_84(5, *uParam0, 1);
								}
								unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_87468[iVar1 /*19*/])
								{
									if (Global_100976.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_41(Global_100976.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_87468[iVar1 /*19*/].f_1[iVar2])
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
													if (Global_87314[iVar3 /*5*/] != Global_87468[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0xDCC86F723E82125E(Global_100976.f_1.f_116, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_118, iVar3))
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
										Global_100976.f_1.f_12[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_13(uParam0, 1);
								func_63(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0x8D9008B8900A28D0(2, iLocal_39) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x8D9008B8900A28D0(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_13(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_87468[iVar1 /*19*/].f_1[uParam0->f_450];
									func_36(uParam0, uParam0->f_450, iVar6);
									unk_0xC4EE38A4CFF7544C(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x693EBB4F13506457();
								}
								else if (!func_312(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x65960B4E2ADC9F6D(iVar7);
											unk_0xD013AC29829DDC02();
											unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x65960B4E2ADC9F6D(iVar7);
											unk_0x0139C89EE907A315(true);
											unk_0xD013AC29829DDC02();
											iVar7++;
										}
										unk_0xC4EE38A4CFF7544C(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_2(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_13(uParam0, 1);
										uParam0->f_456 = unk_0x693EBB4F13506457();
										uParam0->f_465 = 0;
										func_107(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_87468[iVar1 /*19*/].f_1[uParam0->f_450];
									func_7(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_2(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_106(8, 0);
									func_84(5, 1, 0);
									uParam0->f_427 = 0;
									func_13(uParam0, 1);
									uParam0->f_456 = unk_0x693EBB4F13506457();
									func_7(uParam0, 3, 0);
								}
								unk_0xC4EE38A4CFF7544C(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_32(*uParam0);
		iVar1 = func_66(iVar0);
		if (uParam0->f_450 >= Global_87468[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
			unk_0x65960B4E2ADC9F6D(99);
			unk_0x65960B4E2ADC9F6D(-1);
			unk_0xD013AC29829DDC02();
			func_25(uParam0, 0, 1);
			func_7(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xDCC86F723E82125E(uParam0->f_449, 17))
			{
				iVar10 = Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_87468[iVar1 /*19*/].f_1[uParam0->f_450];
				func_36(uParam0, uParam0->f_450, iVar10);
			}
			unk_0x77621132305B133B(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x693EBB4F13506457();
		unk_0x77621132305B133B(&(uParam0->f_449), 10);
	}
	else if (unk_0xB45DF29A98EEAD5D())
	{
		if (((!func_14(&(uParam0->f_1.f_108[0 /*4*/])) && !func_14(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_14(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_14(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0x6745682088A5D775(uParam0->f_680))
		{
			iVar11 = unk_0x287E98C932B92D48(uParam0->f_680);
			iVar1 = func_31(*uParam0, iVar11);
			iVar0 = func_32(*uParam0);
			func_106(iVar0, iVar1);
			if (!func_3(0))
			{
				func_105(*uParam0);
			}
			unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_63(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_2(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_62(uParam0, iVar12);
				if (iVar12 < Global_87468[iVar1 /*19*/])
				{
					unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
					unk_0x65960B4E2ADC9F6D(iVar12);
					unk_0x0139C89EE907A315(true);
					unk_0xD013AC29829DDC02();
				}
				else
				{
					unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
					unk_0x65960B4E2ADC9F6D(iVar12);
					unk_0x0139C89EE907A315(false);
					unk_0xD013AC29829DDC02();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_84(5, *uParam0, 1);
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			unk_0x9F4AA6F234E8A860(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (unk_0x6745682088A5D775(uParam0->f_681))
		{
			iVar13 = unk_0x287E98C932B92D48(uParam0->f_681);
			iVar0 = func_32(*uParam0);
			iVar1 = func_66(iVar0);
			Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			unk_0x7C38F93AF52620B1(uParam0->f_413, "UPDATE_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_450);
			unk_0x65960B4E2ADC9F6D(iVar13);
			unk_0x65960B4E2ADC9F6D(iVar14);
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
			unk_0x65960B4E2ADC9F6D(99);
			unk_0xD013AC29829DDC02();
			unk_0xC4EE38A4CFF7544C(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			unk_0x77621132305B133B(&(uParam0->f_449), 17);
			func_104(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x693EBB4F13506457();
			uParam0->f_457 = uParam0->f_456;
			unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
			if (!func_14(&(uParam0->f_1.f_108[0 /*4*/])) && !func_14(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				unk_0x9F4AA6F234E8A860(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (unk_0x6745682088A5D775(uParam0->f_682))
		{
			iVar15 = unk_0x287E98C932B92D48(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					unk_0xC4EE38A4CFF7544C(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
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
	if (!func_21())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_119, 14))
					{
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 14);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_119, 16))
					{
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 16);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_119, 15))
					{
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 15);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_119, 17))
					{
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 17);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 12);
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
	if (!unk_0xDCC86F723E82125E(uParam0->f_463, iParam1))
	{
		if (!unk_0xDCC86F723E82125E(Global_100976.f_1.f_119, iParam1))
		{
			if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_304[iParam1 /*2*/]), ""))
			{
				func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
				unk_0x59A0729D503ED758(&(Global_100976.f_1.f_119), iParam1);
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 0))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 1))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 3))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 6))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 0))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 7))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 7))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 1))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 8))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 8))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 4))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 2))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 5))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 15))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 3))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 2))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 14))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 14))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 18))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 6))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 17))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 12))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 10))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 0))
								{
									if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 7))
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 11))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 1))
								{
									if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 8))
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 13))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 19))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 4))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 16))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 5))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 20))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x59A0729D503ED758(&(uParam0->f_463), iParam1);
	}
}

void func_105(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_100976.f_7719.f_99.f_205[7];
			if (iVar0 == 1)
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_100976.f_7719.f_99.f_205[8];
			if (iVar0 == 3)
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_100976.f_7719.f_99.f_205[10];
			if (iVar0 == 6)
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_100976.f_7719.f_99.f_205[11];
			if (iVar0 == 8)
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				unk_0x11C18C0E7876C1D0(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
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
	if (Global_100976.f_7719.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_100976.f_7719.f_99.f_205[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_100976.f_7719.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_100976.f_7719.f_99.f_58[iParam0] = iParam1;
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_100976.f_7719.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_87468[iVar1 /*19*/])
			{
				switch (Global_100976.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 0);
						break;
					
					case 10:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 1);
						unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 14);
						break;
					
					case 7:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 2);
						break;
					
					case 12:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 3);
						unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 4);
						break;
					
					case 8:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 5);
						break;
					
					case 9:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 6);
						break;
				}
				unk_0x59A0729D503ED758(&(Global_100976.f_1.f_119), Global_100976.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_100976.f_7719.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_87468[iVar1 /*19*/])
			{
				switch (Global_100976.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 7);
						break;
					
					case 10:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 8);
						unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 14);
						break;
					
					case 11:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 9);
						unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 17);
						break;
				}
				unk_0x59A0729D503ED758(&(Global_100976.f_1.f_119), Global_100976.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_100976.f_7719.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_87468[iVar1 /*19*/])
			{
				switch (Global_100976.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 10);
						break;
					
					case 10:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 11);
						unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 14);
						break;
					
					case 5:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 12);
						break;
					
					case 3:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 13);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 17);
						break;
					
					case 7:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 14);
						break;
					
					case 12:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 15);
						unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 19);
						break;
					
					case 8:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 16);
						break;
					
					case 9:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 18);
						break;
					
					case 13:
						unk_0x59A0729D503ED758(&(Global_100976.f_1.f_117), 20);
						unk_0x77621132305B133B(&(Global_100976.f_1.f_119), 16);
						break;
				}
				unk_0x59A0729D503ED758(&(Global_100976.f_1.f_119), Global_100976.f_1.f_12[iVar1 /*6*/][iVar0]);
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
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 0);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 1);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 2);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 3);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 4);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 5);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 6);
			break;
		
		case 2:
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 7);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 8);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 9);
			break;
		
		case 3:
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 10);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 11);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 12);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 13);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 14);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 15);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 16);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 17);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 18);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 19);
			unk_0x77621132305B133B(&(Global_100976.f_1.f_117), 20);
			break;
	}
}

void func_110()
{
	Global_14578 = 0;
	func_111();
}

void func_111()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

void func_112()
{
	unk_0x5B53B03A14798328();
	func_113();
}

void func_113()
{
	Global_17118.f_134 = 1;
}

void func_114(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x59A0729D503ED758(&(uParam0->f_449), 9);
	func_13(uParam0, 0);
	if (!unk_0x308528B5CF35F306())
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (Global_36750 == 1)
			{
				func_119(unk_0xC8B93D94F8954288());
			}
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * unk_0xD0FFB162F40A139C((180f - uParam0->f_404))), (2.9f * unk_0x0BADBFA3B172435F((180f - uParam0->f_404)))) };
			unk_0x32B7B9548CC32D81(Var0, &(Var0.f_2), 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 134);
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var0, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), uParam0->f_404);
			unk_0xBA73099E237C7E5E(unk_0xC8B93D94F8954288());
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 1);
		}
		unk_0x59A0729D503ED758(&(uParam0->f_449), 7);
	}
	unk_0xB7709513BF7C1AC0(0);
	func_73(1);
	func_118();
	unk_0x31592941AC9991FE();
	unk_0x98371F41D43CDFA9(uParam0->f_401, 5f, 1, 1, 0, 0);
	unk_0x213270B65D2FC4D2(uParam0->f_401, 5f);
	unk_0x986FBFBE2397DE42(1);
	unk_0xF799955FDE53592F(82, 66);
	unk_0x6304F4F223560FF0(17, 0.612f, 0.818f);
	unk_0xFA99CE7438CDE58B();
	func_117(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar3 = unk_0x2F748CE5313AA2BB(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0xF25AF9F8042D7158(iVar3);
	}
	unk_0x49A106E9E7E45B54(&(Global_87385[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xC6578833757CD326(unk_0x1B75AE60CAEA6205(unk_0xC8B93D94F8954288()));
	}
	func_116(0);
	func_115();
	unk_0xF7CE1213DA9898BD(0);
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x7C38F93AF52620B1(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		unk_0x0139C89EE907A315(false);
		unk_0xD013AC29829DDC02();
	}
	uParam0->f_466 = unk_0x52374D5DBC0F5DC7(2, 10, 1);
	unk_0x59A0729D503ED758(&(uParam0->f_449), 2);
	Global_87446 = 1;
	func_8(uParam0, uParam0->f_464, 0);
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		func_17(iVar0);
		iVar0++;
	}
	Global_100976.f_24879.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_100976.f_24879.f_146[iVar0] = 0;
		iVar0++;
	}
	if (unk_0xB45DF29A98EEAD5D())
	{
		unk_0x9F4AA6F234E8A860(1);
	}
}

void func_116(bool bParam0)
{
	if (!bParam0)
	{
		Global_99620 = unk_0x693EBB4F13506457() + 250;
	}
	Global_99617 = bParam0;
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
	*uParam0 = unk_0xFE4F2696906F18A3("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x7D1795B1E14EDFFD(*uParam0, 1);
	unk_0xF24FE6EB928DD893(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0xB61A035EB3575B09(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xBCE58DAD703266B5(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x81AF63D011F20A17(iParam13);
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
	Global_17118.f_5 = 1;
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
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return;
	}
	iVar0 = func_127(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36553[iVar0 /*5*/];
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
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0xC8B93D94F8954288())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36634[iVar0 /*5*/] = iParam0;
	Global_36634[iVar0 /*5*/].f_1 = iParam1;
	Global_36634[iVar0 /*5*/].f_2 = iParam2;
	Global_36634[iVar0 /*5*/].f_3 = iParam3;
	Global_36634[iVar0 /*5*/].f_4 = iParam4;
}

int func_124()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36634[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
			{
				if (iParam1 == Global_36634[iVar0 /*5*/].f_1)
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
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
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
		if (Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/].f_7 = 1;
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
		if (Global_36400[iVar0 /*19*/].f_1 == iParam0)
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
	if (!unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		return 0;
	}
	if (func_141(0))
	{
		return 0;
	}
	if (unk_0x308528B5CF35F306())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/] == 1 && Global_36400[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36400[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36400[iVar0 /*19*/].f_5 = 1;
			Global_36400[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36400[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36400[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xCBC8FFE55DC722B5(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA8D4B6BDCF6DE72B())
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
		if (!Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/] = 1;
			Global_36400[iVar0 /*19*/].f_1 = Global_36523;
			Global_36523++;
			Global_36400[iVar0 /*19*/].f_4 = 0;
			Global_36400[iVar0 /*19*/].f_17 = 0;
			Global_36400[iVar0 /*19*/].f_5 = 0;
			Global_36400[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36400[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36400[iVar0 /*19*/].f_6 = iParam3;
			Global_36400[iVar0 /*19*/].f_18 = unk_0x46CF50E0E5A24635();
			Global_36400[iVar0 /*19*/].f_7 = 0;
			Global_36400[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB8A06E7E729EED0A(sParam4))
			{
				Global_36400[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36400[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36400[iVar0 /*19*/].f_12 = 0;
			}
			*uParam0 = Global_36400[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
						if (((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_140()) || Global_100023) || Global_25117) || func_139()) || func_99(8, -1)) || func_138()) || func_137()) || func_136()) || func_135()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1) || func_140()) || Global_25117) || func_139()) || func_99(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_140()) || Global_100023) || Global_25117) || func_139()) || func_99(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_100976.f_6322.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_140()) || Global_100023) || Global_25117) || func_139()) || func_99(8, -1)) || func_138()) || func_137()) || func_135()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_140() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || func_99(8, -1)) || func_135()) || func_134()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_99(8, -1) || func_138()) || func_137()) || func_134()) || func_133())
						{
							return 0;
						}
						if ((unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3) && unk_0xC8DAE7AE33B529B0() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
						{
							if ((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_140()) || Global_25117) || func_139()) || func_99(8, -1)) || func_137()) || func_136()) || func_135()) || Global_100976.f_6322.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || func_140()) || func_137()) || Global_100023) || Global_25117) || func_139()) || Global_36750) || func_99(8, -1)) || func_136()) || func_134()) || func_135()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_140()) || Global_100023) || Global_25117) || func_139()) || func_99(8, -1)) || func_136()) || func_134()) || func_138()) || func_137()) || func_135())
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
	return Global_91145.f_1;
}

int func_134()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_135()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_91158.f_297 > 0;
}

bool func_138()
{
	return Global_91158.f_296 > 0;
}

var func_139()
{
	return Global_1315911;
}

int func_140()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_142(int iParam0)
{
	return func_143(iParam0, Global_35700);
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

int func_144(var uParam0)
{
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
	{
		func_146(uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 0))
	{
		func_145(uParam0);
	}
	return 1;
}

void func_145(var uParam0)
{
	unk_0xF636B80CA6E4C266("HEIST_BULLETIN_BOARD");
	unk_0x4BBD72565A0AF033(joaat("prop_ld_planning_pin_01"));
	unk_0x4BBD72565A0AF033(joaat("prop_ld_planning_pin_02"));
	unk_0x4BBD72565A0AF033(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		unk_0xEF145906684E3D72(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		unk_0xEF145906684E3D72(&(uParam0->f_414));
	}
	unk_0x48591CDE727D1F6A(5, 0);
	unk_0x77621132305B133B(&Global_87449, *uParam0);
	unk_0x77621132305B133B(&(uParam0->f_449), 0);
}

void func_146(var uParam0)
{
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
	{
		if (!unk_0x308528B5CF35F306())
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				func_70(uParam0, 0);
			}
		}
		func_147(uParam0);
		unk_0x77621132305B133B(&(uParam0->f_449), 1);
		unk_0x77621132305B133B(&Global_87448, *uParam0);
	}
}

void func_147(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (unk_0x95CCECA3948CFE7B(uParam0->f_428[iVar0]))
		{
			unk_0xA278ECBE30D8AE4F(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_148()
{
	int iVar0;
	int iVar1;
	
	if (func_312(7))
	{
		if (!unk_0xDCC86F723E82125E(iLocal_41, 7))
		{
			unk_0x0B3F3AB0A340D234("AH_2_EXT_P4", 8);
			unk_0xE3B4E8C914195E94("lesterHandler");
			unk_0x7567CEA8E6B5340B(joaat("prop_laptop_01a"));
			unk_0x59A0729D503ED758(&iLocal_41, 7);
		}
		else if (unk_0x35081E98CA82CBB4())
		{
			unk_0x131748CFDC209107("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_312(8))
	{
		if (func_312(7))
		{
			if ((unk_0xDEDB719756F0580C("AH_2_EXT_P4") && unk_0xD838CD843F6FE18B("lesterHandler")) && unk_0x0845149A26DABBA5(joaat("prop_laptop_01a")))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					if (!func_3(0) || func_93() == 0)
					{
						unk_0x5D713171D2C2E177(unk_0xC8B93D94F8954288(), "MICHAEL", 0, joaat("player_zero"), 0);
					}
					else
					{
						unk_0x5D713171D2C2E177(uLocal_49[0], "MICHAEL", 2, joaat("player_zero"), 0);
						unk_0x59A0729D503ED758(&iLocal_41, 12);
					}
				}
				if (func_3(0))
				{
					if (unk_0x95CCECA3948CFE7B(iLocal_45))
					{
						unk_0x5D713171D2C2E177(iLocal_45, "FRANKLIN", 1, joaat("player_one"), 0);
					}
				}
				unk_0x5D713171D2C2E177(iLocal_46, "LESTER", 2, joaat("ig_lestercrest"), 0);
				unk_0x59A0729D503ED758(&iLocal_41, 10);
				func_271(0);
				func_116(1);
				func_264(1, 1, 1, 0);
				func_73(1);
				iVar0 = 0;
				while (iVar0 < func_263(3))
				{
					if (func_261(3, iVar0) == 12)
					{
						func_252(406771743);
					}
					iVar0++;
				}
				unk_0x8E6D4B516B44DE88(256);
				if (func_3(0))
				{
					unk_0x964746959DBA39F2(0, 0, 0, 0);
				}
				func_107(7, 0);
				iLocal_44 = unk_0x693EBB4F13506457();
			}
		}
		else if (unk_0x308528B5CF35F306())
		{
			func_112();
			if (unk_0xDCC86F723E82125E(iLocal_41, 5))
			{
				if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("MICHAEL", joaat("player_zero"))))
				{
					unk_0x872B541D7953A19B(unk_0x3B56A7E9193FB661("MICHAEL", joaat("player_zero")), 1, 0);
				}
				unk_0x77621132305B133B(&iLocal_41, 5);
			}
			if (func_93() != 0)
			{
				if (unk_0xDCC86F723E82125E(iLocal_41, 12))
				{
					if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("MICHAEL", joaat("player_zero"))))
					{
						uLocal_49[0] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("MICHAEL", joaat("player_zero")));
						unk_0x77621132305B133B(&iLocal_41, 12);
					}
				}
			}
			if (unk_0xDCC86F723E82125E(iLocal_41, 10))
			{
				if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("LESTER", joaat("ig_lestercrest"))))
				{
					iLocal_46 = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("LESTER", joaat("ig_lestercrest")));
					unk_0x77621132305B133B(&iLocal_41, 10);
				}
			}
			if (unk_0x669E4BAB086C2648("MICHAEL", 0))
			{
				if (func_93() != 0)
				{
					iLocal_45 = unk_0xC8B93D94F8954288();
					func_247(&uLocal_49, 0);
					func_186(&uLocal_49, 1, 0, 0);
					unk_0x4BBD72565A0AF033(joaat("player_zero"));
				}
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 0, 1, 0);
					unk_0xAFCAB3A510E42700(unk_0xC8B93D94F8954288(), 1f);
					if (unk_0xA9B6C2A8F9FE269A(0) == 4)
					{
						unk_0x1A039EB9A3399D1C(unk_0xA34E7C2A5118D638(), 1f, 2000, 0, 1, 0);
					}
					unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 208, 0);
					unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 118, 1);
					unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 213, 1);
					unk_0xAAD662D7E0D59F4C(unk_0xC8B93D94F8954288(), 0);
					iLocal_43 = unk_0x693EBB4F13506457();
				}
			}
			unk_0xAFCAB3A510E42700(unk_0xC8B93D94F8954288(), 1f);
			if (unk_0x669E4BAB086C2648("LESTER", joaat("ig_lestercrest")))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_46))
				{
					iVar1 = iLocal_46;
					unk_0xB8BA7F44DF1575E1("lesterHandler", &iVar1, 1, 1424);
					unk_0x996557D48454AE40("lesterHandler");
				}
			}
			if (unk_0xF490A05A3C6F92BC(0))
			{
				func_271(1);
			}
		}
		else
		{
			if (func_3(0))
			{
				if (unk_0x95CCECA3948CFE7B(iLocal_45))
				{
					unk_0x26B3B761603F5232(&iLocal_45);
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_46))
				{
					unk_0x26B3B761603F5232(&iLocal_46);
				}
				unk_0x00F9843B9C06C2E9(0);
			}
			else
			{
				Global_55659 = 0;
				Global_91145 = 0;
				func_185();
			}
			func_264(0, 1, 1, 0);
			func_73(0);
			func_184(20000);
			func_182(&(Global_100976.f_1770.f_539), 67);
			func_156(&(Global_100976.f_1770.f_539), 67);
			unk_0x4BBD72565A0AF033(joaat("prop_laptop_01a"));
			func_155(&iLocal_42);
			unk_0x77621132305B133B(&iLocal_41, 2);
			unk_0xAFCAB3A510E42700(unk_0xC8B93D94F8954288(), 1f);
			if (unk_0xA9B6C2A8F9FE269A(0) == 4)
			{
				unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 0, 0, 0);
				unk_0x1A039EB9A3399D1C(unk_0xA34E7C2A5118D638(), 1f, 2000, 0, 1, 0);
			}
			unk_0x9DBF08025225340D(uLocal_93, 0);
			if (iLocal_94 != -1)
			{
				if (unk_0xDA33F6DC6574B8DD(iLocal_94))
				{
					unk_0x78DFC4B56BCF3DA9(iLocal_94);
				}
			}
			unk_0xE7E852B69C980E80();
			unk_0x7AF3AE9D12A61928(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, 1, 0);
			unk_0x60B57BC5E51D2074(5);
			func_149(3, 0);
			func_107(8, 0);
		}
	}
	else if (!func_312(7))
	{
		if (unk_0xDEDB719756F0580C("AH_2_EXT_P4"))
		{
			unk_0xCDBEE0F3B4A74754();
		}
	}
	if (iLocal_43 != -1)
	{
		if ((unk_0x693EBB4F13506457() - iLocal_43) > 2000)
		{
			unk_0xAFCAB3A510E42700(unk_0xC8B93D94F8954288(), 1f);
			iLocal_43 = -1;
		}
	}
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) || func_39(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_152(4, 1);
						break;
					
					case 4:
						func_152(8, 1);
						break;
					
					case 6:
						func_152(10, 1);
						break;
					
					case 7:
						func_152(1, 1);
						break;
					
					case 8:
						func_152(3, 1);
						break;
					
					case 9:
						func_152(6, 1);
						break;
					
					case 10:
						func_152(9, 1);
						break;
					
					case 12:
						func_152(11, 1);
						break;
					
					case 13:
						func_152(12, 1);
						break;
					
					case 11:
						if (func_308(91))
						{
							func_152(0, 1);
						}
						break;
					
					case 5:
						if (func_308(91))
						{
							func_152(2, 1);
						}
						break;
					
					case 3:
						if (func_308(67))
						{
							func_152(5, 1);
						}
						break;
					
					case 2:
						if (func_308(77))
						{
							func_152(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_40(10) && unk_0xDCC86F723E82125E(Global_100976.f_29464.f_8[4], 0))
	{
		func_152(9, 1);
	}
	if (!func_40(13) && unk_0xDCC86F723E82125E(Global_100976.f_29464.f_8[16], 0))
	{
		func_152(12, 1);
	}
	if (!func_40(12))
	{
		if (iParam0 == 4)
		{
			func_152(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_151(69))
		{
			func_23("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_150("DI_FEED_HST");
	}
}

void func_150(char* sParam0)
{
	unk_0x12F4A48D84A3989D("");
	unk_0xA719266DA9F3AABF("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_151(int iParam0)
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
		return unk_0xDCC86F723E82125E(Global_100976.f_24879.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_152(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_154(iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_30903.f_1), iVar0);
			if (!bParam1)
			{
				func_150(func_153(iParam0));
			}
		}
	}
}

char* func_153(int iParam0)
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

int func_154(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_30903.f_1, iParam0);
	}
	return 0;
}

void func_155(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35662)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

void func_156(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_157(uParam0, 0, 12);
			break;
		
		case 19:
			func_157(uParam0, 1, 13);
			break;
		
		case 29:
			func_157(uParam0, 1, 14);
			break;
		
		case 30:
			func_157(uParam0, 2, 15);
			func_157(uParam0, 1, 29);
			break;
		
		case 32:
			func_157(uParam0, 1, 16);
			func_157(uParam0, 0, 17);
			break;
		
		case 39:
			func_157(uParam0, 0, 21);
			func_157(uParam0, 1, 20);
			break;
		
		case 31:
			func_157(uParam0, 0, 18);
			break;
		
		case 20:
			func_157(uParam0, 2, 22);
			break;
		
		case 66:
			func_157(uParam0, 1, 23);
			break;
		
		case 68:
			func_157(uParam0, 1, 24);
			break;
		
		case 70:
			func_157(uParam0, 1, 67);
			break;
		
		case 8:
			func_157(uParam0, 1, 25);
			func_157(uParam0, 2, 26);
			break;
		
		case 67:
			func_157(uParam0, 1, 27);
			break;
		
		case 9:
			func_157(uParam0, 2, 28);
			break;
		
		case 38:
			func_157(uParam0, 2, 30);
			func_157(uParam0, 1, 19);
			break;
		
		case 83:
			func_157(uParam0, 2, 33);
			break;
		
		case 45:
			func_157(uParam0, 1, 35);
			break;
		
		case 64:
			func_157(uParam0, 0, 36);
			func_157(uParam0, 1, 37);
			break;
		
		case 91:
			func_157(uParam0, 0, 41);
			break;
		
		case 42:
			func_157(uParam0, 0, 58);
			Global_90575[0 /*98*/] = 0;
			func_157(uParam0, 2, 59);
			Global_90575[2 /*98*/] = 0;
			break;
		
		case 41:
			func_157(uParam0, 1, 42);
			func_157(uParam0, 2, 42);
			break;
		
		case 15:
			func_157(uParam0, 0, 46);
			func_157(uParam0, 1, 47);
			break;
		
		case 16:
			func_157(uParam0, 0, 48);
			break;
		
		case 48:
			func_157(uParam0, 1, 50);
			func_157(uParam0, 2, 51);
			break;
		
		case 74:
			func_157(uParam0, 0, 52);
			func_157(uParam0, 1, 66);
			break;
		
		case 76:
			func_157(uParam0, 1, 53);
			func_157(uParam0, 2, 54);
			func_157(uParam0, 0, 62);
			break;
		
		case 75:
			func_157(uParam0, 0, 61);
			func_157(uParam0, 1, 31);
			break;
		
		case 69:
			func_157(uParam0, 1, 63);
			break;
		
		case 84:
			func_157(uParam0, 0, 68);
			func_157(uParam0, 2, 69);
			break;
		
		case 85:
			func_157(uParam0, 0, 64);
			func_157(uParam0, 2, 65);
			break;
		
		case 93:
			func_157(uParam0, 1, 38);
			func_157(uParam0, 2, 39);
			break;
		
		case 11:
			func_157(uParam0, 2, 55);
			break;
		
		case 77:
			func_157(uParam0, 1, 56);
			func_157(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_157(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar99;
	var uVar102;
	var uVar103;
	var uVar106;
	
	if (!unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[0], 9))
	{
		iVar0 = Global_100976.f_17167[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_100976.f_17167[iParam1] = iParam2;
	uParam0->f_1524[iParam1] = func_171();
	if (!func_170(iParam2, &(uParam0->f_1528[iParam1 /*3*/]), &(uParam0->f_1538[iParam1])))
	{
		return 0;
	}
	if (!func_169(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_169(Global_89610[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_158(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
			{
				Global_90575[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_1542[iParam1] = 0;
	uParam0->f_1546[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1556[iParam1] = 0;
	return 1;
}

int func_158(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_90575[iParam0 /*98*/] };
			if (Global_90870[iParam0] != 2)
			{
				if (unk_0x6910AF369EAB6935(Global_90878[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, 1))
				{
					if (Global_90870[iParam0] == 1)
					{
						*uParam3 = { Global_90878[iParam0 /*3*/] - Global_100976.f_1770.f_539.f_1528[iParam0 /*3*/] };
						*uParam4 = (Global_90888[iParam0] - Global_100976.f_1770.f_539.f_1538[iParam0]);
						if (unk_0xA8CEACB4F35AE058(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_90878[iParam0 /*3*/] - Global_100976.f_1770.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_90888[iParam0] - Global_100976.f_1770.f_539.f_1538[iParam0]);
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
			*uParam2 = { Global_90575[iParam0 /*98*/] };
			if (Global_90870[iParam0] != 2)
			{
				*uParam3 = { Global_90878[iParam0 /*3*/] - Global_100976.f_1770.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_90888[iParam0] - Global_100976.f_1770.f_539.f_1538[iParam0]);
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
			*uParam2 = { Global_90575[iParam0 /*98*/] };
			if (Global_90870[iParam0] != 2)
			{
				*uParam3 = { Global_90878[iParam0 /*3*/] - Global_100976.f_1770.f_539.f_1528[iParam0 /*3*/] };
				*uParam4 = (Global_90888[iParam0] - Global_100976.f_1770.f_539.f_1538[iParam0]);
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
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_158(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_158(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_160(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
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
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_158(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_160(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_160(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_160(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
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
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
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
			func_160(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
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
			uParam2->f_89 = 1;
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
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
			*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_158(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
				*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
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
			if (func_158(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_158(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_160(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_158(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_158(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_158(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_158(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_158(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
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
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_158(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
			*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_158(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
				*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_158(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
				*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_158(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
				*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_158(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_160(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_158(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_158(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_158(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_158(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_158(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_158(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_160(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_158(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_158(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_159(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_158(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
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
			uParam2->f_97 = 0;
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
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_158(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_158(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_158(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_158(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_158(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_158(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_158(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_158(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_158(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_158(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_158(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_158(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_159(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_158(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_158(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
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
				uParam2->f_97 = 0;
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
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0x949D03817D2A6977(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0x949D03817D2A6977(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0x949D03817D2A6977(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_160(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_159(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_100976.f_7719.f_99.f_58[128] && !Global_100976.f_7719.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_100976.f_7719.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
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
			else if (Global_100976.f_7719.f_99.f_58[118])
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
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_160(int iParam0, var uParam1, int iParam2)
{
	if (Global_90575[iParam0 /*98*/] == 0)
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("blimp"))
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_168(iParam0))
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x9DABB329596B1BD6(Global_90575[iParam0 /*98*/]))
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xE924C2C283992918(Global_90575[iParam0 /*98*/]))
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xAF40E7422A6D9D80(Global_90575[iParam0 /*98*/]))
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xC9E810FB9A83EF58(Global_90575[iParam0 /*98*/]))
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x1B477DDE9D088A91(Global_90575[iParam0 /*98*/]))
		{
			func_159(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0xE6CB12C10EE5D793(Global_90575[iParam0 /*98*/]))
		{
			func_159(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_161(Global_90575[iParam0 /*98*/], 0))
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_159(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_90575[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_90575[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_159(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_90575[iParam0 /*98*/] == *uParam1)
		{
			func_159(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_159(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_90575[iParam0 /*98*/] == *uParam1)
		{
			func_159(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_90575[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_159(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_161(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x465E33AAA0C48359(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("buffalo3") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("gauntlet2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_167())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4BE9DEC2073C9C84())
		{
			if (unk_0x0486BD07D3026E5E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x06C32703437E5BC3(Var1.f_0))
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
		if ((((!func_166() && !func_165()) && !func_164()) && !func_163()) && !func_167())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_164())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_162(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2457144)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_4998 && !Global_262145.f_10806) && iVar1 < Global_262145.f_10807)
		{
			iVar0 = 0;
		}
	}
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11360 && iVar1 < Global_262145.f_11366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11356 && iVar1 < Global_262145.f_11362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11357 && iVar1 < Global_262145.f_11363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11358 && iVar1 < Global_262145.f_11364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11359 && iVar1 < Global_262145.f_11365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11361 && iVar1 < Global_262145.f_11367)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_163()
{
	return 0;
}

int func_164()
{
	return 1;
}

int func_165()
{
	return 1;
}

int func_166()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					uVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&uVar0, 0);
					unk_0x1F071A4E400AAE0A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	if (Global_90575[iParam0 /*98*/] == joaat("blimp") || Global_90575[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("submersible") || Global_90575[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("burrito2") || Global_90575[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("entityxf") && !Global_100976.f_7719.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("cheetah") && !Global_100976.f_7719.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("policeb") && !Global_100976.f_7719.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("ztype") && !Global_100976.f_7719.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("polmav") && !Global_100976.f_7719.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("jb700") && !Global_100976.f_7719.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("monroe") && !Global_100976.f_7719.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_90575[iParam0 /*98*/] == joaat("gauntlet") && !Global_100976.f_7719.f_330[80 /*6*/]) && !Global_100976.f_7719.f_330[81 /*6*/]) && !Global_100976.f_7719.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_169(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_170(int iParam0, var uParam1, float fParam2)
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
			return func_170(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_170(8, uParam1, fParam2);
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

var func_171()
{
	var uVar0;
	
	func_181(&uVar0, unk_0x4C374828FD653ECC());
	func_180(&uVar0, unk_0x44AD07D9D178F321());
	func_179(&uVar0, unk_0x342FDFC48311CCCE());
	func_174(&uVar0, unk_0x818078CDB71D3E9C());
	func_173(&uVar0, unk_0x49D01BEA8D03E892());
	func_172(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_172(var uParam0, int iParam1)
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

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 1 || iParam1 > func_175(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_175(int iParam0, int iParam1)
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

var func_176(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_177(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(var uParam0)
{
	return uParam0 & 15;
}

void func_179(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_182(var uParam0, int iParam1)
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
		iVar1 = Global_100976.f_17167[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_170(Global_100976.f_17167[iVar0], &Var2, &fVar5))
			{
				Global_100976.f_17167[iVar0] = 318;
				func_183(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88829[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_9 = 0f;
				Global_88829[iVar0 /*29*/].f_12 = 0f;
				Global_88829[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_10 = 0f;
				Global_88829[iVar0 /*29*/].f_13 = 0f;
				Global_88829[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_11 = 0f;
				Global_88829[iVar0 /*29*/].f_14 = 0f;
				Global_88829[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_26 = 0f;
				Global_88829[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_27 = 0f;
				Global_88829[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_183(var uParam0)
{
	*uParam0 = -15;
}

void func_184(int iParam0)
{
	Global_36251 = (unk_0x693EBB4F13506457() + iParam0);
}

int func_185()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

int func_186(var uParam0, bool bParam1, bool bParam2, int iParam3)
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
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!unk_0x2DC9BA2299B45EA6((*uParam0)[uParam0->f_7]) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && (*uParam0)[uParam0->f_7] != unk_0xC8B93D94F8954288())
	{
		if (!bParam2)
		{
			if ((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) && !unk_0x79E944054F6C9DCD(unk_0xC8B93D94F8954288())) && !unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288()))
			{
				unk_0xBA73099E237C7E5E(unk_0xC8B93D94F8954288());
			}
			else
			{
				unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
			}
			if ((unk_0x770AAB67BDD9C729((*uParam0)[uParam0->f_7]) && !unk_0x79E944054F6C9DCD((*uParam0)[uParam0->f_7])) && !unk_0xC0AE63CA97F3FF6A((*uParam0)[uParam0->f_7]))
			{
				unk_0xBA73099E237C7E5E((*uParam0)[uParam0->f_7]);
			}
			else
			{
				unk_0x5124C5FA52D2AF3E((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = unk_0xC8B93D94F8954288();
		iVar1 = func_93();
		if (!uParam0->f_23)
		{
			func_235(iVar0, 0);
		}
		func_233(iVar1, &iVar0);
		unk_0xC778754E36F3FFD6(iVar0, 32, 1);
		unk_0xC778754E36F3FFD6(iVar0, 250, 1);
		iVar2 = func_232(uParam0->f_7);
		func_235((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((unk_0xBBDA792448DB5A89(unk_0xD3A4099D2845F152((*uParam0)[uParam0->f_7])) - 100f) / (unk_0xBBDA792448DB5A89(unk_0x5A333ED85C979D34((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (func_96(unk_0xC8B93D94F8954288()))
		{
			case 0:
				if (unk_0xC0F36A8AA640399C("BulletTime"))
				{
					unk_0xEF8DA481DD536EEE("BulletTime");
				}
				if (unk_0xC0F36A8AA640399C("BulletTimeOut"))
				{
					unk_0xEF8DA481DD536EEE("BulletTimeOut");
				}
				break;
			
			case 1:
				if (unk_0xC0F36A8AA640399C("DrivingFocus"))
				{
					unk_0xEF8DA481DD536EEE("DrivingFocus");
				}
				if (unk_0xC0F36A8AA640399C("DrivingFocusOut"))
				{
					unk_0xEF8DA481DD536EEE("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (unk_0xC0F36A8AA640399C("REDMIST"))
				{
					unk_0xEF8DA481DD536EEE("REDMIST");
				}
				if (unk_0xC0F36A8AA640399C("REDMISTOut"))
				{
					unk_0xEF8DA481DD536EEE("REDMISTOut");
				}
				break;
		}
		if (func_95(func_93()))
		{
			if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
			{
				unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
			}
		}
		unk_0x0EAD863A20C10DC6(unk_0xA34E7C2A5118D638(), (*uParam0)[uParam0->f_7], bParam2, 0);
		unk_0x68A38902ADFD05FE(3);
		unk_0x68A38902ADFD05FE(13);
		if (iParam3 & 1 != 0)
		{
			unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 210, 0);
		}
		if (func_231(0) || func_231(3))
		{
			if (Global_17118.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (unk_0xDCC86F723E82125E(Global_82191[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_82191[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_82227[Global_69586.f_109[iVar5 /*4*/] /*34*/]), 64);
						unk_0xDA588E65C1932E9F(unk_0x7CBED6EFED40E7EB(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17118.f_13 = 0;
		uParam0->f_5 = func_230(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = func_230(iVar2);
		uParam0->f_7 = 4;
		iVar22 = unk_0xC8B93D94F8954288();
		unk_0x872B541D7953A19B(unk_0xC8B93D94F8954288(), 1, 0);
		func_229(iVar22);
		unk_0xD7C03E23D4D91466(iVar22, 0, 0);
		if (fVar3 < 25f && !unk_0xECF9CC3305D3E1C5(unk_0xC8B93D94F8954288()))
		{
			unk_0xFE93132CC8944C8C(unk_0xC8B93D94F8954288(), unk_0xF2DB717A73826179((((25f / 100f) * (unk_0xBBDA792448DB5A89(unk_0x5A333ED85C979D34(unk_0xC8B93D94F8954288())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				unk_0x872B541D7953A19B(iVar0, 1, 0);
				func_229(iVar0);
				unk_0xD7C03E23D4D91466(iVar0, 0, 0);
				unk_0x1D9B9237CA276DAD(iVar0, 0, 0);
			}
		}
		else if (unk_0x95CCECA3948CFE7B(iVar0))
		{
			sVar24 = unk_0xFBF56D2226163A9E(iVar0, &uVar23);
			if (!unk_0x544AEDB4A15228FF(sVar24))
			{
				if (!unk_0xF8D041B05C3D1FD4(sVar24, unk_0xC4E68AF0B559FAC4()))
				{
					unk_0xFD816D0E738EB817(iVar0, 0, 1);
				}
				unk_0x26B3B761603F5232(&iVar0);
			}
		}
		Global_88721 = 1;
		func_227(unk_0xC8B93D94F8954288());
		func_226();
		func_225(iVar2);
		func_216();
		func_210(iVar2);
		func_193(func_208(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 145, 0));
		unk_0x89334D2B9A039830(unk_0xA34E7C2A5118D638());
		unk_0xCDBFAADCD2D0674F(unk_0xC8B93D94F8954288(), 0);
		unk_0xF4D417768DCC5DED(unk_0xC8B93D94F8954288(), 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0xDD68D667C935E884(unk_0xA34E7C2A5118D638(), func_312(67));
		}
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x6FBE015148D1ABB0(unk_0xA34E7C2A5118D638(), func_312(68));
		}
		func_190(iVar2, &iVar22);
		if (((func_307(0) || func_307(3)) || func_307(2)) || func_307(4))
		{
			unk_0xC778754E36F3FFD6(iVar22, 32, 0);
			unk_0xC778754E36F3FFD6(iVar22, 250, 0);
		}
		else
		{
			unk_0xC778754E36F3FFD6(iVar22, 32, 1);
			unk_0xC778754E36F3FFD6(iVar22, 250, 1);
		}
		if (!func_189())
		{
			func_187();
		}
		Global_88358 = 0;
		return 1;
	}
	else
	{
		if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
		}
		if (unk_0x2DC9BA2299B45EA6((*uParam0)[uParam0->f_7]))
		{
		}
		if (unk_0xC8B93D94F8954288() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_187()
{
	if (Global_88751)
	{
		func_94();
		unk_0x42C3E42E390F7C44(func_188(Global_100976.f_1770.f_539.f_3549));
	}
	else
	{
		unk_0x42C3E42E390F7C44("");
	}
}

char* func_188(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

bool func_189()
{
	return Global_17116;
}

void func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_191(4, *iParam1);
			func_191(7, *iParam1);
			func_191(8, *iParam1);
			func_191(11, *iParam1);
			break;
		
		case 1:
			if (Global_100976.f_7719.f_330[2 /*6*/])
			{
				func_191(4, *iParam1);
			}
			func_191(7, *iParam1);
			func_191(8, *iParam1);
			func_191(11, *iParam1);
			if (Global_100976.f_7719.f_99.f_58[126])
			{
				func_191(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_100976.f_7719.f_330[20 /*6*/])
			{
				func_191(4, *iParam1);
			}
			func_191(7, *iParam1);
			func_191(8, *iParam1);
			func_191(11, *iParam1);
			break;
	}
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0x95CCECA3948CFE7B(iParam1))
	{
		return;
	}
	if (func_192(iParam0, iParam1))
	{
		return;
	}
	if (Global_34823[iParam0 /*31*/].f_24 < 5)
	{
		Global_34823[iParam0 /*31*/].f_25[Global_34823[iParam0 /*31*/].f_24] = iParam1;
		Global_34823[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_34823[iParam0 /*31*/].f_25[iVar0];
			if (!unk_0x95CCECA3948CFE7B(iVar1) || unk_0x2DC9BA2299B45EA6(iVar1))
			{
				Global_34823[iParam0 /*31*/].f_25[iVar0] = iParam1;
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

int func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34823[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34823[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_193(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x59A0729D503ED758(&(Global_31488[(38 / 32)]), (38 % 32));
			func_194(38, 0);
			unk_0x59A0729D503ED758(&(Global_31488[(41 / 32)]), (41 % 32));
			func_194(41, 0);
			unk_0x59A0729D503ED758(&(Global_31488[(43 / 32)]), (43 % 32));
			func_194(43, 0);
			unk_0x59A0729D503ED758(&(Global_31488[(42 / 32)]), (42 % 32));
			func_194(42, 0);
			unk_0x59A0729D503ED758(&(Global_31488[(44 / 32)]), (44 % 32));
			func_194(44, 0);
			break;
		
		case 1:
			unk_0x59A0729D503ED758(&(Global_31488[(51 / 32)]), (51 % 32));
			func_194(51, 0);
			break;
		
		case 2:
			unk_0x59A0729D503ED758(&(Global_31488[(51 / 32)]), (51 % 32));
			func_194(51, 0);
			break;
		
		case 3:
			unk_0x59A0729D503ED758(&(Global_31488[(53 / 32)]), (53 % 32));
			func_194(53, 0);
			break;
		
		case 4:
			unk_0x59A0729D503ED758(&(Global_31488[(81 / 32)]), (81 % 32));
			func_194(81, 0);
			unk_0x59A0729D503ED758(&(Global_31488[(82 / 32)]), (82 % 32));
			func_194(82, 0);
			break;
		
		case 5:
			unk_0x59A0729D503ED758(&(Global_31488[(47 / 32)]), (47 % 32));
			func_194(47, 0);
			unk_0x59A0729D503ED758(&(Global_31488[(50 / 32)]), (50 % 32));
			func_194(50, 0);
			break;
		
		case 6:
			unk_0x59A0729D503ED758(&(Global_31488[(50 / 32)]), (50 % 32));
			func_194(50, 0);
			break;
	}
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_69317)
		{
			iVar0 = Global_2426867.f_74[iParam0];
		}
		else
		{
			iVar0 = Global_100976.f_5895[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xDCC86F723E82125E(Global_31488[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x59A0729D503ED758(&(Global_31497[(iParam0 / 32)]), (iParam0 % 32));
				Global_31960[iParam0] = iParam1;
			}
			else if (Global_69317)
			{
				Global_2426867.f_74[iParam0] = iParam1;
			}
			else
			{
				Global_100976.f_5895[iParam0] = iParam1;
			}
			unk_0x59A0729D503ED758(&(Global_31488[(iParam0 / 32)]), (iParam0 % 32));
			func_196(iParam0);
			if (unk_0xDCC86F723E82125E(Global_31488[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_195(iParam0);
			}
		}
	}
}

void func_195(int iParam0)
{
	if (!unk_0xDCC86F723E82125E(Global_32431.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x59A0729D503ED758(&(Global_32431.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_32431[Global_32431.f_227] = iParam0;
		Global_32431.f_227++;
	}
}

void func_196(int iParam0)
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
	
	if (!func_205())
	{
		return;
	}
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return;
	}
	Var0 = { func_204(iParam0) };
	if (unk_0xDCC86F723E82125E(Var0.f_4, 2))
	{
		func_201(iParam0, &Var0);
	}
	if (!unk_0x42277337DA18A497(Var0.f_5))
	{
		if (unk_0x308528B5CF35F306())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x4F982ED5336EA899(Var0, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 1);
	if ((unk_0xDCC86F723E82125E(Global_31497[(iParam0 / 32)], (iParam0 % 32)) && Global_31960[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0x77621132305B133B(&(Global_31497[(iParam0 / 32)]), (iParam0 % 32));
		Global_31506[iParam0] = 0;
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("startup_positioning")) == 0)
	{
		if (unk_0xDCC86F723E82125E(Global_31733[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_91158.f_294 == 0)
				{
					if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
					{
						Global_91158.f_294 = unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288());
					}
				}
				iVar11 = Global_91158.f_294;
				iVar12 = unk_0x2F748CE5313AA2BB(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0x59A0729D503ED758(&(Global_31497[(iParam0 / 32)]), (iParam0 % 32));
					Global_31960[iParam0] = 3;
					unk_0x59A0729D503ED758(&(Global_31488[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x77621132305B133B(&(Global_31733[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xDCC86F723E82125E(Global_31497[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31960[iParam0];
	}
	else if (unk_0xDCC86F723E82125E(Var0.f_4, 0))
	{
		if (Global_100976.f_7719)
		{
			iVar9 = func_198(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_307(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xDCC86F723E82125E(Var0.f_4, 1) && unk_0xCBC8FFE55DC722B5(joaat("ambient_solomon")) == 0)
	{
		if (func_197())
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
		iVar9 = Global_100976.f_5895[iParam0];
	}
	if (Global_32187[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0xDCC86F723E82125E(Global_31488[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xDCC86F723E82125E(Global_31497[(iParam0 / 32)], (iParam0 % 32)) || (Global_31506[iParam0] == 0 && Global_31960[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_31487)
		{
		}
		else
		{
			if (!unk_0x42277337DA18A497(Var0.f_5))
			{
				unk_0xD4C94FD09D793556(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0xDCC86F723E82125E(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0xA3C5926D6E5619AE(unk_0x9FD246DA4BBA0B52(Var0.f_5)) <= 0.015f)
					{
						iVar14 = unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288());
						iVar15 = unk_0x2F748CE5313AA2BB(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x130F0C5AE7B52B7A(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x130F0C5AE7B52B7A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x130F0C5AE7B52B7A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x130F0C5AE7B52B7A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x130F0C5AE7B52B7A(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x130F0C5AE7B52B7A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x130F0C5AE7B52B7A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x6DE663606BFE82A2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x130F0C5AE7B52B7A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0x77621132305B133B(&(Global_31488[(iParam0 / 32)]), (iParam0 % 32));
			Global_32187[iParam0] = iVar9;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_31497[(iParam0 / 32)], (iParam0 % 32)) && Global_31960[iParam0] != 2)
	{
		unk_0x59A0729D503ED758(&(Global_31488[(iParam0 / 32)]), (iParam0 % 32));
		func_195(iParam0);
		if (Global_31506[iParam0] < 2)
		{
			Global_31506[iParam0]++;
		}
	}
}

int func_197()
{
	if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
	{
		return 0;
	}
	switch (func_93())
	{
		case 0:
			if (Global_100976.f_7719.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_100976.f_7719.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_100976.f_7719.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = func_93();
	if (func_199(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xDCC86F723E82125E(Global_100976.f_5863[5], 0) || unk_0xDCC86F723E82125E(Global_100976.f_5863[6], 0))
			{
				return 0;
			}
		}
		if (func_95(iVar0))
		{
			if (unk_0xDCC86F723E82125E(Global_86466[5], iVar0))
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
				if (unk_0xDCC86F723E82125E(Global_100976.f_5863[0], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0xDCC86F723E82125E(Global_86466[0], iVar0))
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
				if (unk_0xDCC86F723E82125E(Global_100976.f_5863[5], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0xDCC86F723E82125E(Global_86466[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xDCC86F723E82125E(Global_100976.f_5863[6], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0xDCC86F723E82125E(Global_86466[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xDCC86F723E82125E(Global_100976.f_5863[2], 0))
				{
					return 0;
				}
				if (func_95(iVar0))
				{
					if (unk_0xDCC86F723E82125E(Global_86466[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xDCC86F723E82125E(Global_100976.f_5863[1], 0))
				{
					return 0;
				}
				if (func_95(iVar0))
				{
					if (unk_0xDCC86F723E82125E(Global_86466[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xDCC86F723E82125E(Global_100976.f_5863[3], 0))
				{
					return 0;
				}
			}
			if (func_95(iVar0))
			{
				if (unk_0xDCC86F723E82125E(Global_86466[3], iVar0))
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

int func_199(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
			{
				iVar0 = unk_0x6D5BB810CC209E15(func_200(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 1)));
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

var func_200(var uParam0)
{
	return uParam0;
}

void func_201(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDCC86F723E82125E(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_171();
	iVar1 = func_203(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_202(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_100976.f_5895[iParam0] = 0;
						unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 12f)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 12f)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_202(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_100976.f_5895[iParam0] = 0;
						unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 12f)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 12f)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_202(iParam0))
			{
				if ((unk_0xCBC8FFE55DC722B5(joaat("jewelry_heist")) == 0 && unk_0xCBC8FFE55DC722B5(joaat("jewelry_setup1")) == 0) && !Global_100976.f_7719.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_100976.f_5895[iParam0] = 0;
							unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_100976.f_7719.f_99.f_58[4])
				{
					Global_100976.f_5895[iParam0] = 0;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else if (Global_100976.f_7719.f_99.f_58[4])
			{
				Global_100976.f_5895[iParam0] = 1;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			else if (unk_0xCBC8FFE55DC722B5(joaat("jewelry_heist")) == 0 && unk_0xCBC8FFE55DC722B5(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 18f)
					{
						Global_100976.f_5895[iParam0] = 1;
						unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 18f)
					{
						Global_100976.f_5895[iParam0] = 1;
						unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_202(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_100976.f_5895[iParam0] = 0;
						unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 40f)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), *uParam1) >= 40f)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_202(iParam0))
			{
				Global_100976.f_5895[iParam0] = 1;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_202(iParam0))
			{
				if (unk_0xCBC8FFE55DC722B5(joaat("assassin_valet")) == 0)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else if (unk_0xCBC8FFE55DC722B5(joaat("assassin_valet")) > 0)
			{
				Global_100976.f_5895[iParam0] = 0;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0xCBC8FFE55DC722B5(Global_82227[70 /*34*/].f_6) == 0)
			{
				if (!func_202(iParam0))
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0xCBC8FFE55DC722B5(joaat("omega2")) == 0)
			{
				if (!func_202(iParam0))
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_202(iParam0) && unk_0xCBC8FFE55DC722B5(Global_82227[26 /*34*/].f_6) == 0)
			{
				Global_100976.f_5895[iParam0] = 1;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
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
			if (!func_202(iParam0))
			{
				if (unk_0xCBC8FFE55DC722B5(Global_82227[43 /*34*/].f_6) == 0)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_202(iParam0))
			{
				Global_100976.f_5895[iParam0] = 1;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_202(iParam0))
			{
				if (unk_0xCBC8FFE55DC722B5(Global_82227[93 /*34*/].f_6) > 0)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_202(iParam0))
			{
				Global_100976.f_5895[iParam0] = 1;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_202(iParam0))
			{
				if (unk_0xCBC8FFE55DC722B5(Global_82227[8 /*34*/].f_6) == 0 && unk_0xCBC8FFE55DC722B5(Global_82227[10 /*34*/].f_6) == 0)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_202(iParam0))
			{
				if (unk_0xCBC8FFE55DC722B5(Global_82227[47 /*34*/].f_6) == 0)
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0xCBC8FFE55DC722B5(Global_82227[70 /*34*/].f_6) == 0)
			{
				if (!func_202(iParam0))
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
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
			if (unk_0xCBC8FFE55DC722B5(Global_82227[48 /*34*/].f_6) == 0)
			{
				if (!func_202(iParam0))
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0xCBC8FFE55DC722B5(Global_82227[39 /*34*/].f_6) == 0)
			{
				if (!func_202(iParam0))
				{
					Global_100976.f_5895[iParam0] = 1;
					unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_202(iParam0))
			{
				Global_100976.f_5895[iParam0] = 1;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_202(iParam0))
			{
				Global_100976.f_5895[iParam0] = 1;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_202(iParam0))
			{
				Global_100976.f_5895[iParam0] = 0;
				unk_0x130F0C5AE7B52B7A(uParam1->f_5, Global_100976.f_5895[iParam0], 1, 1);
			}
			break;
	}
}

bool func_202(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_204(iParam0) };
	iVar7 = unk_0x190E6832821AF105(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_203(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

struct<7> func_204(int iParam0)
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 0);
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
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x59A0729D503ED758(&(Var0.f_4), 3);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0x59A0729D503ED758(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0x59A0729D503ED758(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0x59A0729D503ED758(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0x59A0729D503ED758(&(Var0.f_4), 1);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0x59A0729D503ED758(&(Var0.f_4), 3);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
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
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0x59A0729D503ED758(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_205()
{
	if ((func_207() == -1 || func_207() == 999) && !func_206() == 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	return Global_25116;
}

int func_207()
{
	return Global_25115;
}

int func_208(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86477[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86477[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_209(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x4F982ED5336EA899(Param0, Global_86477[iVar0 /*10*/].f_3, 1);
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

bool func_209(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_5863[iParam0], 0);
}

void func_210(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_211(iParam0, iVar0);
		iVar0++;
	}
}

void func_211(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_215(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = func_212(iVar3, -1, 0);
	}
	else
	{
		unk_0x5F0618A5FDAD55C4(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x41AE51F2B56BFA08(unk_0xA34E7C2A5118D638(), fVar1);
			break;
		
		case 7:
			if (unk_0xCBC8FFE55DC722B5(joaat("armenian3")) != 0 || unk_0xCBC8FFE55DC722B5(joaat("trevor3")) != 0)
			{
				Global_88722 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0xEF1F43AFAA25128D(unk_0xA34E7C2A5118D638(), fVar1);
				unk_0x3D2D864FFEB146A7(unk_0xA34E7C2A5118D638(), fVar1);
				unk_0xBC5CE29E02D3177A(unk_0xA34E7C2A5118D638(), fVar1);
			}
			break;
	}
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2466774[iParam0 /*5*/][func_213(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_213(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_214();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_214()
{
	return Global_1312746;
}

void func_215(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_216()
{
	struct<50> Var0;
	
	if ((unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) || !func_95(func_93())) || !func_222())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_218(unk_0xC8B93D94F8954288(), &Var0, 1);
	func_217(1306, Var0[0], -1, 1);
	func_217(1307, Var0[1], -1, 1);
	func_217(1308, Var0[2], -1, 1);
	func_217(1309, Var0[3], -1, 1);
	func_217(1310, Var0[4], -1, 1);
	func_217(1311, Var0[5], -1, 1);
	func_217(1312, Var0[6], -1, 1);
	func_217(1313, Var0[7], -1, 1);
	func_217(1314, Var0[8], -1, 1);
	func_217(1315, Var0[9], -1, 1);
	func_217(1316, Var0[10], -1, 1);
	func_217(1317, Var0[11], -1, 1);
	func_217(1318, Var0.f_13[0], -1, 1);
	func_217(1319, Var0.f_13[1], -1, 1);
	func_217(1320, Var0.f_13[2], -1, 1);
	func_217(1321, Var0.f_13[3], -1, 1);
	func_217(1322, Var0.f_13[4], -1, 1);
	func_217(1323, Var0.f_13[5], -1, 1);
	func_217(1324, Var0.f_13[6], -1, 1);
	func_217(1325, Var0.f_13[7], -1, 1);
	func_217(1326, Var0.f_13[8], -1, 1);
	func_217(1327, Var0.f_13[9], -1, 1);
	func_217(1328, Var0.f_13[10], -1, 1);
	func_217(1329, Var0.f_13[11], -1, 1);
	func_217(1330, Var0.f_26[0], -1, 1);
	func_217(1331, Var0.f_26[1], -1, 1);
	func_217(1332, Var0.f_26[2], -1, 1);
	func_217(1333, Var0.f_26[3], -1, 1);
	func_217(1334, Var0.f_26[4], -1, 1);
	func_217(1335, Var0.f_26[5], -1, 1);
	func_217(1336, Var0.f_26[6], -1, 1);
	func_217(1337, Var0.f_26[7], -1, 1);
	func_217(1338, Var0.f_26[8], -1, 1);
	func_217(1339, Var0.f_26[9], -1, 1);
	func_217(1340, Var0.f_26[10], -1, 1);
	func_217(1341, Var0.f_26[11], -1, 1);
	func_217(1342, Var0.f_39[0], -1, 1);
	func_217(1343, Var0.f_39[1], -1, 1);
	func_217(1344, Var0.f_39[2], -1, 1);
	func_217(1345, Var0.f_39[3], -1, 1);
	func_217(1346, Var0.f_39[4], -1, 1);
	func_217(1347, Var0.f_39[5], -1, 1);
	func_217(1348, Var0.f_39[6], -1, 1);
	func_217(1349, Var0.f_39[7], -1, 1);
	func_217(1350, Var0.f_39[8], -1, 1);
	func_217(1351, Var0.f_49[0], -1, 1);
	func_217(1352, Var0.f_49[1], -1, 1);
	func_217(1353, Var0.f_49[2], -1, 1);
	func_217(1354, Var0.f_49[3], -1, 1);
	func_217(1355, Var0.f_49[4], -1, 1);
	func_217(1356, Var0.f_49[5], -1, 1);
	func_217(1357, Var0.f_49[6], -1, 1);
	func_217(1358, Var0.f_49[7], -1, 1);
	func_217(1359, Var0.f_49[8], -1, 1);
	func_217(1360, func_93(), -1, 1);
	unk_0x11C18C0E7876C1D0(joaat("clo_stored_initial"), 1, 1);
	Global_100976.f_1770.f_539.f_3543 = 1;
}

var func_217(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_214();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x9AAB521F2B239BE6((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x9AAB521F2B239BE6((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x9AAB521F2B239BE6((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x9AAB521F2B239BE6((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xBB57E662FF623914((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x9AAB521F2B239BE6((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xBB57E662FF623914((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x9AAB521F2B239BE6((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x9AAB521F2B239BE6((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x9AAB521F2B239BE6((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x9AAB521F2B239BE6((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x9AAB521F2B239BE6((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x9AAB521F2B239BE6((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7449 && iParam0 < 7457)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 7449), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7449) - unk_0x9AAB521F2B239BE6((iParam0 - 7449)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x9AAB521F2B239BE6((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x897C99636EB0DF1E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_218(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = func_96(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_221(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_220(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_95(iVar0))
		{
			uParam1->f_59 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xBBAE3E0C60A8AD4B() && unk_0x6D5BB810CC209E15(iParam0) == unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			if (func_219(161, -1))
			{
				uParam1->f_59 = func_212(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_212(742, Global_69176, 0);
			}
			uParam1->f_60 = func_212(743, Global_69176, 0);
			uParam1->f_61 = func_212(744, Global_69176, 0);
		}
		if (unk_0xBBAE3E0C60A8AD4B() && iParam0 == unk_0xC8B93D94F8954288())
		{
			if (func_219(161, -1))
			{
				uParam1->f_59 = func_212(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_212(742, Global_69176, 0);
			}
		}
	}
}

int func_219(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_213(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_220(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xFEBA5661B4F1602A(iParam0, iParam1);
		*uParam3 = unk_0x92A7B7367F7CD521(iParam0, iParam1);
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
				if (unk_0x01857CD66B677E58(iParam0) && unk_0x717460B5CC97C071(iParam0) != -1)
				{
					*uParam2 = unk_0x717460B5CC97C071(iParam0);
					*uParam3 = unk_0x8C6B46522DE9188B(iParam0);
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

void func_221(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x3A59BCC40A12FD28(iParam0, iParam1);
		*uParam3 = unk_0x268F3DC177BF5D38(iParam0, iParam1);
		*uParam4 = unk_0x8005AF704B3AAC41(iParam0, iParam1);
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

int func_222()
{
	if (func_224() && func_223(0))
	{
		return 1;
	}
	return 0;
}

var func_223(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_224()
{
	return func_223(func_214() + 1);
}

void func_225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x6CCF5F545348D54E(255, 1166638144, joaat("player"));
			unk_0x6CCF5F545348D54E(2, joaat("player"), -1865950624);
			unk_0x6CCF5F545348D54E(255, -1865950624, joaat("player"));
			unk_0x6CCF5F545348D54E(1, Global_86442, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86442);
			unk_0x6CCF5F545348D54E(1, Global_86443, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86443);
			unk_0x6CCF5F545348D54E(1, Global_86444, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86444);
			break;
		
		case 1:
			unk_0x6CCF5F545348D54E(1, 1166638144, joaat("player"));
			unk_0x6CCF5F545348D54E(2, joaat("player"), -1865950624);
			unk_0x6CCF5F545348D54E(255, -1865950624, joaat("player"));
			unk_0x6CCF5F545348D54E(1, Global_86442, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86442);
			unk_0x6CCF5F545348D54E(1, Global_86443, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86443);
			unk_0x6CCF5F545348D54E(1, Global_86444, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86444);
			break;
		
		case 2:
			unk_0x6CCF5F545348D54E(255, 1166638144, joaat("player"));
			unk_0x6CCF5F545348D54E(5, joaat("player"), -1865950624);
			unk_0x6CCF5F545348D54E(5, -1865950624, joaat("player"));
			unk_0x6CCF5F545348D54E(1, Global_86442, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86442);
			unk_0x6CCF5F545348D54E(1, Global_86443, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86443);
			unk_0x6CCF5F545348D54E(1, Global_86444, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), Global_86444);
			break;
		
		default:
			break;
	}
}

void func_226()
{
	var uVar0;
	int iVar1;
	
	func_94();
	uVar0 = unk_0xA180DA46619DA499();
	if (unk_0x6B4865E08E90ACC5(uVar0))
	{
		iVar1 = Global_100976.f_1770.f_539.f_3549;
		if (func_307(14))
		{
			iVar1 = func_96(unk_0xC8B93D94F8954288());
		}
		if (iVar1 == 0)
		{
			unk_0x8755DAC584918BF9(uVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			unk_0x8755DAC584918BF9(uVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			unk_0x8755DAC584918BF9(uVar0, "BLIP_TREV");
		}
		else
		{
			unk_0x8755DAC584918BF9(uVar0, "BLIP_PLAYER");
		}
	}
}

void func_227(int iParam0)
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
		iVar2 = func_228(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = unk_0x84C891BE623471ED(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (unk_0xCE69853977E75052(iParam0, iVar3) == -1)
				{
					if (unk_0x7063369AF8640406(iParam0, iVar3, &uVar1))
					{
						unk_0xD6586258E56BBD46(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0xBF63A843F5FFBEF2();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0xE8067788A3D17AD6(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0xCE69853977E75052(iParam0, iVar3) == -1)
			{
				if (unk_0x7063369AF8640406(iParam0, iVar3, &uVar1))
				{
					unk_0xD6586258E56BBD46(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_228(int iParam0)
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

void func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam0 == unk_0xC8B93D94F8954288() && unk_0x5A333ED85C979D34(iParam0) == 200)
		{
			unk_0x80A6D265A0853CED(iParam0, unk_0xF2DB717A73826179((IntToFloat(unk_0x5A333ED85C979D34(iParam0)) * Global_262145.f_104)));
		}
		if (Global_100976.f_1770.f_539.f_290[iVar0] <= 0f)
		{
			Global_100976.f_1770.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_100976.f_1770.f_539.f_290[iVar0] <= 10f)
		{
			Global_100976.f_1770.f_539.f_290[iVar0] = 10f;
		}
		unk_0xFE93132CC8944C8C(iParam0, unk_0xF2DB717A73826179((((Global_100976.f_1770.f_539.f_290[iVar0] / 100f) * (unk_0xBBDA792448DB5A89(unk_0x5A333ED85C979D34(iParam0)) - 100f)) + 100f)));
	}
}

int func_230(int iParam0)
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

int func_231(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_232(int iParam0)
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

void func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_234(4, *iParam1, 0);
			func_234(7, *iParam1, 0);
			func_234(8, *iParam1, 0);
			func_234(11, *iParam1, 0);
			break;
		
		case 1:
			func_234(4, *iParam1, 0);
			func_234(7, *iParam1, 0);
			func_234(8, *iParam1, 0);
			func_234(11, *iParam1, 0);
			if (Global_100976.f_7719.f_99.f_58[126])
			{
				func_234(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_234(4, *iParam1, 0);
			func_234(7, *iParam1, 0);
			func_234(8, *iParam1, 0);
			func_234(11, *iParam1, 0);
			break;
	}
}

void func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0x95CCECA3948CFE7B(iParam1))
		{
			return;
		}
	}
	if (Global_34823[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_34823[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_34823[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_34823[iParam0 /*31*/].f_25[iVar0];
			Global_34823[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_34823[iParam0 /*31*/].f_25[iVar0])
		{
			Global_34823[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_34823[iParam0 /*31*/].f_24 = (Global_34823[iParam0 /*31*/].f_24 - 1);
	}
}

void func_235(int iParam0, bool bParam1)
{
	func_246(iParam0);
	func_241(iParam0, bParam1);
	func_240(iParam0);
	func_239(iParam0);
	func_238(iParam0);
	func_237(iParam0);
	func_236(iParam0);
}

void func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam0 == unk_0xC8B93D94F8954288())
		{
			Global_100976.f_1770.f_539.f_1556[iVar0] = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
		}
	}
}

void func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		Global_100976.f_1770.f_539.f_1546[iVar0 /*3*/] = { unk_0x3A5C3B481EEBA95F(iParam0) };
	}
}

void func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3)
		{
			if (unk_0xC8DAE7AE33B529B0() == 8)
			{
				return;
			}
		}
		Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/] = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
		Global_100976.f_1770.f_539.f_1538[iVar0] = unk_0x59DD203239FBDCAD(iParam0);
		Global_100976.f_1770.f_539.f_1542[iVar0] = unk_0x3A1056BCF85EF04F(iParam0);
		if (Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/] >= 8000f)
		{
			Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/] = 7500f;
		}
		else if (Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/] <= -8000f)
		{
			Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/] = -7500f;
		}
		if (Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_100976.f_1770.f_539.f_1528[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		Global_100976.f_1770.f_539.f_294[iVar0] = unk_0x590AD2E91FB5951F(iParam0);
	}
}

void func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		Global_100976.f_1770.f_539.f_290[iVar0] = (((unk_0xBBDA792448DB5A89(unk_0xD3A4099D2845F152(iParam0)) - 100f) / (unk_0xBBDA792448DB5A89(unk_0x5A333ED85C979D34(iParam0)) - 100f)) * 100f);
	}
}

void func_241(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam0 == unk_0xC8B93D94F8954288())
		{
			func_242(iParam0, &(Global_100976.f_1770.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x68979DA3F0A45AD3(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xCF1225B677633282();
					if (Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_100976.f_1770.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xF47D44C23C049FFF(unk_0xA34E7C2A5118D638(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x071958EFED9481F5(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x071958EFED9481F5(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x071958EFED9481F5(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_242(int iParam0, var uParam1)
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
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
			iVar3 = func_228(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x84C891BE623471ED(iParam0, func_228(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_244(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x961525D327D920F6(iParam0, Var4.f_0, iVar2))
						{
							unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_244(Var4.f_0, iVar1);
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
		iVar8 = unk_0xBF63A843F5FFBEF2();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xE8067788A3D17AD6(iVar7, &Var9) && !func_243(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x06C32703437E5BC3(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x54B3723DF8B16C85(iVar7))
					{
						if (unk_0x81718480430D1749(iVar7, iVar1, &Var48))
						{
							if (unk_0x961525D327D920F6(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
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

int func_243(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
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
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_244(int iParam0, int iParam1)
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
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
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
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
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
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
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
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
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
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
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
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
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
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
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
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_245(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x54B3723DF8B16C85(iVar1))
					{
						if (unk_0x81718480430D1749(iVar1, iParam1, &Var41))
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

int func_245(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xBF63A843F5FFBEF2();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xE8067788A3D17AD6(iVar0, uParam1))
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

void func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (func_95(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		Global_100976.f_1770.f_539.f_1524[iVar0] = func_171();
	}
}

int func_247(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = uParam0->f_34[iParam1] == 2;
		if (func_230(func_93()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_24[iParam1] != 0) || ((func_251(iParam1) && func_248(iParam1)) && !uParam0->f_18[iParam1]))
			{
				if (!uParam0->f_23)
				{
					if (!unk_0x2DC9BA2299B45EA6((*uParam0)[iParam1]) || bVar0)
					{
						if (uParam0->f_34[iParam1] != 1 && uParam0->f_34[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && (unk_0xBBAE3E0C60A8AD4B() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)) && !unk_0xDCC86F723E82125E(Global_88917.f_47, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((unk_0xDCC86F723E82125E(Global_100976.f_7719.f_2[27 /*3*/], 1) && !Global_3) && !func_3(0)))
			{
				if (uParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				uParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	uParam0->f_39 = 0;
	return 0;
}

int func_248(int iParam0)
{
	if (Global_100976.f_7719 || Global_3)
	{
		if (!Global_69317 || (Global_69317 && iParam0 != func_230(func_250())))
		{
			if (!func_249(func_232(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_249(int iParam0)
{
	if (func_95(iParam0))
	{
		if ((Global_100976.f_7719 || Global_3) || func_3(0))
		{
			return Global_100976.f_1770.f_539.f_1576[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_250()
{
	return Global_100976.f_1770.f_539.f_3551;
}

int func_251(int iParam0)
{
	if ((Global_100976.f_7719 || Global_3) || func_3(0))
	{
		if (!Global_69317 || (Global_69317 && iParam0 != func_230(func_250())))
		{
			if (((iParam0 == 0 && !func_312(115)) || (iParam0 == 1 && !func_312(116))) || (iParam0 == 2 && !func_312(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_100976.f_6322.f_136)
	{
		if (Global_100976.f_6322[iVar0 /*15*/] == iParam0)
		{
			if (Global_36247 != iVar0)
			{
				func_260(iVar0);
				func_257(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_6322.f_198)
	{
		if (Global_100976.f_6322.f_137[iVar0 /*15*/] == iParam0)
		{
			func_257(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_6322.f_650)
	{
		if (Global_100976.f_6322.f_199[iVar0 /*15*/] == iParam0)
		{
			func_256(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_6322.f_764)
	{
		if (Global_100976.f_6322.f_651[iVar0 /*14*/] == iParam0)
		{
			func_254(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_6322.f_866)
	{
		if (Global_100976.f_6322.f_765[iVar0 /*10*/] == iParam0)
		{
			func_253(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_253(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_100976.f_6322.f_866)
	{
		return;
	}
	if (Global_100976.f_6322.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_100976.f_6322.f_866 - 2))
		{
			Global_100976.f_6322.f_765[iVar0 /*10*/] = { Global_100976.f_6322.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_100976.f_6322.f_866 > 0)
	{
		Global_100976.f_6322.f_765[(Global_100976.f_6322.f_866 - 1) /*10*/] = { Var1 };
		Global_100976.f_6322.f_866 = (Global_100976.f_6322.f_866 - 1);
	}
}

void func_254(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_100976.f_6322.f_764)
	{
		return;
	}
	if (Global_100976.f_6322.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_100976.f_6322.f_764 - 2))
		{
			Global_100976.f_6322.f_651[iVar0 /*14*/] = { Global_100976.f_6322.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_100976.f_6322.f_764 > 0)
	{
		Global_100976.f_6322.f_651[(Global_100976.f_6322.f_764 - 1) /*14*/] = { Var1 };
		Global_100976.f_6322.f_764 = (Global_100976.f_6322.f_764 - 1);
	}
	func_255(0);
	func_255(1);
	func_255(2);
}

void func_255(int iParam0)
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
	while (iVar0 < Global_100976.f_6322.f_136)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_6322[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_100976.f_6322[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_100976.f_6322[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_100976.f_6322.f_764)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_6322.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_100976.f_6322.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_100976.f_6322.f_919[iParam0] = iVar1;
}

void func_256(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_100976.f_6322.f_650)
	{
		if (Global_100976.f_6322.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_100976.f_6322.f_650 - 2))
			{
				Global_100976.f_6322.f_199[iVar16 /*15*/] = { Global_100976.f_6322.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_100976.f_6322.f_199[(Global_100976.f_6322.f_650 - 1) /*15*/] = { Var0 };
			Global_100976.f_6322.f_650 = (Global_100976.f_6322.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_257(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_100976.f_6322.f_198)
	{
		if (Global_100976.f_6322.f_137[iVar15 /*15*/] == iParam0)
		{
			func_258(Global_100976.f_6322.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_100976.f_6322.f_198 - 2))
			{
				Global_100976.f_6322.f_137[iVar16 /*15*/] = { Global_100976.f_6322.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_100976.f_6322.f_137[(Global_100976.f_6322.f_198 - 1) /*15*/] = { Var0 };
			Global_100976.f_6322.f_198 = (Global_100976.f_6322.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_258(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_100976.f_32519[iParam0 /*29*/].f_19[Global_14413] == 1)
		{
			Global_100976.f_32519[iParam0 /*29*/].f_19[Global_14413] = 0;
			if (Global_100976.f_32519[iParam0 /*29*/].f_24[Global_14413] == 0)
			{
				iVar0 = Global_14413;
				func_259(iParam0, iVar0);
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

void func_259(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_100976.f_32519[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_100976.f_32519[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_100976.f_6322.f_136)
	{
		return;
	}
	iVar1 = Global_100976.f_6322[iParam0 /*15*/].f_2;
	if (Global_100976.f_6322.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_100976.f_6322.f_136 - 2))
		{
			Global_100976.f_6322[iVar0 /*15*/] = { Global_100976.f_6322[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_100976.f_6322.f_136 > 0)
	{
		Global_100976.f_6322[(Global_100976.f_6322.f_136 - 1) /*15*/] = { Var2 };
		Global_100976.f_6322.f_136 = (Global_100976.f_6322.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xDCC86F723E82125E(iVar1, iVar0))
		{
			func_255(iVar0);
		}
		iVar0++;
	}
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(func_262(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_100976.f_1.f_12[iVar0 /*6*/][iParam1];
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = func_66(func_262(iParam0));
	return Global_87468[iVar0 /*19*/];
}

void func_264(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_270(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_75())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_269(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_270(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_269(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_265(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_265(int iParam0)
{
	if (func_267(iParam0, 0))
	{
		return 1;
	}
	if (func_266())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_266()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_267(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_268(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_268(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_214();
	}
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_269(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_270(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

void func_271(bool bParam0)
{
	if (!bParam0)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_48))
		{
			unk_0xA278ECBE30D8AE4F(&iLocal_48);
		}
		unk_0xF3B031799E7F7016(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), 0);
	}
	else
	{
		unk_0x339146AE455BD9F6(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), 0);
		if (unk_0x0845149A26DABBA5(joaat("prop_laptop_01a")))
		{
			iLocal_48 = unk_0x7C62BC1EB194D985(joaat("prop_laptop_01a"), 707.3041f, -967.6456f, 30.376f, 1, 1, 0);
			unk_0x765E3FA65D011F03(iLocal_48, 183.14f);
			unk_0xB7A2078CD1C9A82F(iLocal_48, 1);
		}
	}
}

void func_272()
{
	if (func_312(6))
	{
		if (!func_3(0))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_41, 6))
			{
				unk_0x0B3F3AB0A340D234("AH_2_EXT_ALT", 8);
				unk_0x7567CEA8E6B5340B(joaat("prop_laptop_01a"));
				Local_95.f_1.f_141[2 /*2*/] = 0;
				Local_95.f_1.f_141[2 /*2*/].f_1 = 0;
				Local_95.f_1.f_141[3 /*2*/] = 0;
				Local_95.f_1.f_141[3 /*2*/].f_1 = 0;
				Local_95.f_1.f_141[7 /*2*/] = 0;
				Local_95.f_1.f_141[7 /*2*/].f_1 = 0;
				Local_95.f_1.f_141[8 /*2*/] = 0;
				Local_95.f_1.f_141[8 /*2*/].f_1 = 0;
				unk_0x59A0729D503ED758(&iLocal_41, 6);
			}
			else if (unk_0x35081E98CA82CBB4())
			{
				unk_0x131748CFDC209107("LESTER", 1, 0, 0, 0);
			}
			if (func_308(67))
			{
				if (!func_231(0))
				{
					if (func_292(&iLocal_42, 0, 0, 0, 0) == 1)
					{
						unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
						func_291();
						if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
						{
							unk_0xE6827001F6663087(unk_0xA34E7C2A5118D638());
							unk_0x60B57BC5E51D2074(0);
						}
						uLocal_93 = unk_0x8738B068D97CDC64(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, 0, 1, 1, 1);
						iLocal_94 = unk_0xDC3487ADA3784C61(Local_95.f_1.f_394, Local_95.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
						unk_0x52AFCF0DF71B4A6D(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397);
						unk_0x7AF3AE9D12A61928(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, 0, 0);
						unk_0x59A0729D503ED758(&iLocal_41, 2);
					}
				}
			}
			if (unk_0xDCC86F723E82125E(iLocal_41, 2))
			{
				if (func_290("AH_2_EXT_ALT") && unk_0x0845149A26DABBA5(joaat("prop_laptop_01a")))
				{
					if (!unk_0x308528B5CF35F306())
					{
						if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[0]) && !unk_0xB6900B8CB0ABBD2B(Global_87936.f_9[0]))
						{
							iLocal_46 = Global_87936.f_9[0];
							unk_0xFD816D0E738EB817(iLocal_46, 0, 1);
							unk_0x5D713171D2C2E177(iLocal_46, "LESTER", 1, joaat("ig_lestercrest"), 0);
						}
						if (unk_0x95CCECA3948CFE7B(Global_87936.f_28[0]) && !unk_0xB6900B8CB0ABBD2B(Global_87936.f_28[0]))
						{
							uLocal_47 = Global_87936.f_28[0];
							unk_0xFD816D0E738EB817(Global_87936.f_28[0], 0, 1);
							unk_0x5D713171D2C2E177(uLocal_47, "WALKINGSTICK_LESTER", 1, joaat("prop_cs_walking_stick"), 0);
						}
						if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[1]) && !unk_0xB6900B8CB0ABBD2B(Global_87936.f_9[1]))
						{
							uLocal_49[0] = Global_87936.f_9[1];
							unk_0xFD816D0E738EB817(uLocal_49[0], 0, 1);
							unk_0x5D713171D2C2E177(uLocal_49[0], "MICHAEL", 0, joaat("player_zero"), 0);
						}
						else
						{
							unk_0x5D713171D2C2E177(uLocal_49[0], "MICHAEL", 2, joaat("player_zero"), 0);
							unk_0x59A0729D503ED758(&iLocal_41, 12);
						}
						if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()) && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
						{
							iLocal_45 = unk_0xC8B93D94F8954288();
							unk_0x5D713171D2C2E177(iLocal_45, "FRANKLIN", 1, joaat("player_one"), 0);
						}
						func_289(&(Local_95.f_484), 0, 0, "MICHAEL", 1, 1);
						func_289(&(Local_95.f_484), 1, 0, "FRANKLIN", 1, 1);
						func_289(&(Local_95.f_484), 3, 0, "LESTER", 1, 1);
						func_73(1);
						func_264(1, 1, 1, 0);
						func_271(0);
						unk_0x130F0C5AE7B52B7A(949391213, 3, 1, 0);
						unk_0xC0E67E73A6E9A0EE(949391213, 0f, 1, 0);
						unk_0x8E6D4B516B44DE88(2048);
						unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
						iLocal_44 = unk_0x693EBB4F13506457();
					}
					else
					{
						func_112();
						if (unk_0x95CCECA3948CFE7B(Global_87936[0]) && !unk_0xB6900B8CB0ABBD2B(Global_87936[0]))
						{
							unk_0xFD816D0E738EB817(Global_87936[0], 0, 1);
							func_274(Global_87936[0], 0, 1);
							unk_0x95F5F15D238A7F1C(&(Global_87936[0]));
						}
						if (unk_0x95CCECA3948CFE7B(unk_0x974516F979AD07BC()))
						{
							Global_87936[0] = unk_0x974516F979AD07BC();
							unk_0xFD816D0E738EB817(Global_87936[0], 0, 1);
							func_274(Global_87936[0], 0, func_93());
							unk_0x95F5F15D238A7F1C(&(Global_87936[0]));
						}
						if (unk_0xFEBA5661B4F1602A(unk_0xC8B93D94F8954288(), 0) == 7)
						{
							unk_0x37D5496B3B31995F(unk_0xC8B93D94F8954288(), 0);
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 13))
						{
							if (!unk_0xB66DD474AA9E764E() && !unk_0x2230725B418B1240())
							{
								unk_0x31E6EB2040318451(800);
							}
							unk_0x59A0729D503ED758(&iLocal_41, 13);
						}
						if (unk_0x2C87734B4748BBD5())
						{
							unk_0x59A0729D503ED758(&iLocal_41, 14);
						}
						if (unk_0xDCC86F723E82125E(iLocal_41, 14))
						{
							if (unk_0xD5DFCA69ACAA20E3())
							{
								if (!unk_0xDCC86F723E82125E(iLocal_41, 1))
								{
									func_273();
									unk_0x59A0729D503ED758(&iLocal_41, 1);
								}
								if (!unk_0xDCC86F723E82125E(iLocal_41, 3))
								{
									func_2(3, 3, 1);
									unk_0x59A0729D503ED758(&iLocal_41, 3);
								}
							}
						}
						if (unk_0xDCC86F723E82125E(iLocal_41, 12))
						{
							if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("MICHAEL", joaat("player_zero"))))
							{
								uLocal_49[0] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("MICHAEL", joaat("player_zero")));
								unk_0x77621132305B133B(&iLocal_41, 12);
							}
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 3))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_44) > 15848)
							{
								func_2(3, 3, 1);
								unk_0x59A0729D503ED758(&iLocal_41, 3);
							}
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 1))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_44) > 5000)
							{
								func_273();
								unk_0x59A0729D503ED758(&iLocal_41, 1);
							}
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 4))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_44) > 71550)
							{
								if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("FRANKLIN", 0)))
								{
									if (!unk_0xB6900B8CB0ABBD2B(unk_0x244E97B72831CEB4("FRANKLIN", 0)))
									{
										unk_0x872B541D7953A19B(unk_0x244E97B72831CEB4("FRANKLIN", 0), 0, 0);
									}
								}
								if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("LESTER", 0)))
								{
									if (!unk_0xB6900B8CB0ABBD2B(unk_0x244E97B72831CEB4("LESTER", 0)))
									{
										unk_0x872B541D7953A19B(unk_0x244E97B72831CEB4("LESTER", 0), 0, 0);
									}
								}
								if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("WALKINGSTICK_LESTER", 0)))
								{
									if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("WALKINGSTICK_LESTER", 0)))
									{
										unk_0x872B541D7953A19B(unk_0x244E97B72831CEB4("WALKINGSTICK_LESTER", 0), 0, 0);
									}
								}
								unk_0x59A0729D503ED758(&iLocal_41, 4);
							}
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 5))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_44) > 73900)
							{
								if (unk_0x95CCECA3948CFE7B(uLocal_49[0]))
								{
									unk_0x872B541D7953A19B(uLocal_49[0], 0, 0);
								}
								unk_0x59A0729D503ED758(&iLocal_41, 5);
							}
						}
						if (unk_0x669E4BAB086C2648("MICHAEL", joaat("player_zero")))
						{
							if (!unk_0xB6900B8CB0ABBD2B(uLocal_49[0]))
							{
								unk_0xC778754E36F3FFD6(uLocal_49[0], 208, 1);
								unk_0xC778754E36F3FFD6(uLocal_49[0], 118, 0);
								unk_0xC778754E36F3FFD6(uLocal_49[0], 213, 0);
								unk_0xAAD662D7E0D59F4C(uLocal_49[0], 1);
							}
							if (func_93() != 0)
							{
								func_247(&uLocal_49, 0);
								func_186(&uLocal_49, 0, 0, 0);
								unk_0x4BBD72565A0AF033(joaat("player_zero"));
								func_289(&(Local_95.f_484), 0, unk_0xC8B93D94F8954288(), "MICHAEL", 1, 1);
							}
							if (!unk_0xDCC86F723E82125E(iLocal_41, 1))
							{
								func_273();
								unk_0x59A0729D503ED758(&iLocal_41, 1);
							}
							func_107(6, 0);
						}
						if (unk_0xF490A05A3C6F92BC(0))
						{
							func_271(1);
							if (!unk_0xDCC86F723E82125E(iLocal_41, 4))
							{
								if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("FRANKLIN", 0)))
								{
									if (!unk_0xB6900B8CB0ABBD2B(unk_0x244E97B72831CEB4("FRANKLIN", 0)))
									{
										unk_0x872B541D7953A19B(unk_0x244E97B72831CEB4("FRANKLIN", 0), 0, 0);
									}
								}
								if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("LESTER", 0)))
								{
									if (!unk_0xB6900B8CB0ABBD2B(unk_0x244E97B72831CEB4("LESTER", 0)))
									{
										unk_0x872B541D7953A19B(unk_0x244E97B72831CEB4("LESTER", 0), 0, 0);
									}
								}
								if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("WALKINGSTICK_LESTER", 0)))
								{
									if (unk_0x95CCECA3948CFE7B(unk_0x244E97B72831CEB4("WALKINGSTICK_LESTER", 0)))
									{
										unk_0x872B541D7953A19B(unk_0x244E97B72831CEB4("WALKINGSTICK_LESTER", 0), 0, 0);
									}
								}
								unk_0x59A0729D503ED758(&iLocal_41, 4);
							}
							if (!unk_0xDCC86F723E82125E(iLocal_41, 5))
							{
								if (unk_0x95CCECA3948CFE7B(uLocal_49[0]))
								{
									unk_0x872B541D7953A19B(uLocal_49[0], 0, 0);
								}
								unk_0x59A0729D503ED758(&iLocal_41, 5);
							}
						}
					}
				}
			}
		}
		else
		{
			if (func_142(0))
			{
				if (func_292(&iLocal_42, 0, 0, 0, 0) == 1)
				{
					unk_0x59A0729D503ED758(&iLocal_41, 2);
				}
			}
			if (unk_0xDCC86F723E82125E(iLocal_41, 2))
			{
				func_289(&(Local_95.f_484), 0, 0, "MICHAEL", 1, 1);
				func_289(&(Local_95.f_484), 1, 0, "FRANKLIN", 1, 1);
				func_289(&(Local_95.f_484), 3, 0, "LESTER", 1, 1);
				func_273();
				func_107(6, 0);
			}
		}
	}
	else
	{
		if (unk_0xDEDB719756F0580C("AH_2_EXT_ALT"))
		{
			unk_0xCDBEE0F3B4A74754();
		}
		if (unk_0xDCC86F723E82125E(iLocal_41, 6))
		{
			unk_0x77621132305B133B(&iLocal_41, 6);
		}
	}
}

void func_273()
{
	func_84(1, 3, 1);
	func_84(2, 3, 1);
	func_294(&Local_95);
	func_68(&Local_95);
}

int func_274(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xFBF56D2226163A9E(iParam0, &uVar0);
		if (!unk_0xB8A06E7E729EED0A(uVar1))
		{
			if (unk_0x7CBED6EFED40E7EB(sVar1) == unk_0x7CBED6EFED40E7EB("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_275(iParam0, iParam2);
	return 1;
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_280(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
		if (!unk_0x95CCECA3948CFE7B(iVar0))
		{
			iVar0 = unk_0xD58C042006468C27(iParam0, -1);
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0x2DC9BA2299B45EA6(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_100976.f_1770.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_100976.f_18751.f_5592[iVar1] = iVar2;
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
		if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_100976.f_18751.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_100976.f_18751.f_5588 = 1;
	func_276(iParam0, &(Global_100976.f_18751.f_5510));
}

void func_276(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_279(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_278(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_277(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
		}
	}
}

int func_277(int iParam0)
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

int func_278(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
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
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_279(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_280(int iParam0)
{
	if ((((((((((!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0)) || func_287(iParam0, 0, 0)) || func_287(iParam0, 1, 0)) || func_287(iParam0, 2, 0)) || func_286(iParam0) != 145) || func_285(iParam0)) || func_284(iParam0)) || func_283(iParam0)) || func_282(iParam0)) || !func_281(unk_0x6D5BB810CC209E15(iParam0)))
	{
		if (func_284(iParam0))
		{
		}
		if (func_284(iParam0))
		{
		}
		if (func_287(iParam0, 0, 0))
		{
		}
		if (func_287(iParam0, 1, 0))
		{
		}
		if (func_287(iParam0, 2, 0))
		{
		}
		if (func_286(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_281(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0))
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

int func_282(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	sVar1 = unk_0xC51A0D06D98180EB(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF8D041B05C3D1FD4(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_161(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88800[iVar0]))
		{
			if (Global_88800[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]) && unk_0x5D42322C7DB888D0(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == unk_0x6D5BB810CC209E15(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_285(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68186.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_286(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_287(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_288(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_288(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_289(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

bool func_290(char* sParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xDEDB719756F0580C(sParam0);
	if (!Global_69316)
	{
		if (!bVar0)
		{
			Global_69316 = 1;
		}
	}
	return bVar0;
}

void func_291()
{
	Global_91145 = 1;
}

int func_292(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_231(0))
		{
			return 0;
		}
		Global_35664++;
		*iParam0 = Global_35664;
		unk_0x9B5503F5CD2CEB12(unk_0x1A96BAEAC664567A(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBD11A7205F364E1A(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *iParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *iParam0)
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
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*iParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_293(iParam0, iParam4);
		}
	}
	return 2;
}

void func_293(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_294(var uParam0)
{
	if (func_12(2, *uParam0))
	{
		if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				func_70(uParam0, func_295(*uParam0));
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

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_312(18);
			break;
		
		case 1:
			return func_312(22);
			break;
		
		case 2:
			return func_312(40);
			break;
		
		case 3:
			return func_312(8);
			break;
		
		case 4:
			return func_312(26);
			break;
		
		default:
			break;
	}
	return 0;
}

void func_296(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		fVar0 = unk_0xB7A628320EFF8E47(uParam0->f_401, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
		if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
		{
			func_304(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xDCC86F723E82125E(Global_87448, *uParam0))
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 0))
			{
				if (func_303(uParam0))
				{
					if (unk_0xDCC86F723E82125E(Global_87448, *uParam0))
					{
						if (unk_0xDCC86F723E82125E(Global_87450, *uParam0))
						{
							func_298(uParam0);
						}
					}
					else
					{
						func_298(uParam0);
					}
				}
			}
			else
			{
				func_297(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xDCC86F723E82125E(Global_87448, *uParam0))
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 0))
			{
				if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
				{
					func_146(uParam0);
				}
				func_145(uParam0);
			}
		}
	}
}

void func_297(var uParam0)
{
	if (!unk_0x9CBEA8550A09D8B0())
	{
		return;
	}
	unk_0xF3AC452C34BF0E13(&(uParam0->f_1.f_272), 5);
	unk_0xC4C141A321D45FD8("HEIST_BULLETIN_BOARD", 0);
	if (*uParam0 != 1)
	{
		unk_0x7567CEA8E6B5340B(joaat("prop_ld_planning_pin_01"));
		unk_0x7567CEA8E6B5340B(joaat("prop_ld_planning_pin_02"));
		unk_0x7567CEA8E6B5340B(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = unk_0xB6AA3C7BA00BEAFB(&(uParam0->f_1.f_268));
	uParam0->f_414 = unk_0xB6AA3C7BA00BEAFB("INSTRUCTIONAL_BUTTONS");
	unk_0x59A0729D503ED758(&Global_87447, *uParam0);
	unk_0x59A0729D503ED758(&(uParam0->f_449), 0);
}

void func_298(var uParam0)
{
	int iVar0;
	
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_37(uParam0, iVar0);
			iVar0++;
		}
		func_34(uParam0);
		func_33(uParam0);
		func_302(uParam0);
		func_301(uParam0);
		func_299(uParam0);
		unk_0x59A0729D503ED758(&(uParam0->f_449), 1);
	}
}

void func_299(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_309(*uParam0, uParam0->f_1.f_75[iVar0]))
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
			fVar2 = (unk_0xBBDA792448DB5A89((unk_0x531444754C426278(0, 65535) - 32767)) / 4000f);
			fVar3 = (unk_0xBBDA792448DB5A89((unk_0x531444754C426278(0, 65535) - 32767)) / 4000f);
			Var4 = { func_300(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = unk_0x7C62BC1EB194D985(iVar1, Var4, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			unk_0xFD816D0E738EB817(uParam0->f_428[iVar0], 1, 0);
			unk_0xEE6504C7ECC425AB(uParam0->f_428[iVar0], 1);
			unk_0x8FB4254399424391(uParam0->f_428[iVar0], 0, 0);
			unk_0xD871E53445F5BB07(uParam0->f_428[iVar0], 0);
			unk_0xB7A2078CD1C9A82F(uParam0->f_428[iVar0], 1);
		}
		iVar0++;
	}
	unk_0x77621132305B133B(&Global_87450, *uParam0);
}

Vector3 func_300(var uParam0, var uParam1)
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
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * unk_0xD0FFB162F40A139C((90f - fVar6))), (fVar4 * unk_0x0BADBFA3B172435F((90f - fVar6)))) };
	return Var7;
}

void func_301(var uParam0)
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
		bVar3 = unk_0xDCC86F723E82125E(Global_100976.f_1.f_120[iVar1], iVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x65960B4E2ADC9F6D(uParam0->f_1.f_118[iVar0]);
			unk_0x0139C89EE907A315(bVar3);
			unk_0xD013AC29829DDC02();
		}
		else
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x65960B4E2ADC9F6D(uParam0->f_1.f_118[iVar0]);
			unk_0x0139C89EE907A315(bVar3);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_141[iVar0 /*2*/]));
			unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			unk_0xD013AC29829DDC02();
		}
		iVar0++;
	}
}

void func_302(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7C38F93AF52620B1(uParam0->f_413, "CREATE_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
	unk_0x65960B4E2ADC9F6D(2);
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_14));
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_14.f_1));
	unk_0xD013AC29829DDC02();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_309(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_309(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
			unk_0x65960B4E2ADC9F6D(iVar1);
			unk_0x65960B4E2ADC9F6D(iVar3);
			func_10(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			unk_0xD013AC29829DDC02();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x7C38F93AF52620B1(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
	unk_0xD013AC29829DDC02();
	if (func_309(*uParam0, uParam0->f_1.f_210))
	{
		unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
		unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
		unk_0x0139C89EE907A315(true);
		unk_0xD013AC29829DDC02();
	}
	else
	{
		unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
		unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
		unk_0x0139C89EE907A315(false);
		unk_0xD013AC29829DDC02();
	}
}

int func_303(var uParam0)
{
	if (!unk_0xF518F3C7FACD43B7(uParam0->f_413))
	{
		return 0;
	}
	if (!unk_0xF518F3C7FACD43B7(uParam0->f_414))
	{
		return 0;
	}
	if (!unk_0xF0DCEBB4ADA5D981(5))
	{
		return 0;
	}
	if (unk_0x9CBEA8550A09D8B0())
	{
		if (!unk_0xC4C141A321D45FD8("HEIST_BULLETIN_BOARD", 0))
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
		if ((!unk_0x0845149A26DABBA5(joaat("prop_ld_planning_pin_01")) || !unk_0x0845149A26DABBA5(joaat("prop_ld_planning_pin_02"))) || !unk_0x0845149A26DABBA5(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0x59A0729D503ED758(&Global_87449, *uParam0);
	return 1;
}

void func_304(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_309(*uParam0, 0))
	{
		func_305(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0xC785022A2AF03298(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * unk_0xD0FFB162F40A139C((90f - uParam0->f_404))), (fVar0 * unk_0x0BADBFA3B172435F((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_305(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (unk_0xDCC86F723E82125E(Global_87447, *uParam0))
	{
		unk_0x59A0729D503ED758(&(uParam0->f_449), 16);
		unk_0x59A0729D503ED758(&(uParam0->f_449), 15);
		unk_0x59A0729D503ED758(&(uParam0->f_449), 14);
		unk_0x77621132305B133B(&Global_87447, *uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_309(*uParam0, iVar1);
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x65960B4E2ADC9F6D(uParam0->f_1.f_118[iVar0]);
			unk_0x0139C89EE907A315(bVar2);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0xD013AC29829DDC02();
			iVar0++;
		}
		unk_0x77621132305B133B(&(uParam0->f_449), 16);
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_309(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!unk_0x95CCECA3948CFE7B(uParam0->f_428[iVar0]))
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
					fVar4 = (unk_0xBBDA792448DB5A89((unk_0x531444754C426278(0, 65535) - 32767)) / 4000f);
					fVar5 = (unk_0xBBDA792448DB5A89((unk_0x531444754C426278(0, 65535) - 32767)) / 4000f);
					Var6 = { func_300(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = unk_0x7C62BC1EB194D985(iVar3, Var6, 1, 1, 0);
					unk_0x68931E8B45B3CA92(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					unk_0xFD816D0E738EB817(uParam0->f_428[iVar0], 1, 0);
					unk_0xEE6504C7ECC425AB(uParam0->f_428[iVar0], 1);
					unk_0x8FB4254399424391(uParam0->f_428[iVar0], 0, 0);
					unk_0xD871E53445F5BB07(uParam0->f_428[iVar0], 0);
					unk_0xB7A2078CD1C9A82F(uParam0->f_428[iVar0], 1);
				}
			}
			else if (!unk_0x95CCECA3948CFE7B(uParam0->f_428[iVar0]))
			{
				unk_0xA278ECBE30D8AE4F(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		unk_0x77621132305B133B(&(uParam0->f_449), 15);
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 14))
	{
		func_306(uParam0);
		func_34(uParam0);
		func_302(uParam0);
		unk_0x77621132305B133B(&(uParam0->f_449), 14);
	}
}

void func_306(var uParam0)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
	unk_0xD013AC29829DDC02();
}

bool func_307(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_308(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_330[iParam0 /*6*/];
}

bool func_309(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_1.f_120[iParam0], iParam1);
}

void func_310()
{
	int iVar0;
	
	iVar0 = func_93();
	if (func_95(iVar0))
	{
		if (!func_231(0))
		{
			if (!func_308(69) && !func_308(70))
			{
				if (func_311(69) || func_311(70))
				{
					if (Global_100976.f_5895.f_227[70] != 1)
					{
						Global_100976.f_5895.f_227[70] = 1;
						Global_32668[70] = 0;
						Global_32867[70] = 1;
					}
					if (Global_100976.f_5895.f_227[71] != 2)
					{
						Global_100976.f_5895.f_227[71] = 2;
						Global_32668[71] = 0;
						Global_32867[71] = 1;
					}
					if (Global_100976.f_5895.f_227[73] != 1)
					{
						Global_100976.f_5895.f_227[73] = 1;
						Global_32668[73] = 0;
						Global_32867[73] = 1;
					}
					if (Global_100976.f_5895.f_227[72] != 0)
					{
						Global_100976.f_5895.f_227[72] = 0;
						Global_32668[72] = 0;
						Global_32867[72] = 1;
					}
					if (Global_100976.f_5895.f_227[74] != 0)
					{
						Global_100976.f_5895.f_227[74] = 0;
						Global_32668[74] = 0;
						Global_32867[74] = 1;
					}
				}
			}
		}
	}
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_85424[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82191)
	{
		if (Global_82191[iVar0 /*5*/] != -1)
		{
			if (Global_69586.f_109[Global_82191[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_312(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_99.f_58[iParam0];
}

void func_313(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	*uParam0 = iParam1;
	Var0 = { Global_87385[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar3 = Global_87385[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { Var0 };
	uParam0->f_404 = fVar3;
	uParam0->f_405 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * unk_0xD0FFB162F40A139C((360f - fVar3))), (-uParam0->f_1.f_8 * unk_0x0BADBFA3B172435F((360f - fVar3)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar3 };
	unk_0x59A0729D503ED758(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	unk_0x77621132305B133B(&(uParam0->f_449), 0);
	unk_0x77621132305B133B(&(uParam0->f_449), 1);
	unk_0x77621132305B133B(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_314(var uParam0, var uParam1)
{
	func_324(uParam0, 1, "HEIST_AGENCY", "BOARD5", "AHFAUD", "CRWAUD", 3, 0, 6, 13, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 2f);
	func_323(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 136, 411, 268, 415, 401, 418, 482, 413, 0, 0, 670, 350, 0, 85, 684, 106);
	func_322(uParam0, 20f, 22f, 28f);
	func_321(uParam0, "", "", "", "", "AHP12", "", "AHP13", "AHLONG");
	func_320(uParam0, 1, "CRW_GM", "");
	func_320(uParam0, 3, "CRW_HW", "");
	func_320(uParam0, 4, "CRW_NR", "");
	func_320(uParam0, 5, "CRW_DJ", "");
	func_320(uParam0, 6, "CRW_PH", "");
	func_320(uParam0, 7, "CRW_CF", "");
	func_320(uParam0, 8, "CRW_ET", "");
	func_320(uParam0, 9, "CRW_KD", "");
	func_320(uParam0, 10, "CRW_PM", "CRM_PM");
	func_320(uParam0, 12, "CRW_RL", "CRM_RL");
	func_320(uParam0, 13, "CRW_TM", "CRM_TM");
	func_319(uParam0, 24, "AHRIC1");
	func_319(uParam0, 26, "AHKAR1");
	func_319(uParam0, 18, "AHJH");
	func_319(uParam0, 19, "AHPAL");
	func_319(uParam0, 21, "AHBOTH");
	func_318(uParam0, 3, 0, 0, 0);
	func_318(uParam0, 2, 0, 0, 0);
	func_318(uParam0, 7, 0, 0, 0);
	func_318(uParam0, 8, 0, 0, 0);
	func_318(uParam0, 5, 2, 0, 0);
	func_318(uParam0, 6, 2, 0, 0);
	func_318(uParam0, 4, 2, 0, 0);
	func_318(uParam0, 9, 2, 0, 0);
	func_318(uParam0, 0, 3, 0, 0);
	func_318(uParam0, 1, 3, 0, 0);
	func_317(uParam0, 0, 1, "H_TD_JANI");
	func_317(uParam0, 1, 3, "H_TD_BLUP");
	func_317(uParam0, 2, 4, "H_TD_PLAN");
	func_317(uParam0, 2, 5, "H_TD_CREW");
	func_317(uParam0, 6, 7, "H_TD_FIRE");
	func_317(uParam0, 6, 8, "H_TD_GETA");
	func_316(uParam0, 2, 70, 71);
	func_316(uParam0, 2, 44, 174);
	func_316(uParam0, 2, 45, 209);
	func_316(uParam0, 3, 178, 68);
	func_316(uParam0, 3, 321, 65);
	func_316(uParam0, 2, 538, 52);
	func_316(uParam0, 2, 470, 82);
	func_316(uParam0, 2, 455, 207);
	func_316(uParam0, 2, 566, 207);
	func_316(uParam0, 2, 673, 339);
	func_316(uParam0, 2, 679, 442);
	func_316(uParam0, 2, 689, 63);
	func_315(uParam0, 2, "AHP8", 55, 197, 1);
	func_315(uParam0, 2, "AHP9", 252, 150, 1);
	func_315(uParam0, 2, "AHP10", 70, 97, 1);
	func_315(uParam0, 2, "AHP11", 504, 106, 1);
}

void func_315(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
			unk_0x59A0729D503ED758(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_316(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_317(var uParam0, int iParam1, int iParam2, char* sParam3)
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

void func_318(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_319(var uParam0, int iParam1, char* sParam2)
{
	struct<2> Var0;
	
	StringCopy(&Var0, sParam2, 8);
	if (unk_0xF8D041B05C3D1FD4(sParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
}

void func_320(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<2> Var0;
	struct<2> Var2;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var2, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!unk_0xF8D041B05C3D1FD4(sParam3, ""))
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

void func_321(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
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

void func_322(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_323(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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

void func_324(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param14)
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

int func_325(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_326(int iParam0)
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
	if (unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x59A0729D503ED758(&(Global_100976.f_7719.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_327()
{
	while (!func_144(&Local_95))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_107(6, 0);
	func_107(8, 0);
	func_107(7, 0);
	func_84(1, 3, 0);
	func_84(2, 3, 0);
	unk_0x9DBF08025225340D(uLocal_93, 0);
	if (iLocal_94 != -1)
	{
		if (unk_0xDA33F6DC6574B8DD(iLocal_94))
		{
			unk_0x78DFC4B56BCF3DA9(iLocal_94);
		}
	}
	unk_0xE7E852B69C980E80();
	unk_0x7AF3AE9D12A61928(Local_95.f_1.f_394 - Local_95.f_1.f_397, Local_95.f_1.f_394 + Local_95.f_1.f_397, 1, 0);
	unk_0x60B57BC5E51D2074(5);
	unk_0xCDBEE0F3B4A74754();
	if (iLocal_42 != -1)
	{
		func_155(&iLocal_42);
	}
	unk_0xA4E0D8FD51F2A6F7();
}

