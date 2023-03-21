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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	float fLocal_66 = 0f;
	int iLocal_67[5] = { 0, 0, 0, 0, 0 };
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<2> Local_83 = { 0, 0 } ;
	struct<2> Local_85[8];
	struct<2> Local_102 = { 0, 0 } ;
	struct<4> Local_104[8];
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	int iLocal_142 = 0;
	int iLocal_143[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 10;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 2;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 8;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 8;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	float fLocal_189 = 0f;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	float fLocal_192 = 0f;
	float fLocal_193 = 0f;
	float fLocal_194 = 0f;
	float fLocal_195 = 0f;
	float fLocal_196 = 0f;
	var uLocal_197 = 0;
	struct<3> Local_198 = { 0, 0, 0 } ;
	float fLocal_201 = 0f;
	struct<3> Local_202 = { 0, 0, 0 } ;
	float fLocal_205 = 0f;
	struct<3> Local_206 = { 0, 0, 0 } ;
	float fLocal_209 = 0f;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	struct<60> Local_217 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_277[32];
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	var uLocal_478 = 0;
	struct<3> Local_479 = { 0, 0, 0 } ;
	var uLocal_482 = 0;
	struct<23> Local_483 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 1015222895;
	var uLocal_512 = 1021665346;
	var uLocal_513 = 0;
	var uLocal_514 = 255;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = -1;
	var uLocal_524 = 996499522;
	var uLocal_525 = 1002740646;
	var uLocal_526 = 0;
	var uLocal_527 = 60;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 1016296636;
	var uLocal_589 = 220;
	var uLocal_590 = 255;
	var uLocal_591 = 255;
	var uLocal_592 = 255;
	var uLocal_593 = 255;
	var uLocal_594 = 255;
	var uLocal_595 = 255;
	var uLocal_596 = 4096;
	var uLocal_597 = 40;
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
	var uLocal_766 = 4;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 1065353216;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 1056964608;
	var uLocal_776 = 1056964608;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	struct<3> Local_783[20];
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_66 = 0f;
	fLocal_73 = 0f;
	fLocal_74 = 0f;
	fLocal_75 = 0f;
	fLocal_138 = 0.62f;
	fLocal_139 = 0.51f;
	fLocal_140 = 0.55f;
	fLocal_141 = 25f;
	fLocal_189 = ((0.05f + 0.275f) - 0.01f);
	fLocal_192 = -0.05f;
	fLocal_193 = 0.92f;
	fLocal_194 = 1.94f;
	fLocal_195 = 2.99f;
	fLocal_196 = 3.7f;
	Local_198 = { -0.4f, 0.96f, 0.85f };
	fLocal_201 = 0.95f;
	Local_202 = { 0f, 2f, 2.5f };
	fLocal_205 = 1.75f;
	Local_206 = { 0f, 0f, 120f };
	fLocal_209 = 35.5f;
	iLocal_777 = -1;
	iLocal_778 = -1;
	iLocal_780 = -1;
	iLocal_781 = -1;
	if (unk_0x591AF4C50B46E014() && func_922(unk_0x0FFED3E94261A832(), 0, 1))
	{
		func_899(ScriptParam_0);
	}
	else
	{
		func_850();
	}
	while (true)
	{
		func_849();
		if (func_841())
		{
			func_850();
		}
		Global_1773254.f_2 = Local_217.f_58;
		Global_1773254.f_3 = Local_217.f_59;
		switch (func_840(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_839() == 1)
				{
					func_838();
					if (func_837())
					{
						func_822(142, 1, -1, 1);
						unk_0xE0125DCD8DB3EFC3(3);
						if (!func_821())
						{
							unk_0xFA7DE80D003A8604(unk_0x0FFED3E94261A832(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_822(142, 0, -1, 1);
						unk_0xFA7DE80D003A8604(unk_0x0FFED3E94261A832(), joaat("pickup_portable_package"), 0);
					}
					Local_277[unk_0x88641E5BC172153A() /*6*/] = 1;
				}
				else if (func_839() == 4)
				{
					Local_277[unk_0x88641E5BC172153A() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_818(1))
				{
					Local_277[unk_0x88641E5BC172153A() /*6*/] = 2;
				}
				if (func_839() == 1)
				{
					func_390();
					func_387();
					if (func_837() || func_386())
					{
						func_239(&(Global_1341327.f_529), &Global_1341327, 26, &(Global_1341327.f_1), &(Global_1341327.f_112), -1, 0);
					}
					func_189();
				}
				else if (func_839() == 4)
				{
					Local_277[unk_0x88641E5BC172153A() /*6*/] = 3;
				}
				func_186();
				break;
			
			case 3:
				func_185(&(Local_217.f_49));
				if (func_184(&(Local_217.f_49)))
				{
					Local_277[unk_0x88641E5BC172153A() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_277[unk_0x88641E5BC172153A() /*6*/] = 4;
			
			case 4:
				func_850();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_839())
			{
				case 0:
					if (func_177())
					{
						unk_0xABE13CB17EB2BE02(&(Local_217.f_58), &(Local_217.f_59));
						Local_217.f_0 = 1;
						Local_217.f_33 = unk_0x88641E5BC172153A();
						Local_217.f_34 = unk_0x0FFED3E94261A832();
						func_822(142, 1, -1, 1);
					}
					break;
				
				case 1:
					func_175();
					func_4();
					if (func_2())
					{
						Local_217.f_0 = 4;
					}
					else if (func_1())
					{
						Local_217.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2497344.f_4828.f_22)
	{
		Global_2497344.f_4828.f_22 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_217.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1))
			{
				Local_217.f_32 = 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 3))
			{
				Local_217.f_32 = 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 4))
			{
				Local_217.f_32 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (Local_217.f_5 == 0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 6))
		{
			if (!func_9(&(Local_217.f_53)))
			{
				func_8(&(Local_217.f_53), 0, 0);
			}
			else if (func_6(&(Local_217.f_53), func_7(), 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_217.f_1), 6);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	if (!func_9(&(Local_217.f_51)))
	{
		func_8(&(Local_217.f_51), 0, 0);
	}
	else if (func_6(&(Local_217.f_51), func_11(), 0))
	{
		unk_0xF6082E2ADA1C795B(&(Local_217.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_11154;
}

void func_12()
{
	int iVar0;
	
	if (Local_217.f_33 < 0)
	{
		return;
	}
	if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(Local_217.f_33)))
	{
		if (Local_277[Local_217.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_277[Local_217.f_33 /*6*/].f_4 - 1);
			if (!unk_0xAA4F14DA15DB0B51(Local_217.f_4, iVar0))
			{
				Local_217.f_36 = iVar0;
				if (func_13())
				{
					unk_0xF6082E2ADA1C795B(&(Local_217.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()
{
	int iVar0;
	struct<26> Var1;
	struct<3> Var27;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_25 = -1082130432;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0xD0BCF9877CD72A3F(Local_217.f_3))
	{
		unk_0x0F39DF6675B2333E(iVar0);
		if (unk_0xA1FC9D7AEA164881(iVar0))
		{
			if (unk_0x9C9ED67ADF7A1292(1))
			{
				Var27 = { func_174() };
				if (func_14(Var27, 5f, &Local_479, &uLocal_482, Var1))
				{
					Local_217.f_3 = unk_0x71C810DFFC1DCEA6(unk_0x93DC134B82BCEB63(joaat("pickup_portable_package"), Local_479, 1, iVar0));
					unk_0x8F35D7268F7D4402(unk_0xA210FA5BDB2E5744(Local_217.f_3), Local_479 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0xFD213087BC4CC3B3(iVar0);
					unk_0xF65C7766FB8D4B2C(unk_0xA210FA5BDB2E5744(Local_217.f_3), 1);
					unk_0x9EE2C5A2E7AA0F9B(unk_0xA210FA5BDB2E5744(Local_217.f_3), 1);
					unk_0xC5CFF5770D08D6C9(unk_0xA210FA5BDB2E5744(Local_217.f_3), 1);
					unk_0xE77EEA92586CF2E8(unk_0xA210FA5BDB2E5744(Local_217.f_3), 0);
					unk_0x435850511E04A8D1(unk_0xA210FA5BDB2E5744(Local_217.f_3));
					func_8(&(Local_217.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_217.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<17> Var0;
	struct<18> Var28;
	struct<3> Var55;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var28.f_16 = 1;
	Var28.f_22 = 1;
	Var28.f_23 = 1;
	Var28.f_24 = 1;
	Var28 = { Param0 };
	Var28.f_3 = Param6.f_11;
	Var28.f_4 = fParam3;
	Var28.f_5 = 0;
	Var28.f_6 = 1;
	Var28.f_7 = 0;
	Var28.f_15 = 0;
	Var28.f_16 = 1;
	Var28.f_17 = 0;
	if (func_15(&Var28, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var55 = { Param0 - Var0[0 /*3*/] };
			if (Var55.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404996.f_2257 == *uParam0 || !Global_2404996.f_2257.f_1 == uParam0->f_1) || !Global_2404996.f_2257.f_2 == uParam0->f_2) || !Global_2404996.f_2260 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404996.f_2271 == uParam0->f_8 || !Global_2404996.f_2271.f_1 == uParam0->f_8.f_1) || !Global_2404996.f_2271.f_2 == uParam0->f_8.f_2) || !Global_2404996.f_2274 == uParam0->f_11) || !Global_2404996.f_2274.f_1 == uParam0->f_11.f_1) || !Global_2404996.f_2274.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404996.f_2271 == uParam0->f_8 || !Global_2404996.f_2271.f_1 == uParam0->f_8.f_1) || !Global_2404996.f_2271.f_2 == uParam0->f_8.f_2) || !Global_2404996.f_2274 == uParam0->f_11) || !Global_2404996.f_2274.f_1 == uParam0->f_11.f_1) || !Global_2404996.f_2274.f_2 == uParam0->f_11.f_2) || !Global_2404996.f_2277 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404996.f_2255 == 1)
		{
			if (unk_0xE00BB08A385D5A25(Global_2404996.f_2264))
			{
				if (Global_2404996.f_2264 == unk_0xFF09208EC90C94CB())
				{
					if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) < func_173(0))
					{
						return 0;
					}
				}
				else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) < func_173(0))
				{
					return 0;
				}
			}
			unk_0x0D8D84869BCDB788();
			unk_0x9F2805D9F870E084();
			func_172();
		}
		Global_2404996.f_2255 = 0;
	}
	else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) > func_173(0))
	{
		Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
		func_166();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x22B61B02AFE2AF2E(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404996.f_2255)
	{
		unk_0x0D8D84869BCDB788();
		unk_0x9F2805D9F870E084();
		func_172();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_165(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xA4C66BC652DBFE4B())
		{
			Global_2404996.f_2278 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404996.f_2257 = { *uParam0 };
					Global_2404996.f_2260 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404996.f_2271 = { uParam0->f_8 };
					Global_2404996.f_2274 = { uParam0->f_11 };
					Global_2404996.f_2277 = 0f;
					Global_2404996.f_2257 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404996.f_2271 = { uParam0->f_8 };
					Global_2404996.f_2274 = { uParam0->f_11 };
					Global_2404996.f_2277 = uParam0->f_14;
					Global_2404996.f_2257 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_164(Var8.f_0, Var8.f_1);
			}
			Global_2404996.f_2256 = 1;
			Global_2404996.f_2255 = 1;
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2261 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2264 = unk_0xFF09208EC90C94CB();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404996.f_2255)
	{
		if (Global_2404996.f_2256 == 1)
		{
			if (unk_0x6DF473E6458E85B6(fVar4, fVar5, fVar6, fVar7) || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 5000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var26.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_23;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					func_143(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_142(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2404996.f_2256 = 9;
				}
				else
				{
					Global_2404996.f_2256 = 2;
				}
			}
		}
		if (Global_2404996.f_2256 == 2)
		{
			if ((unk_0x306044C3800C13FD(Var11, Var14) || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 15000) || unk_0xFFAE31A7B21E0490(Var11, Var14) == 0)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				if (uParam0->f_5 && !func_139(unk_0x0FFED3E94261A832(), 0))
				{
					Global_2404996.f_2256 = 3;
				}
				else
				{
					Global_2404996.f_2256 = 4;
				}
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2266) > 7000)
			{
				func_138(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404996.f_2256 == 3)
		{
			if (func_137() || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 10000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 4;
			}
		}
		if (Global_2404996.f_2256 == 4)
		{
			if (unk_0xA4C66BC652DBFE4B())
			{
				unk_0x0D8D84869BCDB788();
				unk_0x9F2805D9F870E084();
			}
			else
			{
				iVar0 = 0;
				func_166();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x02E7E9BA57B7D8C2(unk_0x0FFED3E94261A832(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
							}
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x0E308CB76057368C(unk_0x0FFED3E94261A832(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
							}
							break;
						
						case 2:
							if (unk_0x0E308CB76057368C(unk_0x0FFED3E94261A832(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					Global_2404996.f_2256 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x8C2EE08261507D14(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x8EC9B42622922299(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x8EC9B42622922299(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404996.f_2256 == 5)
		{
			if (func_64(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404996.f_2282.f_5)
				{
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					Global_2404996.f_2256 = 6;
				}
				else
				{
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404996.f_2256 = 9;
				}
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 20000)
			{
				unk_0x0D8D84869BCDB788();
				unk_0x9F2805D9F870E084();
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 8;
			}
		}
		if (Global_2404996.f_2256 == 6)
		{
			iVar0 = 0;
			Global_2404996.f_2282.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2256 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x8C2EE08261507D14(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_136(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x8EC9B42622922299(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x8EC9B42622922299(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404996.f_2256 == 7)
		{
			if (func_64(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404996.f_2411[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_142(Global_2404996.f_2411[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_60(Global_2404996.f_2411[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x19007189599EBBF5(Global_2404996.f_2411[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_18(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404996.f_2256 = 9;
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 20000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 8;
			}
		}
		if (Global_2404996.f_2256 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2404996.f_478))
				{
				}
			}
			else if (Global_2404996.f_2282.f_2)
			{
				func_16(uParam2, &(Global_2404996.f_2282.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404996.f_2257 };
				func_18(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2256 = 9;
		}
		if (Global_2404996.f_2256 == 9)
		{
			Global_2404996.f_2255 = 0;
			unk_0x0D8D84869BCDB788();
			unk_0x9F2805D9F870E084();
			func_172();
			return 1;
		}
		Global_2404996.f_2261 = unk_0x11ABC381A58DD5AB();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_17(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	struct<3> Var67;
	struct<3> Var70;
	struct<3> Var73;
	float fVar76;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var67 = { *uParam5 };
						if (func_63(uParam5->f_4) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_20(*uParam0, &Var0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var4.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_143(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				break;
			
			case 2:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_19(Var0, uParam5->f_7, Var70, Var73, fVar76))
		{
			if (func_20(*uParam0, &Var0, iVar66, iParam3, 0))
			{
				if (!func_19(Var0, uParam5->f_7, Var70, Var73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var70 };
					}
					if (unk_0xE423CA97BB7EA540(Var0, &uVar63, 0))
					{
						Var0.f_2 = uVar63;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var70 };
				}
				if (unk_0xE423CA97BB7EA540(Var0, &uVar63, 0))
				{
					Var0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404996.f_633 = 1;
}

int func_19(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_60(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x19007189599EBBF5(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_20(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_59(Param0, uParam3))
	{
		if (func_21(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xDB2C6DD0E49577D6(Param0, 0, uParam3, iParam4))
	{
		if (func_21(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_41(Global_2404996.f_499, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_28(*uParam3, 1056964608))
			{
				if (!func_22(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_22(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_27(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410462[iVar4])
	{
		if (func_26(Var1, &(Global_2409633[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409633[iVar4 /*92*/][iVar0 /*7*/], Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410462[8])
	{
		if (func_26(Var1, &(Global_2409633[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409633[8 /*92*/][iVar0 /*7*/], Global_2409633[8 /*92*/][iVar0 /*7*/].f_3, Global_2409633[8 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_23(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_25(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_24(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_24(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_25(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_25(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_24(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_24(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_24(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_25(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

bool func_26(struct<3> Param0, var uParam3)
{
	return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_27(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410472[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410472[1])
	{
		if (Param0.f_0 < Global_2410476[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410472[2])
	{
		if (Param0.f_0 < Global_2410476[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410476[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410476[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_28(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_38(unk_0x0FFED3E94261A832(), 1))
	{
		if (Global_1638223.f_47358 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_47358)
			{
				if (Global_1638223.f_47359[iVar0 /*61*/].f_7 != 0)
				{
					if (func_29(Param0, Global_1638223.f_47359[iVar0 /*61*/], Global_1638223.f_47359[iVar0 /*61*/].f_6, Global_1638223.f_47359[iVar0 /*61*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_44971 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_44971)
			{
				if (Global_1638223.f_44974[iVar0 /*98*/].f_16 != 0)
				{
					if (func_29(Param0, Global_1638223.f_44974[iVar0 /*98*/], Global_1638223.f_44974[iVar0 /*98*/].f_3, Global_1638223.f_44974[iVar0 /*98*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_59830 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_59830)
			{
				if (Global_1638223.f_59834[iVar0 /*160*/].f_12 != 0)
				{
					if (func_29(Param0, Global_1638223.f_59834[iVar0 /*160*/], Global_1638223.f_59834[iVar0 /*160*/].f_3, Global_1638223.f_59834[iVar0 /*160*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_37(iParam7, 1008981770))
	{
		func_30(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x19007189599EBBF5(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_30(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_36(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_31(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x3FEF699D13BCC798((Var6.f_0 - Var3.f_0));
}

void func_31(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x88516260CF32A1A0(iParam0))
	{
		unk_0xDE3E0D9E2E663E9A(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_34(iParam0);
		if (iVar0 != 0)
		{
			func_32(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_32(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_33(iParam0, &Global_1315786);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x88516260CF32A1A0(Global_1315786[iVar0]))
		{
			unk_0xDE3E0D9E2E663E9A(Global_1315786[iVar0], &(Global_1315790[iVar0 /*3*/]), &(Global_1315797[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315790[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315797[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315790[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315797[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315804[iVar0] = (Global_1315797[iVar0 /*3*/] - Global_1315790[iVar0 /*3*/]);
		Global_1315807[iVar0] = (Global_1315797[iVar0 /*3*/].f_1 - Global_1315790[iVar0 /*3*/].f_1);
		Global_1315810[iVar0] = (Global_1315797[iVar0 /*3*/].f_2 - Global_1315790[iVar0 /*3*/].f_2);
		if (Global_1315804[iVar0] > Global_1315813)
		{
			Global_1315813 = Global_1315804[iVar0];
		}
		if (Global_1315810[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315810[iVar0];
		}
		iVar0++;
	}
	Global_1315815 = (Global_1315813 * -0.5f);
	Global_1315818 = (Global_1315813 * 0.5f);
	Global_1315815.f_1 = ((((0.5f * Global_1315807[0]) + Global_1315807[1]) + Global_1315786.f_3) * -1f);
	Global_1315818.f_1 = (0.5f * Global_1315807[0]);
	Global_1315815.f_2 = (Global_1315810[0] * -0.5f);
	Global_1315818.f_2 = (Global_1315810[0] * 0.5f);
	*uParam1 = { Global_1315815 };
	*uParam2 = { Global_1315818 };
}

void func_33(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	}
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_35(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_36(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_37(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_31(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_38(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_39(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_39(int iParam0)
{
	return func_40(iParam0);
}

bool func_40(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_41(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_53(Param0))
	{
		if (func_52(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_44(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_43(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_42(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_42(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_36(&Var0, 0f, 0f, unk_0x399F81B56505EE6F(0f, 360f));
		}
		else
		{
			func_36(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_43(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_2515[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_46(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(Var2, &uVar1) || func_45(Var2))
			{
				Var2 = { *uParam0 };
				func_46(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_45(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404996.f_568 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_565);
		if (fVar0 < Global_2404996.f_568)
		{
			return 1;
		}
	}
	return 0;
}

void func_46(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_48(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_48(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_48(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_42(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_47(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_23(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_47(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

Vector3 func_48(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_42(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_47(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_23(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x6B839244A185DBDF(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_142(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_60(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x19007189599EBBF5(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_49(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_51();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9 == 1)
		{
			if (func_50(Param0, &(Global_2404996.f_357[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_142(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404996.f_2513) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_60(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_51()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_52(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409496[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409496[iVar0 /*17*/].f_16))
			{
				if (func_50(*uParam0, &(Global_2409496[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409496[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409496[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_46(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_52(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_46(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404996.f_502)
	{
		if (!Global_2404996.f_43.f_312)
		{
			if (!func_57(unk_0x0FFED3E94261A832(), 1))
			{
				return 1;
			}
			if (!func_56(Param0, 1008981770))
			{
				if (!func_52(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_52(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_55(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_54(&(Global_2404996.f_43[iVar0 /*12*/])) };
					if (!func_52(&Var1, 0, 0, 0))
					{
						if (!func_52(&Param0, 0, 0, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_54(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_55(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_50(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_56(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_50(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_57(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_58(iParam0) != 0;
	}
	return func_38(iParam0, bParam1);
}

int func_58(int iParam0)
{
	if (func_922(iParam0, 0, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_1;
	}
	return 0;
}

int func_59(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404996.f_2053 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_2053)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404996.f_2054[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404996.f_2054[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_60(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_61(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_61(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_62(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404996.f_2282.f_1 == 0 && Global_2404996.f_2282 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x051B106169512DAC(&(Global_2404996.f_2282.f_1)))
			{
				case 0:
					func_134(uParam1, uParam2);
					if (!Global_2404996.f_2282.f_2)
					{
						if (uParam2->f_7 && Global_2404996.f_531.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
							}
							if (uParam1->f_5 && func_17(Global_2404996.f_478))
							{
								if (!Global_2404996.f_2282.f_5)
								{
									Global_2404996.f_2282.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_134(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xA4C66BC652DBFE4B())
		{
			if (!unk_0x66DE426B0AE4B2C3())
			{
				if (unk_0x1DE11E68D5FB249D())
				{
					func_134(uParam1, uParam2);
					Global_2404996.f_2282.f_1 = unk_0x015AAFB0726848F9();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x9F2805D9F870E084();
				func_134(uParam1, uParam2);
				if (!Global_2404996.f_2282.f_2)
				{
					Global_2404996.f_2282.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_131(Global_2404996.f_531, &(Global_2404996.f_2282.f_52), &(Global_2404996.f_2282.f_85));
	}
	if (uParam2->f_7 && !Global_2404996.f_2282.f_4)
	{
		Global_2404996.f_2282.f_4 = 1;
		func_72(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404996.f_2282.f_1 > 0 || Global_2404996.f_2282 > 0)
	{
		if (uParam1->f_5 || unk_0xA4C66BC652DBFE4B())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404996.f_2282.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404996.f_2282.f_3)
					{
						iVar4 = Global_2404996.f_2282.f_3 + 1;
					}
					if (iVar4 > (Global_2404996.f_2282.f_1 - 1))
					{
						iVar4 = (Global_2404996.f_2282.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x9824E06B1062EFBA(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x34973F57AA6A72C9(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xDB8F566E828BD5EF(iVar4);
					}
					else
					{
						unk_0xEE759B6ABA0BD5CC(iVar4, &iVar5);
					}
					func_72(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404996.f_2282.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404996.f_2282.f_1;
		}
		if (Global_2404996.f_2282.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404996.f_2666)
			{
				func_66(&(Global_2404996.f_2282.f_6[0 /*9*/]), &(Global_2404996.f_2282.f_6[1 /*9*/]), &(Global_2404996.f_2282.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_17(Global_2404996.f_478))
			{
				if (Global_2404996.f_2282.f_2)
				{
					func_16(uParam0, &(Global_2404996.f_2282.f_6));
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404996.f_2282.f_2)
			{
				func_16(uParam0, &(Global_2404996.f_2282.f_6));
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x895FB9FE885E36ED(0, Global_2404996.f_2282.f_1);
				unk_0x9824E06B1062EFBA(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_22(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
		if (uParam1->f_5 && func_17(Global_2404996.f_478))
		{
			if (!Global_2404996.f_2282.f_5)
			{
				Global_2404996.f_2282.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_18(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
		func_65(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_65(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404996.f_2411[(3 - iVar0) /*3*/] = { Global_2404996.f_2411[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404996.f_2411[0 /*3*/] = { Param0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_17(Global_2404996.f_478) && func_71() < 4096)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407666[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407666[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407666[iVar0 /*9*/].f_1;
				Var2 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_2 < fVar1 && Global_2407666[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407666[iVar0 /*9*/].f_2;
				Var2 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407666[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	int iVar23;
	struct<9> Var24;
	bool bVar33;
	bool bVar34;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404996.f_478 == 1)
		{
			if (unk_0x3FEF699D13BCC798((Global_2404996.f_499.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (func_128(unk_0x0FFED3E94261A832()))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_127(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x67A55162BFFEB01D(unk_0x2A5EB8B0FE590B91(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x67A55162BFFEB01D(unk_0x2A5EB8B0FE590B91(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_126(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar14 = false;
			}
		}
		iVar10++;
	}
	if (bVar14)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_120(Param0, fParam3, uParam4->f_15, func_125(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404996.f_3;
		}
	}
	else if (!func_117(Param0, 25f, unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_116(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_116(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404996.f_663)
		{
			Var11 = { Global_2404996.f_499 };
			if (Global_2404996.f_478 == 26)
			{
				Var11 = { Global_2404996.f_531.f_18 };
			}
			if (!func_43(Param0, 0.5f))
			{
				if (func_53(Var11))
				{
					if (!func_52(&Param0, 0, 0, 0) && !func_115(&Param0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_115(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_114(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_113(unk_0x0FFED3E94261A832()) && func_111(unk_0x0FFED3E94261A832())))
		{
			if (!func_110(&Param0, &(Global_2404996.f_2282.f_85), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_111(unk_0x0FFED3E94261A832()))
		{
			if (!func_109(Param0, &(Global_2404996.f_2282.f_52), &(Global_2404996.f_2282.f_85), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_108(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_17(Global_2404996.f_478))
			{
				if (func_56(Param0, 0.01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_107(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404996.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404996.f_663)
		{
			if (!func_44(&Param0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_22(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar15 = func_55(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_106(Param0, &Var16, &Var19, &fVar22);
			if (!func_101(&(Global_2404996.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_28(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_100(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404996.f_2666 && uParam4->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_92(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_92(Param0, Global_2404996.f_2257, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2404996.f_478) && iVar7 < 4096)
			{
				Var24.f_2 = func_90(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_89(Var24);
			Global_2404996.f_2282.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 5)
		{
			if (iVar7 >= Global_2404996.f_2282.f_6[iVar23 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar33)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_92(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_92(Param0, Global_2404996.f_2257, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_17(Global_2404996.f_478) && iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_90(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404996.f_2282.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_88(Var24, iVar23);
							Global_2404996.f_2282.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404996.f_2282.f_6[iVar23 /*9*/] || (iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/] && fVar0 > Global_2404996.f_2282.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_88(Var24, iVar23);
						Global_2404996.f_2282.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar33)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_87(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_74(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404996.f_2282.f_6[iVar23 /*9*/] || (iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/] && fVar3 > Global_2404996.f_2282.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_88(Var24, iVar23);
						Global_2404996.f_2282.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_922(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x0FFED3E94261A832() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_77(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x220AE8028FACE96A(iVar11) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
					{
						if (!unk_0x220AE8028FACE96A(iVar11) == -1 || !func_57(unk_0x0FFED3E94261A832(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar11) || !bParam6)
					{
						if (func_76(iVar11))
						{
							Var5 = { func_75(iVar11) };
							if (!iVar11 == unk_0x0FFED3E94261A832())
							{
								Var8 = { unk_0x5895D6D5B19334A9(unk_0x1E199569E0295838(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Var5, 1);
							fVar2 = unk_0x4A2E6F541CD8C36E(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_75(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_76(int iParam0)
{
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0)
{
	if (func_922(iParam0, 0, 1))
	{
		if (!func_85(iParam0))
		{
			if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam0))
			{
				if (!unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
				{
					if (func_38(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_84(unk_0x220AE8028FACE96A(iParam0), unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
				{
					if (!func_38(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_78(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (func_83(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_82(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_79(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (!iVar0 == func_80())
	{
		if (iVar0 == func_81(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	return -1;
}

int func_81(int iParam0)
{
	if (iParam0 != func_80())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_80();
}

struct<13> func_82(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_83(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_82(iParam0) };
		Global_2484585 = { func_82(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_85(int iParam0)
{
	if (func_139(iParam0, 0))
	{
		return 1;
	}
	if (func_86())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

float func_87(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_922(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_922(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if (func_76(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam7 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

void func_88(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404996.f_2282.f_6[iParam9 /*9*/] };
	Global_2404996.f_2282.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 4)
	{
		func_88(Var0, iParam9 + 1);
	}
}

void func_89(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_71();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] < iVar10)
		{
			Global_2407666[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar10)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] == 0)
		{
			Global_2407666[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407666[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407666[iVar12 /*9*/] = { Param0 };
	}
}

float func_90(struct<3> Param0)
{
	var uVar0;
	
	return func_91(Param0, &(Global_2404996.f_43), &uVar0);
}

float func_91(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404996.f_2513) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_92(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_73(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_74(Param0, 1, 0, 0, 1);
	fVar0 = func_73(fVar4, 0f, func_99(), func_97(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_95(Param0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && !func_57(unk_0x0FFED3E94261A832(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_94(Param0, unk_0x0FFED3E94261A832(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_93(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_73(unk_0x2A488C176D52CCA5(Global_2404996.f_499, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_93(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x8CB53B9AB648FF36(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xB22A5C995D319408(uVar3))
	{
		unk_0x637503F5ED6C575B(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x3FEF699D13BCC798((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_94(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_922(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_922(iVar3, 0, 1))
				{
					if (unk_0x220AE8028FACE96A(iVar3) != unk_0x220AE8028FACE96A(iParam3) || (unk_0x220AE8028FACE96A(iVar3) == -1 && unk_0x220AE8028FACE96A(iParam3) == -1))
					{
						if (Global_2416174.f_261[iVar2])
						{
							fVar1 = unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar2 /*3*/], Param0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_95(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xC61D5B1728CFF322(unk_0x2A5EB8B0FE590B91(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x2137828D03306CAF(uVar6[iVar2]))
		{
			if (!unk_0xA9A04898798AE9E6(uVar6[iVar2], 0))
			{
				if (func_96(uVar6[iVar2]))
				{
					Var3 = { unk_0xD1EE0E9FCD74A37B(uVar6[iVar2], 1) };
					fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_96(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF14CC08EB3D9D296(uParam0);
	switch (unk_0xAEF0E480E33587E6(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xAEF0E480E33587E6(iVar0, Global_1574695[unk_0x0FFED3E94261A832()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 0)
	{
		iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xAEF0E480E33587E6(iVar0, Global_1574406[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_97()
{
	if (func_98())
	{
		if ((unk_0xDA6E804770521A18(Global_2404996.f_43.f_67) || unk_0x0F93427D94EAEAA2(Global_2404996.f_43.f_67)) || Global_2404996.f_43.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_98()
{
	if (Global_2404996.f_43.f_65 && !Global_2404996.f_43.f_299)
	{
		if (!func_85(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
	}
	return 0;
}

float func_99()
{
	if (func_98())
	{
		if ((unk_0xDA6E804770521A18(Global_2404996.f_43.f_67) || unk_0x0F93427D94EAEAA2(Global_2404996.f_43.f_67)) || Global_2404996.f_43.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_100(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0xB6FB1ADA41270763(Param0, fParam7)) || (fVar0 > 0f && unk_0x2F88ECCEDDE3F341(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x1EC399095E4E3649(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x1EC399095E4E3649(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_101(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_105(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_104(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_102(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_102(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_103(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x19007189599EBBF5(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_103(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_25(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(unk_0x652D2EEEF1D3E62C(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_104(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x19007189599EBBF5(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_105(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x19007189599EBBF5(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_106(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_27(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410462[iVar4])
	{
		if (func_26(Var1, &(Global_2409633[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409633[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410462[8])
	{
		if (func_26(Var1, &(Global_2409633[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409633[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409633[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409633[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_107(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404996.f_43.f_55)
	{
		if (unk_0xA419466089F321B4(Global_2404996.f_43.f_56))
		{
			if (!unk_0xF079EF2C4FF76DFD(Param0))
			{
				uVar0 = unk_0x65B447E36C1ED4C2(Param0);
				if (unk_0xA419466089F321B4(uVar0))
				{
					iVar1 = unk_0xB010A20402E92ABD(uVar0);
					if (!iVar1 == Global_2404996.f_43.f_57)
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
		}
	}
	return 1;
}

int func_108(struct<3> Param0)
{
	switch (Global_2404996.f_2278)
	{
		case 0:
			return func_142(Param0, Global_2404996.f_2257, Global_2404996.f_2260, 0, 0);
			break;
		
		case 1:
			return func_60(Param0, Global_2404996.f_2271, Global_2404996.f_2274, 0, 0);
			break;
		
		case 2:
			return unk_0x19007189599EBBF5(Param0, Global_2404996.f_2271, Global_2404996.f_2274, Global_2404996.f_2277, 0, 1);
			break;
	}
	return 0;
}

int func_109(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0x19007189599EBBF5(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_110(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_42(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_112(iParam0))
			{
				if (Global_1592456[iParam0 /*635*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_112(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

int func_113(int iParam0)
{
	if (func_38(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404996.f_2411[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_115(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_45(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x399F81B56505EE6F(0.01f, 360f);
			func_42(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 0, fVar4);
			if (func_49(Var1, &uVar0) || func_45(Var1))
			{
				Var1 = { *uParam0 };
				func_42(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_116(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_922(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_75(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_922(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_76(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x4A2E6F541CD8C36E(func_75(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam8 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x4A2E6F541CD8C36E(func_75(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_117(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_119(Param0, fParam3, iParam4, iParam5, 0) || func_118(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_118(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2416174.f_557[iVar0] == 0)
			{
				if (func_29(Param0, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 1036831949))
				{
					if (func_922(iVar1, 0, 1) && func_922(iParam3, 0, 1))
					{
						return 1;
					}
					else
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

int func_119(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_922(iVar1, 0, 1) && func_922(iParam4, 0, 1))
				{
					if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_922(iVar1, 0, 1) && func_922(iParam4, 0, 1))
				{
					if (Global_2416174.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_75(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416174.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_922(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_75(iVar1), Param0) < 1f)
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

int func_120(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2404996.f_3 = 0;
	if (!func_117(Param0, 0.5f, unk_0x0FFED3E94261A832(), 0, 0))
	{
		Global_2404996.f_3++;
		if (bParam5)
		{
			if (func_165(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
				if (!func_124(Param0, fParam12))
				{
					Global_2404996.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2404996.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_165(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
				if (!func_124(Param0, fParam12))
				{
					Global_2404996.f_3++;
					if (!func_121(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404996.f_3++;
						if (!func_28(Param0, 1056964608))
						{
							Global_2404996.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			}
		}
		else if (func_165(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			if (!func_124(Param0, fParam12))
			{
				Global_2404996.f_3++;
				if (!func_121(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404996.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2404996.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
		}
	}
	return 0;
}

int func_121(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x0FFED3E94261A832() == iVar1)
		{
			if ((func_922(iVar1, 1, 1) && func_76(iVar1)) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (!func_123(unk_0x0FFED3E94261A832(), iVar1, -2, 0))
				{
					if (func_122(func_75(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_122(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0x19007189599EBBF5(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

int func_124(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_922(iVar1, 1, 1) && func_76(iVar1)) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
		{
			if ((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && unk_0x220AE8028FACE96A(iVar1) == -1) && !func_57(unk_0x0FFED3E94261A832(), 1))
			{
				return 0;
			}
			else if ((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && !unk_0x0FFED3E94261A832() == iVar1) || !func_123(unk_0x0FFED3E94261A832(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_75(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
{
	if ((Global_2404996.f_478 == 9 || Global_2404996.f_478 == 9) || (Global_2404996.f_478 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_126(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_922(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_76(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam9) && bParam6) && func_78(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_75(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_922(iVar1, 1, 1))
			{
				if ((!func_139(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1)) && iVar1 != unk_0x0FFED3E94261A832())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x220AE8028FACE96A(iVar1) == iVar3)
					{
						if (unk_0x4A2E6F541CD8C36E(func_75(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	if ((func_57(iParam0, 1) || func_130(iParam0)) || func_129(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

void func_131(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	struct<3> Var16;
	struct<3> Var19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var6 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_133(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var16 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var19 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var16, Param0) < unk_0x2A488C176D52CCA5(Var19, Param0))
			{
				Var6 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var6.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = { Global_2359395[iVar1 /*3*/] };
				func_132(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_132(var uParam0, var uParam1, int iParam2)
{
	Global_2411460 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_132(&Global_2411460, uParam1, iParam2 + 1);
	}
}

void func_133(var uParam0, var uParam1, int iParam2)
{
	Global_2411456 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_133(&Global_2411456, uParam1, iParam2 + 1);
	}
}

void func_134(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404996.f_2053 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_2053)
		{
			if (func_135(Global_2404996.f_2054[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404996.f_2054[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404996.f_2054[iVar0 /*4*/] };
					fVar4 = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
				}
				func_72(Global_2404996.f_2054[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404996.f_2282++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404996.f_2666)
	{
		func_66(&(Global_2404996.f_2282.f_6[0 /*9*/]), &(Global_2404996.f_2282.f_6[1 /*9*/]), &(Global_2404996.f_2282.f_6[2 /*9*/]));
	}
}

int func_135(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_19(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_19(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_136(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_61(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_137()
{
	return Global_1310987.f_4;
}

void func_138(var uParam0, var uParam1)
{
	func_172();
	func_164(uParam0, uParam1);
}

bool func_139(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_140(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_140(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_141();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_141()
{
	return Global_1312735;
}

bool func_142(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_143(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404996.f_1710 > 0 && func_161(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_144(uParam0, uParam1, uParam2);
	}
}

void func_144(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	int iVar25;
	struct<3> Var26;
	var uVar29;
	struct<3> Var30;
	float fVar33;
	bool bVar34;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_41(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_160(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2411470.f_162 = 0;
	Global_2411470.f_163 = 0;
	Global_2411470.f_164 = -99;
	Global_2411470.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411470.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_34(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x8CB53B9AB648FF36(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xB22A5C995D319408(iVar8))
		{
			unk_0x637503F5ED6C575B(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411470.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411470.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xAF3BC0B78BEBFE3C(iVar8)) || unk_0x69BC60DD5A50B10D(iVar8))
			{
				unk_0xAA55F1A37EDDE3B7(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_115(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_159(Var1))
									{
										Var1 = { func_157(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_28(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_156(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_160(&Var1, 0)) || uParam2->f_48 == 0)
															{
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_151(Var1, fVar4, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_41(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar18 = uParam2->f_31;
																					bVar19 = true;
																					iVar20 = 1;
																					fVar21 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						fVar21 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar21 = (fVar21 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar19 = true;
																						iVar20 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar21 = (fVar21 * 0.375f);
																							}
																						}
																					}
																					iVar22 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_165(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar22 = 1;
																						}
																					}
																					else if (func_165(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_150(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar22 = 1;
																					}
																					if (iVar22 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar24 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar23 = func_149(Var1, uParam2->f_54, &fVar24);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar23 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar23 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162)
																										{
																											Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411470.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411470.f_162 = 0;
																										uParam2->f_53 = iVar23;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411470.f_162 == 0)
																									{
																										Global_2411470[0 /*3*/] = { Var1 };
																										Global_2411470.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_148(Var1, fVar4, iVar16);
																													iVar16 = Global_2411470.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411470.f_162++;
																									if (Global_2411470.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411470[Global_2411470.f_162 /*3*/] = { Var1 };
																									Global_2411470.f_121[Global_2411470.f_162] = fVar4;
																									Global_2411470.f_162++;
																									if (func_156(Var1, uParam2))
																									{
																										Global_2411470.f_163++;
																									}
																									if (Global_2411470.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return;
																						}
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2411470.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
					else
					{
						if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
						{
							func_146(0, uParam2);
						}
						iVar25 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar25 = 0;
						}
						Var26 = { Global_2411470[0 /*3*/] };
						uVar29 = Global_2411470.f_121[0];
						Global_2411470[0 /*3*/] = { Global_2411470[iVar25 /*3*/] };
						Global_2411470.f_121[0] = Global_2411470.f_121[iVar25];
						Global_2411470[iVar25 /*3*/] = { Var26 };
						Global_2411470.f_121[iVar25] = uVar29;
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_144(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x895FB9FE885E36ED((1 + iVar15), (40 + iVar15));
						unk_0x74AE6A2A7B9031D9(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_157(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var30 = { Var1 };
						fVar33 = fVar4;
						if (!uParam2->f_50)
						{
							bVar34 = true;
						}
						else
						{
							bVar34 = false;
						}
						if (func_41(uParam2->f_35, &Var30, &(uParam2->f_38), &(uParam2->f_45), bVar34, 1) || func_160(&Var30, bVar34))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_144(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								return;
							}
						}
						else
						{
							*uParam0 = { Var30 };
							*uParam1 = fVar33;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_144(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_145(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411470.f_164 = iVar8;
	}
}

void func_145(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_117(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0FFED3E94261A832(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_146(int iParam0, var uParam1)
{
	if (!func_156(Global_2411470[iParam0 /*3*/], uParam1))
	{
		Global_2411470.f_162 = (Global_2411470.f_162 - 1);
		func_147(iParam0);
		if (Global_2411470.f_162 > Global_2411470.f_163)
		{
			func_146(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_146(iParam0 + 1, uParam1);
	}
}

void func_147(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411470[iParam0 /*3*/] = { Global_2411470[iParam0 + 1 /*3*/] };
			Global_2411470.f_121[iParam0] = Global_2411470.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_148(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411470[iParam4 /*3*/] };
	uVar3 = Global_2411470.f_121[iParam4];
	Global_2411470[iParam4 /*3*/] = { Param0 };
	Global_2411470.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411470.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_148(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_149(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_77(iVar5))
		{
			Var1 = { func_75(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_150(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam9 == 0)
		{
			if (func_922(iVar1, bParam5, bParam6))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam8 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_76(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam10) && bParam7) && func_78(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (func_29(func_75(iVar1), Param0, fParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_155(Param0, fParam3, iParam4, iParam5, iParam6) || func_152(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_152(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_154(Param0, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_557[iVar0]))
			{
				if (func_153(Param0, fParam3, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 0))
				{
					if (func_922(iVar1, 0, 1) && func_922(iParam5, 0, 1))
					{
						return 1;
					}
					else
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

int func_153(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_29(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_31(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_36(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_36(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x3FEF699D13BCC798((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_36(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_29(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_153(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_37(iParam3, 1008981770);
	fVar1 = func_37(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_155(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_922(iVar1, 0, 1) && func_922(iParam5, 0, 1))
			{
				if (Global_2416174.f_261[iVar0])
				{
					if (func_29(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_29(func_75(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416174.f_261[iVar0])
			{
				if (func_29(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_922(iVar1, 0, 0))
			{
				if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
				{
					if (func_29(func_75(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_156(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_142(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_60(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_157(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar17;
	float fVar20;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_158(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xAA55F1A37EDDE3B7(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x1FD487C25EAD970B(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_31(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				if (fVar20 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar20 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_158(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x2A381E6324A8F56E(Param0, *fParam3, &Var21))
		{
			Var24 = { Var21 - Param0 };
			if (!iParam11 == 0)
			{
				Var27 = { Var24 / FtoV(unk_0x652D2EEEF1D3E62C(Var24)) };
				func_31(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				Var27 = { Var27 * FtoV((fVar20 * 0.5f)) };
				Var24 = { Var24 - Var27 };
				Var21 = { Param0 + Var24 };
			}
			Var27 = { Var0 - Var21 };
			Var0 = { Var21 };
		}
	}
	return Var0;
}

int func_158(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_36(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_24(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_159(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_27(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411184[iVar1])
	{
		if (func_26(Param0, &(Global_2410481[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411184[8])
	{
		if (func_26(Param0, &(Global_2410481[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_160(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404996.f_26.f_16)
	{
		switch (Global_2404996.f_26.f_15)
		{
			case 0:
				if (func_142(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_60(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_48(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, Global_2404996.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_161(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2404996.f_1710 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_41(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_160(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2411470.f_162 = 0;
		Global_2411470.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2411470.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_162(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_1710)
		{
			iVar1 = Global_2404996.f_1984[iVar0];
			if (iVar1 > -1 && iVar1 < 68)
			{
				Var2 = { Global_2404996.f_1711[iVar1 /*4*/] };
				fVar5 = Global_2404996.f_1711[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_151(Var2, fVar5, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_41(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (uParam2->f_3 > 7f)
										{
											if (func_165(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
											{
												bVar11 = true;
											}
										}
										else if (func_165(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_150(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
										{
											bVar11 = true;
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_149(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162)
															{
																Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2411470.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2411470.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2411470.f_162 == 0)
														{
															Global_2411470[0 /*3*/] = { Var2 };
															Global_2411470.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_148(Var2, fVar5, iVar6);
																		iVar6 = Global_2411470.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
													else
													{
														Global_2411470[Global_2411470.f_162 /*3*/] = { Var2 };
														Global_2411470.f_121[Global_2411470.f_162] = fVar5;
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411470.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
				{
					func_146(0, uParam2);
				}
				iVar14 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
				Var15 = { Global_2411470[0 /*3*/] };
				uVar18 = Global_2411470.f_121[0];
				Global_2411470[0 /*3*/] = { Global_2411470[iVar14 /*3*/] };
				Global_2411470.f_121[0] = Global_2411470.f_121[iVar14];
				Global_2411470[iVar14 /*3*/] = { Var15 };
				Global_2411470.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_161(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_144(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_162(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2404996.f_1710)
	{
		uVar1 = func_163(Param0, fVar0, &fVar0);
		Global_2404996.f_1984[iVar2] = uVar1;
		iVar2++;
	}
}

int func_163(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2404996.f_1710)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2404996.f_1711[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

void func_164(var uParam0, var uParam1)
{
	unk_0x9A7EBCFC53C6E54A(uParam0, uParam1, 0.1f);
	Global_2404996.f_2265 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_2263 = 1;
	Global_2404996.f_2266 = unk_0x11ABC381A58DD5AB();
}

int func_165(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404996.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB6FB1ADA41270763(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x2F88ECCEDDE3F341(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x2F88ECCEDDE3F341(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x1EC399095E4E3649(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam13)
	{
		if (unk_0x9B4C386906F18D2A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (fParam14 > 0f)
	{
		if (func_126(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_116(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404996.f_2++;
	return 1;
}

void func_166()
{
	func_171();
	func_170();
	func_169();
	func_168();
	func_167();
}

void func_167()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407666[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_168()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404996.f_2282.f_85[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_169()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404996.f_2282.f_52[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_170()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		Global_2404996.f_2282.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_171()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404996.f_2282 = { Var0 };
}

void func_172()
{
	if (Global_2404996.f_2263)
	{
		if (unk_0xFF09208EC90C94CB() == Global_2404996.f_2265)
		{
			unk_0xA1A58DB8A7A22164();
		}
		else
		{
			unk_0xA1A58DB8A7A22164();
		}
		Global_2404996.f_2263 = 0;
	}
}

int func_173(bool bParam0)
{
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_174()
{
	return Local_217.f_38[Local_217.f_36 /*3*/];
}

void func_175()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_217.f_0 != 4)
	{
		iLocal_472 = 0;
		while (iLocal_472 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iLocal_472)))
			{
				iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iLocal_472));
				if (func_922(iVar2, 1, 1))
				{
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_277[iLocal_472 /*6*/].f_1, 2))
					{
						if (Local_217.f_37 != iVar2)
						{
							Local_217.f_37 = iVar2;
						}
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1))
				{
					if (Local_277[iLocal_472 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_277[iLocal_472 /*6*/].f_5);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 4))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_277[iLocal_472 /*6*/].f_1, 5))
					{
						unk_0xF6082E2ADA1C795B(&(Local_217.f_1), 4);
						Local_217.f_35 = iVar2;
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_217.f_1, 3)) || unk_0xAA4F14DA15DB0B51(Local_217.f_1, 4)) || unk_0xAA4F14DA15DB0B51(Local_217.f_1, 5))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_277[iLocal_472 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 5))
			{
				if (Local_217.f_33 > -1)
				{
					if (iLocal_472 == Local_217.f_33)
					{
						unk_0xF6082E2ADA1C795B(&(Local_217.f_1), 5);
					}
				}
			}
			iLocal_472++;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1))
		{
			iVar0 = (iVar0 + Local_217.f_6);
			if (iVar0 >= func_176())
			{
				unk_0xF6082E2ADA1C795B(&(Local_217.f_1), 1);
			}
			if (Local_217.f_5 != iVar0)
			{
				if (Local_217.f_5 < iVar0)
				{
					Local_217.f_5 = iVar0;
				}
				else if (Local_217.f_6 != (Local_217.f_5 - iVar0))
				{
					Local_217.f_6 = (Local_217.f_5 - iVar0);
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0xF6082E2ADA1C795B(&(Local_217.f_1), 2);
			}
		}
	}
}

int func_176()
{
	return Global_262145.f_11156;
}

int func_177()
{
	int iVar0;
	int iVar1;
	
	if (func_181() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_180(Local_217.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0x895FB9FE885E36ED(0, 20);
				if (func_178(iVar1))
				{
					Local_217.f_38[iVar0 /*3*/] = { Local_783[iVar1 /*3*/] };
					Local_783[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_180(Local_217.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_178(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_180(Local_783[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_180(Local_217.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0x4A2E6F541CD8C36E(Local_217.f_38[iVar0 /*3*/], Local_783[iParam0 /*3*/], 1);
				if (fVar1 < func_179())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_179()
{
	return unk_0xBBDA792448DB5A89(Global_262145.f_11157);
}

bool func_180(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_181()
{
	int iVar0;
	
	if (Local_217.f_48 != -1)
	{
		return Local_217.f_48;
	}
	iVar0 = unk_0x895FB9FE885E36ED(0, 4);
	if (!func_183(iVar0))
	{
		Local_217.f_48 = iVar0;
		func_182();
	}
	return Local_217.f_48;
}

void func_182()
{
	switch (Local_217.f_48)
	{
		case 0:
			Local_783[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			Local_783[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			Local_783[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			Local_783[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			Local_783[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_783[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_783[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			Local_783[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			Local_783[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			Local_783[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			Local_783[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			Local_783[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			Local_783[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			Local_783[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			Local_783[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			Local_783[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			Local_783[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			Local_783[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			Local_783[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			Local_783[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			Local_783[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			Local_783[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			Local_783[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			Local_783[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			Local_783[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			Local_783[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			Local_783[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			Local_783[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			Local_783[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			Local_783[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_783[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_783[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			Local_783[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			Local_783[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			Local_783[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			Local_783[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			Local_783[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			Local_783[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			Local_783[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			Local_783[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			Local_783[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			Local_783[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			Local_783[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			Local_783[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			Local_783[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			Local_783[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			Local_783[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			Local_783[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			Local_783[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			Local_783[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			Local_783[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			Local_783[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			Local_783[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			Local_783[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			Local_783[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			Local_783[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			Local_783[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			Local_783[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			Local_783[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			Local_783[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			Local_783[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			Local_783[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			Local_783[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			Local_783[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			Local_783[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			Local_783[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			Local_783[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			Local_783[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			Local_783[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			Local_783[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			Local_783[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			Local_783[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			Local_783[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			Local_783[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			Local_783[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			Local_783[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			Local_783[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			Local_783[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			Local_783[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			Local_783[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11099;
		
		case 1:
			return Global_262145.f_11100;
		
		case 2:
			return Global_262145.f_11098;
		
		case 3:
			return Global_262145.f_11097;
		
		default:
	}
	return 0;
}

int func_184(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_186()
{
	func_188();
	if (unk_0xAA4F14DA15DB0B51(iLocal_471, 9))
	{
		return;
	}
	if (func_837())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 0))
		{
			unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
			unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
			unk_0xF6082E2ADA1C795B(&iLocal_471, 0);
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 1))
		{
			if (unk_0x988197573BDAD49A("BG_SIGHTSEER_START"))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_471, 1);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_471, 1))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 3))
			{
				if (Local_217.f_5 == 1)
				{
					if (unk_0x988197573BDAD49A("BG_SIGHTSEER_MID"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_471, 3);
					}
				}
			}
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_471, 3))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 4))
			{
				if (Local_217.f_5 == 2)
				{
					if (unk_0x988197573BDAD49A("BG_SIGHTSEER_FINAL"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_471, 4);
					}
				}
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_217.f_1, 4))
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_471, 4))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 6))
				{
					if (unk_0x988197573BDAD49A("BG_SIGHTSEER_STOP"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_471, 6);
						unk_0xF6082E2ADA1C795B(&iLocal_471, 2);
						unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
						unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_386())
	{
		if (func_187(unk_0x0FFED3E94261A832(), 20))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 0))
			{
				unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
				unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
				unk_0xF6082E2ADA1C795B(&iLocal_471, 0);
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 7))
			{
				if (unk_0x988197573BDAD49A("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_471, 7);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_217.f_1, 4))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_471, 7))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 6))
					{
						if (unk_0x988197573BDAD49A("BG_SIGHTSEER_STOP"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_471, 6);
							unk_0xF6082E2ADA1C795B(&iLocal_471, 2);
							unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
							unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_187(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

void func_188()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_471, 8))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_471, 9))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 10))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_471, 11))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 12))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 15))
				{
					if (unk_0x988197573BDAD49A("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_471, 15);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_471, 15))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 13))
					{
						if (unk_0x988197573BDAD49A("APT_FADE_IN_RADIO"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_471, 13);
						}
					}
					if (unk_0xAA4F14DA15DB0B51(iLocal_471, 13))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_471, 10);
					}
				}
			}
		}
	}
}

void func_189()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_837() && !func_386())
	{
		return;
	}
	if (Local_217.f_34 > -1)
	{
		iVar3 = unk_0x7C214DA899F05536(Local_217.f_34);
		if (unk_0x885F483F34E47503(iVar3))
		{
			Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar3), 0) };
		}
	}
	if (!func_180(Var0, 0f, 0f, 0f, 0))
	{
		func_190(142, Var0, &uLocal_851, 1140457472, 1144750080, 0);
	}
}

void func_190(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_130(unk_0x0FFED3E94261A832()) && !func_238(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8)) && (func_237(unk_0x0FFED3E94261A832()) || func_236(unk_0x0FFED3E94261A832())))
	{
		return;
	}
	Global_1773245 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Param1);
	func_232(iParam0, fVar0);
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_231(unk_0x0FFED3E94261A832()) || func_229(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0x440E77FA46936F83(1344549371))
			{
				unk_0x23949161B04DFF2C(1344549371);
			}
		}
		else if (unk_0x440E77FA46936F83(1344549371))
		{
			unk_0x74B42EAFF204A87F(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_228(unk_0x0FFED3E94261A832(), 21))
		{
			func_227(Param1, 1, 0);
		}
		if (!*uParam4 && func_922(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 1;
			if (func_226(iParam0))
			{
				unk_0xFBC4596E19752537(func_225(iParam0));
				if (func_224(iParam0, -1))
				{
					unk_0xE0125DCD8DB3EFC3(0);
					if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
					{
						unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 1);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 1);
					}
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
				}
			}
			if (func_223(iParam0))
			{
				fVar1 = func_222(iParam0);
				if (fVar1 != 1f)
				{
					func_219(fVar1);
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_218(iParam0) && func_231(unk_0x0FFED3E94261A832()))
				{
					func_216(1);
					func_215(2);
				}
			}
			func_214(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_187(unk_0x0FFED3E94261A832(), 19))
			{
				func_213(19);
			}
		}
		if (*uParam4 && func_922(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 0;
			if (func_226(iParam0))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
				{
					unk_0xFBC4596E19752537(1f);
					unk_0xE0125DCD8DB3EFC3(5);
					unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
				}
			}
			if (func_223(iParam0))
			{
				func_212();
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
			}
			if (iParam7 && !func_130(unk_0x0FFED3E94261A832()))
			{
				if (func_211(unk_0x0FFED3E94261A832()) != 152)
				{
					func_193();
				}
			}
			if (func_192(2))
			{
				func_216(0);
				func_191(2);
			}
		}
	}
}

void func_191(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_27), iParam0);
}

bool func_192(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

void func_193()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_209();
	func_196(1, 1);
	func_194();
}

void func_194()
{
	func_195(0, 0);
}

void func_195(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_196(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_43), &Global_2408866, 314);
	}
	else
	{
		Global_2404996.f_43 = { Global_2408866 };
		Global_2404996.f_43.f_49 = { Global_2408866.f_49 };
		Global_2404996.f_43.f_52 = Global_2408866.f_52;
		Global_2404996.f_43.f_53 = Global_2408866.f_53;
	}
	if (bParam0)
	{
		func_208();
	}
	func_199(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_198(0);
	func_197();
}

void func_197()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_198(bool bParam0)
{
	if (bParam0)
	{
		Global_2404996.f_675 = 0;
	}
	else
	{
		Global_2404996.f_675 = 1;
	}
}

void func_199(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_207())
		{
			func_206();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_204();
		func_203(8, 0, 0, 0, 0);
		Global_2404996.f_676.f_507 = iParam11;
		Global_2404996.f_676.f_510 = iParam3;
		Global_2404996.f_676.f_511 = iParam4;
		Global_2404996.f_676.f_508 = iParam5;
		Global_2404996.f_676.f_509 = iParam6;
		Global_2404996.f_676.f_512 = iParam7;
		Global_2404996.f_676.f_513 = iParam8;
		Global_2404996.f_676.f_514 = iParam9;
		Global_2404996.f_1709 = 1;
	}
	else
	{
		func_200();
	}
}

void func_200()
{
	if (func_207() && !func_202())
	{
		func_206();
	}
	if (func_202())
	{
		func_201();
	}
	else
	{
		func_204();
		func_203(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_201()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

int func_202()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411638 = 0;
	}
	Global_2404996.f_479 = iParam0;
	Global_2404996.f_479.f_1 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_479.f_2 = iParam1;
	Global_2404996.f_479.f_3 = iParam2;
	Global_2404996.f_479.f_4 = iParam3;
	Global_2404996.f_479.f_5 = iParam4;
}

void func_204()
{
	if (func_207() && !func_202())
	{
		func_206();
	}
	func_205();
	Global_2404996.f_676 = 0;
}

void func_205()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404996.f_676.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_206()
{
	if (func_202())
	{
		if (Global_2404996.f_676.f_515 == Global_2404996.f_1192.f_515)
		{
			return;
		}
	}
	if (!unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_1192), &(Global_2404996.f_676), 516);
		Global_2404996.f_485 = { Global_2404996.f_479 };
		Global_2404996.f_1708 = 1;
	}
}

int func_207()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_208()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_209()
{
	func_210();
	Global_2404996.f_2053 = 0;
}

void func_210()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404996.f_2054[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_211(int iParam0)
{
	if (func_129(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

void func_212()
{
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && Global_2497344.f_4823 < 1f)
		{
			return;
		}
	}
	Global_2497344.f_4824 = -1;
	Global_2497344.f_4823 = 1f;
}

void func_213(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

void func_214(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

void func_215(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_216(int iParam0)
{
	if (func_217() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_217()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_219(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_220())
	{
		return;
	}
	fVar0 = (Global_2497344.f_4823 - fParam0);
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && unk_0x3FEF699D13BCC798(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2497344.f_4823 = fParam0;
	Global_2497344.f_4824 = unk_0xFF09208EC90C94CB();
}

int func_220()
{
	switch (func_221())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_221()
{
	return Global_25222;
}

float func_222(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_225(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_227(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404996.f_43.f_49 = { Param0 };
	Global_2404996.f_43.f_52 = iParam3;
	Global_2404996.f_43.f_53 = iParam4;
}

bool func_228(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_229(int iParam0)
{
	if (func_230(iParam0))
	{
		if (func_231(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_80())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_231(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_187(iParam0, 9);
	}
	return 0;
}

void func_232(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_235(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_233();
	}
}

void func_233()
{
	if (!func_234(unk_0x0FFED3E94261A832()))
	{
		func_214(25);
	}
}

bool func_234(int iParam0)
{
	return func_187(iParam0, 25);
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11174;
		
		case 142:
			return Global_262145.f_11162;
		
		case 157:
			return Global_262145.f_11129;
		
		case 159:
			return Global_262145.f_11112;
		
		case 162:
			return Global_262145.f_11223;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

bool func_238(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

void func_239(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_376(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_374() || iParam2 == 26)
	{
		if (func_324(uParam1, iParam2, uParam3, Global_1574108, 0, func_372()))
		{
			func_323(1);
			if ((!func_321() && !func_319()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_318())
				{
					func_315();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_314(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_313(uParam1);
							if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
							{
								unk_0x507FE690B1271947(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 26)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_922(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_139(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_112(iVar35))
										{
											iVar44 = iVar35;
											if (func_230(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_310(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_307(unk_0x0FFED3E94261A832(), 0) && func_211(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_305())
							{
								if (func_922(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
								}
								else
								{
									iVar35 = func_80();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_304(iVar35) && func_299(iVar35, iParam2)) && func_922(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_294(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_82(iVar35) };
								iVar37 = func_288(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
								}
								Global_1574108++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_305())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_283(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_282(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_276(iVar35, 0);
								if (bVar34)
								{
									if (func_275(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_274(iParam5))
								{
									func_273(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_273(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xF6082E2ADA1C795B(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7C214DA899F05536(iVar52);
							if (func_922(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_80();
							}
							if (func_304(iVar35))
							{
								if (func_922(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_294(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_82(iVar35) };
									iVar37 = func_288(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_276(iVar35, 1);
									if (bVar34)
									{
										if (func_275(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_253(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_250(uParam3, uParam1);
						}
						func_249(&(uParam3->f_21));
						func_248();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_247(uParam3, uParam1);
							func_246(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_247(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_242(uParam3))
						{
							Global_1574291 = 1;
						}
						func_240(uParam3);
						if (Global_1574291 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574291 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA8AF99BD8D81CFB7(*uParam1))
					{
						unk_0xFF4C3B41848CE5CD(7);
						unk_0xED8A6509C85CF7A1(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xFF4C3B41848CE5CD(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_248();
			func_314(0);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 7);
			}
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 10))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xE98F6B2EFC674042();
}

void func_240(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_249(&(uParam0->f_21));
		func_241(0);
	}
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574291 != 2)
		{
			Global_1574291 = 2;
		}
	}
	else
	{
		switch (Global_1574291)
		{
			case 0:
				Global_1574291 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_242(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_80() && func_922(iVar15, 0, 1))
	{
		Var2 = { func_82(iVar15) };
		iVar1 = func_245(uParam0, uParam0->f_37);
		if (func_244(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_243(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_243(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_243(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_243(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_243(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_243(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_243(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_245(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_246(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xD1FCC52F87A98873(*uParam0, "COLLAPSE"))
	{
		unk_0xD426F7366505EADF(iParam1);
		unk_0x8123397DC676E794();
	}
	if (iParam2 == 1)
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x8123397DC676E794();
		}
	}
}

void func_247(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_248()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_249(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_250(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_80())
		{
			if (func_922(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_252(uParam0->f_38[iVar0 /*2*/], 0);
					func_251(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_251(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "SET_ICON"))
		{
			unk_0x4CECF13AF144A8F6(iParam1);
			unk_0x4CECF13AF144A8F6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4CECF13AF144A8F6(iParam3);
			}
			unk_0x8123397DC676E794();
		}
	}
}

int func_252(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_253(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_272() && iParam4 < func_271())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xD1FCC52F87A98873(*uParam2, sVar1))
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_270("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_270(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_270("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_270("");
			if (uParam3->f_108 == 6)
			{
				func_270("");
			}
			else
			{
				func_270(&sParam5);
			}
			func_258(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_257(uParam3))
			{
				func_256("DPAD_FRIEND");
			}
			else if (func_255(uParam3))
			{
				func_256("DPAD_FRIEND");
			}
			else if (func_254(uParam3))
			{
				func_256("DPAD_CREW");
			}
			else
			{
				func_256("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_254(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_255(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

void func_256(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_257(var uParam0)
{
	if (func_255(uParam0) && func_254(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_258(var uParam0, int iParam1)
{
	if (func_269(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_263(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_259())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_259()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_261() || func_260())
		{
			return 1;
		}
	}
	return 0;
}

var func_260()
{
	return Global_2445217.f_12;
}

int func_261()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_260();
	}
	return func_262(Global_1638223.f_93532);
}

int func_262(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_263(int iParam0)
{
	if ((func_922(iParam0, 0, 1) && func_267()) && func_264(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_264(int iParam0, bool bParam1)
{
	return func_265(iParam0, bParam1, 1);
}

int func_265(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_266(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_80() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0, int iParam1)
{
	if (iParam0 != func_80())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_80())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_267()
{
	if (func_130(unk_0x0FFED3E94261A832()) || func_268())
	{
		return 0;
	}
	return 1;
}

int func_268()
{
	switch (func_211(unk_0x0FFED3E94261A832()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_269(int iParam0)
{
	if (func_259())
	{
		if (func_922(iParam0, 0, 1))
		{
			return func_230(iParam0);
		}
	}
	if ((func_922(iParam0, 0, 1) && func_267()) && func_266(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_270(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_271()
{
	int iVar0;
	
	if (Global_1574110)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_272()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_273(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_272() && iParam3 < func_271())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA8AF99BD8D81CFB7(*uParam1))
		{
			if (unk_0xD1FCC52F87A98873(*uParam1, sVar1))
			{
				unk_0x4CECF13AF144A8F6(iParam3);
				if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_270("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_256(sParam16);
				}
				else
				{
					func_270(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_270("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4CECF13AF144A8F6(iVar0);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(-1);
				}
				if (func_305())
				{
					func_270("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 5 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x58478145CAF8429C(sParam16)) && !unk_0x58478145CAF8429C(sParam17))
				{
					unk_0xADBDBA2DF8443753("FM_AE_TWO_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xD5DA3EC5EEC78358(sParam17);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 8 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
				{
					unk_0xADBDBA2DF8443753("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x31A1C6406BB66808(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xEA97619D8B89D387(iParam10);
					}
					unk_0xD5DA3EC5EEC78358(&(uParam2->f_104));
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xADBDBA2DF8443753("FM_AE_CASH");
					unk_0xF671F12DFCDA7746(iParam10, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xADBDBA2DF8443753("FM_AE_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
					else
					{
						unk_0xADBDBA2DF8443753("FM_NG_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
					{
						func_256(&(uParam2->f_104));
					}
					else
					{
						func_270("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xADBDBA2DF8443753("STRING");
					unk_0x365072D1FE8AEADE(iParam14, 6);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (fParam13 != -1f)
				{
					unk_0xADBDBA2DF8443753("NUMBER");
					unk_0x31A1C6406BB66808(fParam13, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (iParam10 != -1)
				{
					unk_0x4CECF13AF144A8F6(iParam10);
				}
				else
				{
					func_270("");
				}
				if (uParam2->f_108 == 6)
				{
					func_270("");
				}
				else
				{
					func_270(&sParam4);
				}
				func_258(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_270("");
					func_270("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_257(uParam2))
				{
					func_256("DPAD_FRIEND");
				}
				else if (func_255(uParam2))
				{
					func_256("DPAD_FRIEND");
				}
				else if (func_254(uParam2))
				{
					func_256("DPAD_CREW");
				}
				else
				{
					func_256("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_274(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_275(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_230(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_80();
}

int func_276(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_130(iParam0)) && !func_281(iParam0))
	{
		iVar0 = func_280();
	}
	iVar1 = func_279(iParam0);
	if (!iVar1 == -1)
	{
		return func_277(iVar1);
	}
	return iVar0;
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_278(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_278(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_279(int iParam0)
{
	if (!iParam0 == func_80())
	{
		if (func_275(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_81(iParam0)];
		}
	}
	return -1;
}

int func_280()
{
	return 21;
}

bool func_281(int iParam0)
{
	return func_187(iParam0, 20);
}

char* func_282(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_283(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_287(iParam3))
	{
		*fParam1 = (func_284(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_274(iParam3))
	{
		*fParam1 = (func_284(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_286(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_285(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_285(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_286(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_288(int iParam0)
{
	int iVar0;
	
	iVar0 = func_291(iParam0);
	if (iVar0 == -1)
	{
		func_289(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_289(int iParam0, bool bParam1)
{
	if (!func_922(iParam0, 0, 1))
	{
		return;
	}
	if (func_291(iParam0) != -1)
	{
		return;
	}
	if (Global_1362964)
	{
		if (iParam0 == Global_1362964.f_1)
		{
			return;
		}
	}
	if (func_290(iParam0))
	{
		return;
	}
	if (Global_1363002 >= 32)
	{
		return;
	}
	Global_1362969[Global_1363002] = iParam0;
	Global_1363002++;
	if (bParam1)
	{
	}
}

int func_290(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363002)
	{
		if (Global_1362969[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_291(int iParam0)
{
	int iVar0;
	
	if (!func_922(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1362962 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362962)
	{
		if (Global_1362801[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA630F1AB10AC8C10(Global_1362801[iVar0 /*5*/].f_2) && unk_0x32291EA29B6FC538(Global_1362801[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_292(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_292(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1362962)
	{
		return;
	}
	if (unk_0xA630F1AB10AC8C10(Global_1362801[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1362801[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xCF8EC788EB8AB4DB(Global_1362801[iParam0 /*5*/].f_2), 64);
			unk_0xE6AF47B902DCABC1(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x1156FB73B5FB1CC5(Global_1362801[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1362962)
	{
		Global_1362801[iVar32 /*5*/] = { Global_1362801[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_293(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_293(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_80();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_294(int iParam0)
{
	struct<4> Var0;
	
	if (func_922(iParam0, 0, 1))
	{
		Global_2484572 = { func_82(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_244(Global_2484572))
			{
				if (!unk_0xE1BD9BCF6A9D6793(&Global_2484572))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE061CABF3B012AFB(0))
		{
			return Var0;
		}
		if (func_298(&Global_2484572))
		{
			Global_2484502 = { func_296(iParam0) };
			func_295(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_295(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_296(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_297(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_82(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_297(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_298(var uParam0)
{
	if (unk_0x72BFFF26648DA18C())
	{
		if (unk_0x591BB87E287F24DC() && unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_238(iParam0) || func_303(iParam0)) || func_302(iParam0))
		{
			return 0;
		}
	}
	if (!func_301(iParam0))
	{
		return 0;
	}
	if ((!func_300(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_112(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0)
{
	if (func_922(iParam0, 0, 1))
	{
		if (func_922(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_301(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

bool func_302(int iParam0)
{
	if (func_238(iParam0))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

int func_303(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	if (func_139(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_305()
{
	switch (func_211(unk_0x0FFED3E94261A832()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_306(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_281(unk_0x0FFED3E94261A832()))
	{
		switch (func_211(unk_0x0FFED3E94261A832()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

int func_307(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_308(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_308(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_309(iParam0, 0);
	return 0;
}

int func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_922(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_139(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_112(iVar1))
				{
					if (func_311(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_311(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_80())
	{
		if (!bParam2)
		{
			if (func_312(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_80())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_312(int iParam0, int iParam1)
{
	if (iParam1 != func_80())
	{
		if (iParam0 != func_80())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_80())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_313(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_314(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1351505.f_2 == 0)
		{
			Global_1351505.f_2 = 1;
		}
	}
	else if (Global_1351505.f_2 == 1)
	{
		Global_1351505.f_2 = 0;
	}
}

void func_315()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_317())
		{
			func_316();
		}
	}
}

void func_316()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_317()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

int func_318()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_317())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_317())
	{
		return 1;
	}
	return 0;
}

int func_319()
{
	if (func_317())
	{
		if (func_320(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_321()
{
	if (func_317())
	{
		if (func_322(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_323(int iParam0)
{
	if (Global_1351505.f_1 != Global_1351505)
	{
		Global_1351505.f_1 = Global_1351505;
	}
	if (Global_1351505 != iParam0)
	{
		Global_1351505 = iParam0;
	}
}

int func_324(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_371(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_370();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_369())
		{
			if (func_368() > 0 && Global_1574110)
			{
				unk_0x891A3238A7E50954();
				unk_0x11CA0D8AE0C37B1C(fVar7);
				unk_0x47BFFB0507046AE3(18);
				if (unk_0x6235C49EA2DBA22D())
				{
					unk_0x8816A672BCF9F877();
				}
				unk_0x47BFFB0507046AE3(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_356())
		{
			func_355(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_355(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_368() == 1)
		{
			func_354(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_355(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_368() == 0 && !bParam5))
		{
			func_355(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_353();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0x891A3238A7E50954();
				}
				unk_0x47BFFB0507046AE3(18);
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_353();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_354(bVar6, uParam0, 0))
				{
					func_313(uParam0);
					sVar4 = func_351(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_349(iParam1) };
					if (bParam4)
					{
						func_346(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_339(uParam0, func_343(uParam2), func_340(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_330(uParam0, func_332(uParam2), func_331(), -1);
					}
					else if (func_259())
					{
						uParam2->f_34 = Global_1574109;
						func_346(uParam0, sVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_346(uParam0, sVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_325(iParam1);
						func_346(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xF6082E2ADA1C795B(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				Global_1574108 = uParam3;
				Global_1574107 = 1;
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574109)
					{
						unk_0x507FE690B1271947(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_325(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_329())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 24:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 11:
		case 12:
		case 13:
		case 16:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 17;
			break;
		
		case 15:
			iVar0 = 18;
			break;
		
		case 17:
			if (func_328(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_327(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_326(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_326(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_327(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_328(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_329()
{
	return Global_1638223.f_1 == 0;
}

void func_330(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_256(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_256("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_331()
{
	switch (func_211(unk_0x0FFED3E94261A832()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_332(var uParam0)
{
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_211(unk_0x0FFED3E94261A832()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_335())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_334(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_334(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_333(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_334(bool bParam0)
{
	return func_264(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_335()
{
	return (func_338() && func_336(func_337()));
}

bool func_336(int iParam0)
{
	return func_266(iParam0, 1);
}

int func_337()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

bool func_338()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

void func_339(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_256(sParam1);
		}
		else if (func_306(unk_0x0FFED3E94261A832()) == 133)
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT_C");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_256("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_340(var uParam0)
{
	int iVar0;
	
	iVar0 = func_306(unk_0x0FFED3E94261A832());
	if (func_342())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_341())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_341()
{
	if (func_306(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

bool func_342()
{
	return Global_1592329;
}

char* func_343(var uParam0)
{
	int iVar0;
	
	iVar0 = func_306(unk_0x0FFED3E94261A832());
	if (func_342())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_345() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_345() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_341())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_344() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_344()
{
	return Global_2497344.f_4753;
}

int func_345()
{
	if (func_306(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_346(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_270(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(sParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_256(sParam1);
		}
		if (func_369() && iParam6)
		{
			if (func_348())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xADBDBA2DF8443753("LBD_DPD_CNT");
			unk_0xEA97619D8B89D387(iVar0);
			unk_0xEA97619D8B89D387(iVar1);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_256(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_347(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_347(int iParam0)
{
	if (func_328(iParam0) || func_327(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_348()
{
	return Global_1574110;
}

struct<4> func_349(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_350(unk_0x0FFED3E94261A832()) || func_326(unk_0x0FFED3E94261A832()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 16:
		case 14:
		case 15:
		case 17:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1638223.f_30, 16);
			break;
	}
	if (func_259() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_350(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_351(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_259() || unk_0x58478145CAF8429C(uParam1)))
	{
		uVar0 = func_352();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x58478145CAF8429C(sParam1))
	{
		if (Global_1574309 == 1)
		{
			Global_1574309 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 24:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 17:
			case 13:
			case 16:
			case 14:
			case 12:
			case 11:
			case 15:
			case 18:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 20:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_352()
{
	if (unk_0xAB1E825659B8A5D6())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xD2843F73FBE0F430())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9149FCDCB650712D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x7A1C6EE905C175E6())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_353()
{
	Global_36716 = 1;
}

bool func_354(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_matchmaking_card");
	}
	return unk_0xA8AF99BD8D81CFB7(*uParam1);
}

void func_355(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_248();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_249(&(uParam1->f_19));
		}
	}
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0x73F5E7B6BB964839(uParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(uParam1->f_33, 0))
	{
		unk_0x507FE690B1271947(&(uParam1->f_33), 0);
	}
	unk_0x11CA0D8AE0C37B1C(0f);
}

int func_356()
{
	if (func_367())
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	if (!func_364())
	{
		return 0;
	}
	if (!func_362())
	{
		return 0;
	}
	if (func_361(8, -1))
	{
		return 0;
	}
	if (func_368() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_360())
	{
		return 0;
	}
	else if (!func_38(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_359(1) || func_357(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_85(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (Global_1761104)
	{
		return 0;
	}
	if (func_192(0))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (Global_1345093)
	{
		return 0;
	}
	return 1;
}

int func_357(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_358(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x83F6A1E4E653AD75(0, 25) || unk_0x83F6A1E4E653AD75(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0x83F6A1E4E653AD75(0, 19) || (!bParam0 && unk_0xC20E8B2E17B46871(0, 19)))
	{
		return 1;
	}
	if (unk_0x5018862FF5D9F844())
	{
		if (((unk_0x83F6A1E4E653AD75(0, 166) || unk_0x83F6A1E4E653AD75(0, 167)) || unk_0x83F6A1E4E653AD75(0, 168)) || unk_0x83F6A1E4E653AD75(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xC20E8B2E17B46871(0, 166) || unk_0xC20E8B2E17B46871(0, 167)) || unk_0xC20E8B2E17B46871(0, 168)) || unk_0xC20E8B2E17B46871(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_358(int iParam0)
{
	int iVar0;
	
	if (unk_0xE71026F240213063())
	{
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			unk_0xE3B6C923999B844E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_359(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_360()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_361(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

int func_362()
{
	if (func_363() == 0)
	{
		return 1;
	}
	return 0;
}

int func_363()
{
	return Global_1312466.f_18;
}

int func_364()
{
	if (func_365())
	{
		return 1;
	}
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 0;
	}
	if (unk_0xEF08C8E0C4679477() || unk_0x9AF3AC4F52023B45())
	{
		return 0;
	}
	if (unk_0x8F70BD179415A092())
	{
		return 0;
	}
	return 1;
}

bool func_365()
{
	return Global_1312438;
}

bool func_366()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

bool func_367()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_368()
{
	return Global_1351508.f_68;
}

int func_369()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_370()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 25:
		case 26:
			return 1;
			break;
	}
	return 0;
}

int func_372()
{
	if (func_373(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_373(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_139(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

int func_374()
{
	if (func_372())
	{
		return 1;
	}
	if (func_302(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_342())
	{
		return 1;
	}
	if (func_130(unk_0x0FFED3E94261A832()))
	{
		switch (func_306(unk_0x0FFED3E94261A832()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_375(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_375(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_375(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_375(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

int func_376(int iParam0)
{
	if ((iParam0 == 26 && func_130(unk_0x0FFED3E94261A832())) && !func_281(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_129(unk_0x0FFED3E94261A832(), 0) && func_281(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_377(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_130(iParam0) && !func_238(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_281(iParam0);
	uVar3 = func_385();
	uVar4 = func_379();
	if ((bVar1 && (func_237(iParam0) || func_236(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_231(iParam0)) && !func_378(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2497344.f_4828.f_31 != iVar0)
	{
		Global_2497344.f_4828.f_31 = iVar0;
	}
	return iVar0;
}

bool func_378(int iParam0)
{
	return func_187(iParam0, 19);
}

int func_379()
{
	if ((func_187(unk_0x0FFED3E94261A832(), 21) || func_187(unk_0x0FFED3E94261A832(), 22)) || func_382())
	{
		return 1;
	}
	if (func_380())
	{
		func_214(22);
		return 1;
	}
	return 0;
}

int func_380()
{
	if (func_129(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_385() && !func_381()) || func_228(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_213(27);
		}
	}
	return 0;
}

bool func_381()
{
	return Global_1312416.f_1;
}

bool func_382()
{
	return func_383(289, -1);
}

int func_383(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_384(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_141();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

bool func_385()
{
	return Global_1312416;
}

bool func_386()
{
	return unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 1);
}

void func_387()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_388(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_388(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 10))
	{
		if (Local_217.f_34 > -1)
		{
			if (func_386())
			{
				if (!func_379())
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 5))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_217.f_1, 4))
						{
							if (unk_0x2137828D03306CAF(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
									{
										uVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
										if (unk_0xDB61DD81432BD145(uVar11))
										{
											iVar12 = unk_0xB0BB7458627D389F(uVar11);
											if (iVar12 == unk_0x7C214DA899F05536(Local_217.f_34))
											{
												if (unk_0x2137828D03306CAF(Var0.f_1))
												{
													if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
													{
														uVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
														if (unk_0xDB61DD81432BD145(uVar10))
														{
															iVar13 = unk_0xB0BB7458627D389F(uVar10);
															if (iVar13 == unk_0x0FFED3E94261A832())
															{
																unk_0xF6082E2ADA1C795B(&(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1), 5);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_386())
	{
		if (!func_187(unk_0x0FFED3E94261A832(), 20))
		{
			if (unk_0x2137828D03306CAF(Var0.f_0))
			{
				if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
				{
					uVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
					if (unk_0xDB61DD81432BD145(uVar11))
					{
						iVar12 = unk_0xB0BB7458627D389F(uVar11);
						if (unk_0x2137828D03306CAF(Var0.f_1))
						{
							if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
							{
								uVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
								if (unk_0xDB61DD81432BD145(uVar10))
								{
									iVar13 = unk_0xB0BB7458627D389F(uVar10);
									if (iVar13 == unk_0x0FFED3E94261A832())
									{
										if (unk_0x76BCE6C7B20502DA(iVar12))
										{
											if (func_275(iVar12, 1))
											{
												if (Local_217.f_33 > -1)
												{
													iVar14 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_217.f_33));
													if (func_311(iVar12, iVar14, 1))
													{
														func_389(0);
														func_233();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_389(int iParam0)
{
	if (!func_281(unk_0x0FFED3E94261A832()))
	{
		if (iParam0 || func_377(unk_0x0FFED3E94261A832()) != 0)
		{
			func_214(20);
			if (func_130(unk_0x0FFED3E94261A832()))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
				}
			}
		}
	}
}

void func_390()
{
	switch (Local_277[unk_0x88641E5BC172153A() /*6*/].f_2)
	{
		case 0:
			func_682();
			func_391();
			if (Local_217.f_32 == 2)
			{
				Local_277[unk_0x88641E5BC172153A() /*6*/].f_2 = 2;
			}
			else if (Local_217.f_32 == 3)
			{
				Local_277[unk_0x88641E5BC172153A() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_391();
			if (Local_217.f_32 == 3)
			{
				Local_277[unk_0x88641E5BC172153A() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_850();
			break;
	}
}

void func_391()
{
	struct<10> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	char* sVar19;
	int iVar20;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar16 = func_80();
	iVar17 = func_80();
	iVar18 = func_80();
	if (!unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 4))
	{
		if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 9))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 1))
			{
				if (unk_0x88641E5BC172153A() == Local_217.f_33 || func_838() == Local_217.f_33)
				{
					if (func_377(unk_0x0FFED3E94261A832()) >= 2)
					{
						sVar19 = func_681();
						iVar20 = func_680(unk_0x0FFED3E94261A832());
						func_678(87, "GB_WINNER", "BIGM_SGHTYD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
					{
						func_644(1, 1, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
					}
					func_487(142, 1, &Var0, 0);
					unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
				}
				else if (func_386())
				{
					if (func_275(unk_0x0FFED3E94261A832(), 1))
					{
						if (func_377(unk_0x0FFED3E94261A832()) >= 2)
						{
							sVar19 = func_481(unk_0x7C214DA899F05536(Local_217.f_34));
							iVar20 = func_680(unk_0x7C214DA899F05536(Local_217.f_34));
							func_678(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
						{
							func_644(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
						}
						func_487(142, 0, &Var0, 0);
					}
					else
					{
						if (func_377(unk_0x0FFED3E94261A832()) >= 2)
						{
							sVar19 = func_481(unk_0x7C214DA899F05536(Local_217.f_34));
							iVar20 = func_680(unk_0x7C214DA899F05536(Local_217.f_34));
							func_678(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
						{
							func_644(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
						}
						func_487(142, 0, &Var0, 0);
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_470, 9);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 3))
			{
				func_480(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
				{
					func_644(0, 7, 0, 0, -1, -1, -1, -1);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
				}
				func_487(142, 0, &Var0, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 9);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 4))
			{
				if (Local_217.f_35 > -1)
				{
					iVar17 = unk_0x7C214DA899F05536(Local_217.f_35);
				}
				if (unk_0x88641E5BC172153A() == Local_217.f_33)
				{
					if (func_377(unk_0x0FFED3E94261A832()) >= 2)
					{
						if (unk_0x885F483F34E47503(iVar17))
						{
							if (func_275(iVar17, 1))
							{
								sVar19 = func_481(iVar17);
								iVar20 = func_680(iVar17);
							}
							else
							{
								sVar19 = unk_0x4325D353D7D27B34(iVar17);
								iVar20 = 1;
							}
							func_678(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_678(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
					}
					func_487(142, 0, &Var0, 0);
					if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
					{
						func_644(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
					}
				}
				else if (func_838() == Local_217.f_33)
				{
					iVar16 = unk_0x7C214DA899F05536(Local_217.f_34);
					if (iVar16 != func_80())
					{
						if (func_377(unk_0x0FFED3E94261A832()) >= 2)
						{
							if (unk_0x885F483F34E47503(iVar17))
							{
								if (func_275(iVar17, 1))
								{
									sVar19 = func_481(iVar17);
									iVar20 = func_680(iVar17);
								}
								else
								{
									sVar19 = unk_0x4325D353D7D27B34(iVar17);
									iVar20 = 1;
								}
								func_678(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_678(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
							}
						}
						func_487(142, 0, &Var0, 0);
						if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
						{
							func_644(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
						}
					}
				}
				else if (func_386())
				{
					iVar17 = unk_0x7C214DA899F05536(Local_217.f_35);
					if (iVar17 != func_80())
					{
						if (iVar17 == unk_0x0FFED3E94261A832())
						{
							if (func_377(unk_0x0FFED3E94261A832()) >= 2)
							{
								if (func_479(1))
								{
									func_480(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_480(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
							if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
							{
								func_644(1, 1, 0, 0, -1, -1, -1, -1);
								unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
							}
							func_487(142, 1, &Var0, 0);
						}
						else if (func_479(1))
						{
							iVar18 = func_478();
							if (func_311(iVar17, iVar18, 1))
							{
								if (func_377(unk_0x0FFED3E94261A832()) >= 2)
								{
									func_449(87, iVar17, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, -1);
								}
								if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
								{
									func_644(1, 1, 0, 0, -1, -1, -1, -1);
									unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
								}
								func_487(142, 0, &Var0, 0);
							}
							else
							{
								if (func_377(unk_0x0FFED3E94261A832()) >= 2)
								{
									if (unk_0x885F483F34E47503(iVar17))
									{
										if (func_275(iVar17, 1))
										{
											sVar19 = func_481(iVar17);
											iVar20 = func_680(iVar17);
										}
										else
										{
											sVar19 = unk_0x4325D353D7D27B34(iVar17);
											iVar20 = 1;
										}
										func_678(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_480(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
								{
									func_644(0, 2, 0, 0, -1, -1, -1, -1);
									unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
								}
								func_487(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_377(unk_0x0FFED3E94261A832()) >= 2)
							{
								if (unk_0x885F483F34E47503(iVar17))
								{
									if (func_275(iVar17, 1))
									{
										sVar19 = func_481(iVar17);
										iVar20 = func_680(iVar17);
									}
									else
									{
										sVar19 = unk_0x4325D353D7D27B34(iVar17);
										iVar20 = 1;
									}
									func_678(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_480(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
							{
								func_644(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
							}
							func_487(142, 0, &Var0, 0);
						}
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_470, 9);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 5))
			{
				if (func_424())
				{
					if (func_837())
					{
						if (func_377(unk_0x0FFED3E94261A832()) >= 2)
						{
						}
					}
					else if (func_377(unk_0x0FFED3E94261A832()) >= 2)
					{
						func_480(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
				{
					func_644(0, 8, 0, 0, -1, -1, -1, -1);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
				}
				func_487(159, 0, &Var0, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 9);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_470, 9))
		{
			func_417();
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 8))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_471, 8);
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 10))
			{
				if (Local_217.f_34 != -1)
				{
					if (unk_0xAA4F14DA15DB0B51(iLocal_470, 5))
					{
						if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_217.f_34)))
						{
							func_415(unk_0x7C214DA899F05536(Local_217.f_34), 432, 0);
							func_413(unk_0x7C214DA899F05536(Local_217.f_34), 1, 0);
							func_412(unk_0x7C214DA899F05536(Local_217.f_34), 0, 0);
							func_411(unk_0x7C214DA899F05536(Local_217.f_34), 0);
							func_410(unk_0x7C214DA899F05536(Local_217.f_34), Global_262145.f_11007, 0);
							unk_0xF6082E2ADA1C795B(&iLocal_470, 10);
						}
					}
				}
			}
			if (func_392(&uLocal_844, 1, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1), 4);
			}
		}
	}
}

int func_392(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_214(29);
	if ((*uParam0 > 0 && !func_317()) && func_377(unk_0x0FFED3E94261A832()) != 0)
	{
		if (!func_407())
		{
			func_406();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 2);
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_405(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_399(iParam2);
				func_405(uParam0, 2);
			}
			break;
		
		case 2:
			func_399(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_393(func_394(0)))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				func_405(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
				func_405(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
			unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_393(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

char* func_394(int iParam0)
{
	if (((func_397(unk_0x0FFED3E94261A832()) || func_396(unk_0x0FFED3E94261A832())) || func_335()) || iParam0)
	{
		if (func_396(unk_0x0FFED3E94261A832()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_308(func_395()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_395()
{
	return Global_1636589;
}

bool func_396(int iParam0)
{
	return func_309(func_211(iParam0), 0);
}

bool func_397(int iParam0)
{
	return func_398(func_211(iParam0));
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148 && func_266(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_399(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0))
	{
		if ((((((((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_922(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0xF4EE9D6C8E60AE22()) && !func_187(unk_0x0FFED3E94261A832(), 22)) && func_377(unk_0x0FFED3E94261A832()) != 0) && !func_403(func_404())) && !func_397(unk_0x0FFED3E94261A832())) && !func_402(func_211(unk_0x0FFED3E94261A832())))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 1);
			func_401(func_394(iParam0), -1);
			func_400(1);
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 0);
		}
	}
}

void func_400(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_334(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_317())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_401(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_404()
{
	var uVar0;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x35302CD5A5D37EED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	return 0;
}

void func_405(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_406()
{
	Global_2456236 = 1;
}

int func_407()
{
	if (((((((func_211(unk_0x0FFED3E94261A832()) == 170 || func_211(unk_0x0FFED3E94261A832()) == 219) || func_211(unk_0x0FFED3E94261A832()) == 221) || func_211(unk_0x0FFED3E94261A832()) == 220) || func_211(unk_0x0FFED3E94261A832()) == 216) || func_211(unk_0x0FFED3E94261A832()) == 215) || func_211(unk_0x0FFED3E94261A832()) == 214) || func_211(unk_0x0FFED3E94261A832()) == 218)
	{
		return 1;
	}
	if (func_408(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_922(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_409(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
	}
	return -1;
}

void func_410(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_220())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_772[iParam0]) || Global_2415029.f_772[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_389), iVar0);
			Global_2415029.f_541[iVar0] = uParam1;
			Global_2415029.f_772[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_389), iVar0);
			Global_2415029.f_772[iParam0] = -1;
		}
	}
}

void func_411(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_2415029.f_365), iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_2415029.f_365), iParam0);
	}
	if (unk_0xBDD3EABACAB97D09(Global_2415029[iParam0]))
	{
		if (bParam1)
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 0);
		}
		else
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 1);
		}
	}
}

void func_412(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_922(iParam0, 1, 1))
		{
			Global_2415029.f_706[iParam0] = unk_0xFF09208EC90C94CB();
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_364), iParam0);
			func_411(iParam0, bParam2);
		}
	}
	else
	{
		func_411(iParam0, bParam2);
		unk_0x507FE690B1271947(&(Global_2415029.f_364), iParam0);
		Global_2415029.f_706[iParam0] = -1;
	}
}

void func_413(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_220())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_414(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = iParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_414(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

void func_415(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_80())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_220())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_574[iParam0]) || Global_2415029.f_574[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_416();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_416();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_416()
{
	Global_2415029.f_1002 = 1;
}

void func_417()
{
	if (!func_423())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_418();
}

void func_418()
{
	func_420();
	func_419(0);
}

void func_419(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x591AF4C50B46E014();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x11ABC381A58DD5AB();
		Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_420()
{
	if (!func_422())
	{
	}
	if (func_423())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_421();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_421()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			unk_0xEA97619D8B89D387(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_422()
{
	if (!func_423())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_421();
	return unk_0x0D3452E263E036CA();
}

int func_423()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_424()
{
	if (!func_425(1))
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	return 1;
}

int func_425(bool bParam0)
{
	if (func_228(unk_0x0FFED3E94261A832(), 21))
	{
		return 0;
	}
	if (unk_0x1CF28DE85743D98B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x45A42C7863C1A2B9())
		{
			return 0;
		}
	}
	if (func_113(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_448())
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (func_360())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_39(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_362())
	{
		return 0;
	}
	if (func_228(unk_0x0FFED3E94261A832(), 0) || func_228(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_228(unk_0x0FFED3E94261A832(), 12) || func_228(unk_0x0FFED3E94261A832(), 14)) || func_228(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_446(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		if (!func_431())
		{
			return 0;
		}
	}
	if (func_430())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_429(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_428())
	{
		return 0;
	}
	if (func_427(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (func_426(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_426(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_428()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_429(int iParam0)
{
	if (!func_922(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

bool func_430()
{
	return Global_91829.f_310 > 0;
}

int func_431()
{
	int iVar0;
	
	iVar0 = func_211(unk_0x0FFED3E94261A832());
	if (((func_445(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15) || func_444(unk_0x0FFED3E94261A832())) || func_443(unk_0x0FFED3E94261A832())) || func_438(unk_0x0FFED3E94261A832()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_436(unk_0x0FFED3E94261A832()))
	{
		if (func_435(iVar0) || func_434(iVar0))
		{
			return 1;
		}
	}
	if (func_408(unk_0x0FFED3E94261A832()))
	{
		if (func_434(iVar0))
		{
			return 1;
		}
	}
	if (func_433(unk_0x0FFED3E94261A832()))
	{
		if (func_432(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_922(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_409(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_434(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_436(int iParam0)
{
	if (func_437(Global_1592456[iParam0 /*635*/].f_259.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_438(int iParam0)
{
	if (func_439(Global_1592456[iParam0 /*635*/].f_259.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_439(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_440(unk_0x0FFED3E94261A832(), 0);
	}
	if (bParam1)
	{
		if (func_440(unk_0x0FFED3E94261A832(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_440(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_80())
	{
		if (!func_442(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_441(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

int func_441(int iParam0)
{
	if (iParam0 != func_80())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 9);
	}
	return 0;
}

int func_442(int iParam0)
{
	if (iParam0 != func_80())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 2);
	}
	return 0;
}

int func_443(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_922(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_409(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_444(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_922(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_409(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_446(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1592456[iParam0 /*635*/].f_259.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_444(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_408(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_443(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_433(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_447()
{
	return Global_1312852;
}

bool func_448()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_449(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_477(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_69 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_70 = iParam7;
	if (iParam8 != -1)
	{
		unk_0xF6082E2ADA1C795B(&(Var0.f_67), iParam8);
	}
	return func_450(&Var0);
}

int func_450(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_460(uParam0, uParam0->f_16);
	func_459(uParam0);
	if (func_458(uParam0->f_1))
	{
		func_451();
		if (Global_2434604.f_2483[0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434604.f_2483[0 /*76*/].f_1 == 13 || Global_2434604.f_2483[0 /*76*/].f_1 == 53) || Global_2434604.f_2483[0 /*76*/].f_1 == 54) || Global_2434604.f_2483[0 /*76*/].f_1 == 58)
		{
			Global_2434604.f_2483[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434604.f_2483[iVar0 + 1 /*76*/] = { Global_2434604.f_2483[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434604.f_2483[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_451();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 1);
				Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_320(Global_2434604.f_2483[iVar0 /*76*/].f_1))
				{
					Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
					unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_451()
{
	bool bVar0;
	
	if (Global_2434604.f_2790)
	{
		return;
	}
	if (!Global_70068)
	{
		Global_70068 = 1;
		bVar0 = true;
	}
	func_452();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_452()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_456(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_453(&(Global_2434604.f_2791.f_1));
}

void func_453(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x73F5E7B6BB964839(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x5018862FF5D9F844())
		{
			unk_0xD1FCC52F87A98873(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD426F7366505EADF(0);
			unk_0x8123397DC676E794();
		}
		unk_0x73F5E7B6BB964839(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x6F0F1C5EEC77F84A(0);
		uParam0->f_564 = 0;
	}
	if (!Global_70068)
	{
		if (!unk_0x859EE44BE17CBC0F(unk_0x8A41C463063AFC8E()))
		{
			if (!Global_70069)
			{
				if (unk_0xF4EE9D6C8E60AE22() && !func_455(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_454(0);
}

void func_454(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_455(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_456(var uParam0)
{
	func_457(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_457(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_458(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_459(var uParam0)
{
	if (func_322(uParam0->f_1))
	{
		uParam0->f_70 = func_280();
	}
}

void func_460(var uParam0, int iParam1)
{
	if (func_322(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_80())
	{
		return;
	}
	if (func_320(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_461(iParam1, -2, 0, 0);
		}
	}
}

int func_461(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_85(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_85(unk_0x0FFED3E94261A832()) || (func_476() && func_475())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_474();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(uVar1))
			{
				if (unk_0xB0BB7458627D389F(uVar1) != -1)
				{
					if (func_922(unk_0xB0BB7458627D389F(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_472(iParam1, iParam0, 0);
							}
							else
							{
								return func_468(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_468(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_472(iParam1, iParam0, 0);
				}
				else
				{
					return func_462(0, -1, 0);
				}
			}
			else
			{
				return func_462(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_472(iParam1, iParam0, 0);
		}
		else
		{
			return func_468(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_468(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_462(bool bParam0, int iParam1, bool bParam2)
{
	return func_463(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_463(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_84(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_467(1);
				}
				else
				{
					return func_467(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_464(iVar0, iParam2, 1);
			}
			else
			{
				return func_464(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_467(1);
	}
	return func_467(0);
}

int func_464(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_466(iParam0, iParam1);
	if (func_465(Global_1638223.f_93532))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_465(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_84(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_467(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_468(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_470())
			{
				iVar3 = func_279(iParam0);
				if (!iVar3 == -1)
				{
					return func_277(iVar3);
				}
			}
			if ((func_123(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_84(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_467(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_469(1);
			}
			else
			{
				return func_463(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_467(1);
			}
			else
			{
				return func_463(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_279(iParam0);
	if (!iVar4 == -1)
	{
		return func_277(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_469(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_470()
{
	if (func_260() || func_471())
	{
		return 1;
	}
	return 0;
}

var func_471()
{
	return Global_2445217.f_13;
}

int func_472(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_470())
	{
		iVar1 = func_279(iParam1);
		if (!iVar1 == -1)
		{
			return func_277(iVar1);
		}
	}
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_463(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_473(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_473(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_474()
{
	return Global_2359301.f_2;
}

bool func_475()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_476()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

void func_477(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_80();
	uParam1->f_17 = func_80();
	uParam1->f_18 = func_80();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_478()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

bool func_479(bool bParam0)
{
	return func_275(unk_0x0FFED3E94261A832(), bParam0);
}

int func_480(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_477(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_450(&Var0);
}

char* func_481(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		uVar0 = func_486(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		uVar0 = func_484(iParam0, 0);
		return uVar0;
	}
	if (((func_187(iParam0, 28) || func_187(unk_0x0FFED3E94261A832(), 28)) || func_483(iParam0)) && !func_482(iParam0))
	{
		return func_484(iParam0, 0);
	}
	iVar1 = func_81(iParam0);
	if (iVar1 != func_80())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_484(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_80())
	{
		uVar0 = func_486(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar0))
		{
			return func_484(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_482(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_82(iParam0) };
	if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_483(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_82(iParam0) };
	if (unk_0x429A1F8C699BEE23() || unk_0x5018862FF5D9F844())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			return 0;
		}
	}
	else if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_484(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_264(iParam0, 1))
		{
			return func_485();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

var func_485()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

var func_486(var uParam0)
{
	return uParam0;
}

void func_487(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	func_642(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_16829);
		}
		else
		{
			iVar1 = (iVar1 + func_641(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_640(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16828);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_638(iParam0))
	{
		if (bParam1)
		{
			if (func_637(unk_0x0FFED3E94261A832()) > 0)
			{
				func_636();
			}
			else
			{
				func_635();
			}
		}
		else
		{
			func_634();
		}
	}
	func_618(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_615(iParam0, uParam2, &iVar0, &uVar5);
	func_576(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_337();
	if (iVar6 != func_80() && iParam0 != 148)
	{
		if (func_275(unk_0x0FFED3E94261A832(), 0))
		{
			if (!func_311(unk_0x0FFED3E94261A832(), iVar6, 1))
			{
				func_560(&iVar0, 1);
			}
		}
	}
	func_557(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1773254.f_10 = iVar1;
		func_556();
		func_514(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1773254.f_9 = iVar0;
		iVar11 = func_478();
		if (iVar11 != func_80())
		{
			func_513(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_479(1);
		if (iParam0 == 168)
		{
			if (!func_512())
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_511())
			{
				if (!func_512())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_512())
			{
				func_502(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2595364[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_821())
			{
				if (!func_512())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_512())
			{
				func_502(-856006867, iVar0, &iVar14, 0, 1, 0);
				Global_2595364[iVar14 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar14 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar14 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (func_512())
		{
			func_502(-856006867, iVar0, &iVar15, 0, 1, 0);
			Global_2595364[iVar15 /*76*/].f_8.f_54 = uVar9;
			Global_2595364[iVar15 /*76*/].f_8.f_55 = uVar10;
			Global_2595364[iVar15 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xD2924B7B97D1AE97(uVar9, uVar10, iVar0, bVar12);
		}
		func_501(iParam0, iVar0);
		if (func_500(iParam0))
		{
			if (func_499(iParam0) > -1)
			{
				func_498(func_499(iParam0), iVar0);
			}
		}
		Global_2456893 = iVar0;
		func_497(&Global_2455167, 0, 0);
	}
	if (func_231(unk_0x0FFED3E94261A832()) || func_281(unk_0x0FFED3E94261A832()))
	{
		func_488(iParam0);
	}
	if (func_398(iParam0))
	{
		Global_1773272.f_13 = iVar0;
		Global_1773272.f_14 = iVar1;
	}
	if (func_402(iParam0))
	{
		Global_1773325.f_13 = iVar0;
		Global_1773325.f_14 = iVar1;
	}
	if (func_432(iParam0))
	{
		Global_1773387.f_12 = iVar0;
		Global_1773387.f_13 = iVar1;
	}
}

void func_488(int iParam0)
{
	if (func_496(unk_0x0FFED3E94261A832()) && func_511())
	{
		if (func_435(iParam0))
		{
			func_491(6303, -1);
		}
		else if (func_490(iParam0))
		{
			func_491(6305, -1);
		}
		else if (func_309(iParam0, 1))
		{
			func_491(6306, -1);
		}
		else if (func_489(iParam0))
		{
			func_491(6307, -1);
		}
	}
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_491(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_495(iParam0, func_384(iParam1), 0);
	iVar0++;
	if (!func_494(iParam0))
	{
		func_493(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_492(iParam0, iVar0, iParam1, 1);
	}
}

void func_492(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_384(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_384(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_384(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_384(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_384(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_384(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_384(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_384(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_384(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_384(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_384(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_384(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_384(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_384(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_384(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_384(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_384(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_384(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_384(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_384(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_384(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_384(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_384(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_384(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_384(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_384(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_384(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_384(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_384(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_384(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_384(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_384(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_384(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_493(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_384(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_494(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

int func_495(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_384(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_496(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_97, 14);
}

void func_497(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

void func_498(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2497344.f_271 = iParam0;
		if (iParam1 > Global_262145.f_5500)
		{
			iParam1 = Global_262145.f_5500;
		}
		Global_2497344.f_272 = iParam1;
		Global_2497344.f_273 = 0;
	}
}

int func_499(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_501(int iParam0, int iParam1)
{
	if (func_496(unk_0x0FFED3E94261A832()) && func_511())
	{
		if (func_435(iParam0) && iParam1 > 0)
		{
			func_493(6304, (func_495(6304, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_502(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_512())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_503(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_503(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_503(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_512())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_141()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_510(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_509(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_504(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_504(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_505(iParam0);
	}
}

void func_505(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_512())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_508(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_506(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_506(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_507(&(uParam0->f_8.f_3));
	func_507(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_507(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_508(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_509(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_510(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_512())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = uParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = uParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_511()
{
	return func_336(unk_0x0FFED3E94261A832());
}

int func_512()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

void func_513(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1622795[iParam0 /*431*/].f_11.f_7[0];
	*uParam2 = Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_514(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_515(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_515(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_525(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_521(unk_0x585F703DF3E83B6E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_516(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_516(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_519(iParam0, 1) };
	if (iParam0 == func_518(unk_0x2A5EB8B0FE590B91()))
	{
		func_517(1);
	}
	func_521(Var0, iParam1, 0, sParam2, iParam3);
}

void func_517(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_518(var uParam0)
{
	return uParam0;
}

Vector3 func_519(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC30ED45C83B62BDA())
	{
		Var3 = { unk_0x7635C19924563670(2) };
	}
	if (iParam0 == func_520(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
	{
		Var0 = { unk_0x82D9CF397BA8C885(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		fVar6 = unk_0x6DAB28241B34DEED(iParam0);
		if (unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_520(var uParam0)
{
	return uParam0;
}

void func_521(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434604.f_1065[iVar0 /*30*/].f_6 == 0 || Global_2434604.f_1065[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434604.f_1065[iVar1 /*30*/] = { Param0 };
			Global_2434604.f_1065[iVar1 /*30*/].f_6 = 1;
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_524(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_523();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_522();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam6);
		}
	}
}

int func_522()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_523()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_524(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(unk_0x616AF251C179EE09(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_525(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_526(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_526(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_555(unk_0x0FFED3E94261A832()) || func_554(unk_0x0FFED3E94261A832()))
	{
		if (Global_262145.f_8301 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8301;
		}
	}
	else if (Global_262145.f_5551 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5551;
	}
	if (func_553(uParam2))
	{
	}
	if (func_552())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_550(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_549(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_547(0, &iVar1);
					break;
				
				case 3:
					func_547(1, &iVar1);
					break;
				
				case 1:
					func_545(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1779834)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_544(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_536((func_543(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_544(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_531(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_527((func_529(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_527((func_529(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_527(int iParam0)
{
	if (func_552())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_528(joaat("mpply_globalxp"), iParam0);
	}
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
}

int func_529(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_922(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_530(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_530(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_530(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_531(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_82(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_534(func_535(&Var0));
			if (iVar13 == 0)
			{
				func_533(&Global_1361887, iParam0);
				func_532(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_533(&Global_1361888, iParam0);
				func_532(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_533(&Global_1361889, iParam0);
				func_532(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_533(&Global_1361890, iParam0);
				func_532(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_533(&Global_1361891, iParam0);
				func_532(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_532(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_533(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_534(int iParam0)
{
	if (iParam0 == Global_1361882)
	{
		return 0;
	}
	else if (iParam0 == Global_1361883)
	{
		return 1;
	}
	else if (iParam0 == Global_1361884)
	{
		return 2;
	}
	else if (iParam0 == Global_1361885)
	{
		return 3;
	}
	else if (iParam0 == Global_1361886)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_535(var uParam0)
{
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return Global_2454636;
		}
	}
	return Global_2454636;
}

void func_536(int iParam0, int iParam1, int iParam2)
{
	if (func_552())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_384(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_384(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_542(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_540(iParam0, 1);
		}
		func_492(635, iParam0, -1, 1);
		func_493(636, func_540(iParam0, 1), -1, 1, 0);
		Global_1362002[func_384(-1)] = iParam0;
		func_537(7, 0);
	}
}

void func_537(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_539(iParam0, iParam1))
	{
		iVar0 = func_538();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_538()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_539(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_540(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_541(iParam0, 0);
}

int func_541(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_542(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

int func_543(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_384(-1)];
			}
			else if (func_542(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_384(-1)];
	}
	return 0;
}

void func_544(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_495(iParam0, func_384(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_494(iParam0))
	{
		func_493(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_492(iParam0, iVar0, iParam2, 1);
	}
}

void func_545(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		iVar4 = unk_0xBA948A9E34D09E6E(iVar0);
		if (unk_0x9E8AB4FC19962A90(iVar4))
		{
			iVar5 = unk_0x2AFA21CE4322B48D(iVar4);
			if (unk_0x220AE8028FACE96A(iVar5) != -1)
			{
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_84(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_83(unk_0x0FFED3E94261A832(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_546(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_546(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_546(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_547(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			iVar3 = iVar0;
			if (unk_0x9E8AB4FC19962A90(iVar3))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(iVar3);
				if (func_922(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_83(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_922(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_548(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_546(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_546(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_548(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_75(iParam0), func_75(iParam1));
	return 0f;
}

int func_549(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_546(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_550(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_543(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_543(unk_0x0FFED3E94261A832());
		}
	}
	if (func_551(8000, 0, 0) > 0)
	{
		if (func_551(8000, 0, 0) < (iParam0 + func_543(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_551(8000, 0, 0) - func_543(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_551(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_282038[iParam0];
}

int func_552()
{
	return 1;
}

int func_553(var uParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_554(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_555(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_556()
{
	Global_2456235 = 1;
}

void func_557(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_192(7))
	{
		return;
	}
	iVar0 = func_559(iParam0);
	iVar1 = func_558(iParam0);
	iVar2 = unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(Global_2497344.f_4828.f_80, unk_0x11ABC381A58DD5AB()));
	if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_19497)
		{
			iVar2 = Global_262145.f_19497;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_19477)
		{
			iVar2 = Global_262145.f_19477;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_19489)
		{
			iVar2 = Global_262145.f_19489;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17031)
		{
			iVar2 = Global_262145.f_17031;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17032)
		{
			iVar2 = Global_262145.f_17032;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17030)
		{
			iVar2 = Global_262145.f_17030;
		}
	}
	else if (func_435(iParam0))
	{
		if (iVar2 > Global_262145.f_17033)
		{
			iVar2 = Global_262145.f_17033;
		}
	}
	else if (func_309(iParam0, 0) || func_490(iParam0))
	{
		if (iVar2 > Global_262145.f_17034)
		{
			iVar2 = Global_262145.f_17034;
		}
	}
	else if (iVar2 > Global_262145.f_11047)
	{
		iVar2 = Global_262145.f_11047;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11138;
		
		case 152:
			return Global_262145.f_11173;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11161;
		
		case 157:
			return Global_262145.f_11128;
		
		case 159:
			return Global_262145.f_11111;
		
		case 164:
			return Global_262145.f_11151;
		
		case 160:
			return Global_262145.f_11201;
		
		case 162:
			return Global_262145.f_11221;
		
		case 163:
			return Global_262145.f_11186;
		
		case 154:
			return Global_262145.f_11256;
		
		case 155:
			return Global_262145.f_11246;
		
		case 153:
			return Global_262145.f_11210;
		
		case 170:
			return Global_262145.f_13547;
		
		case 171:
			return Global_262145.f_13606;
		
		case 172:
			return Global_262145.f_13624;
		
		case 173:
			return Global_262145.f_13565;
		
		case 166:
			return Global_262145.f_13580;
		
		case 167:
			return Global_262145.f_13671;
		
		case 169:
			return Global_262145.f_13643;
		
		case 168:
			return Global_262145.f_13636;
		
		case 179:
			return Global_262145.f_16913;
		
		case 180:
			return Global_262145.f_16692;
		
		case 182:
			return Global_262145.f_16692;
		
		case 183:
			return Global_262145.f_16692;
		
		case 185:
			return Global_262145.f_16692;
		
		case 186:
			return Global_262145.f_16692;
		
		case 189:
			return Global_262145.f_16913;
		
		case 190:
			return Global_262145.f_16568;
		
		case 191:
			return Global_262145.f_16659;
		
		case 192:
			return Global_262145.f_16453;
		
		case 193:
			return Global_262145.f_16913;
		
		case 194:
			return Global_262145.f_16913;
		
		case 195:
			return Global_262145.f_16692;
		
		case 197:
			return Global_262145.f_16692;
		
		case 198:
			return Global_262145.f_16692;
		
		case 199:
			return Global_262145.f_16913;
		
		case 200:
			return Global_262145.f_16913;
		
		case 201:
			return Global_262145.f_16913;
		
		case 205:
			return Global_262145.f_16913;
		
		case 207:
			return Global_262145.f_16692;
		
		case 208:
			return Global_262145.f_16692;
		
		case 209:
			return Global_262145.f_16692;
		
		case 210:
			return Global_262145.f_16913;
		
		case 211:
			return Global_262145.f_16913;
		
		case 214:
			return Global_262145.f_17709;
		
		case 215:
			return Global_262145.f_17711;
		
		case 216:
			return Global_262145.f_17713;
		
		case 217:
			return Global_262145.f_17715;
		
		case 218:
			return Global_262145.f_17717;
		
		case 219:
			return Global_262145.f_17719;
		
		case 220:
			return Global_262145.f_17721;
		
		case 221:
			return Global_262145.f_17723;
		
		case 225:
			if (func_479(0) || func_334(0))
			{
				return Global_262145.f_19499;
			}
			break;
		
		case 226:
			if (func_479(0) || func_334(0))
			{
				return Global_262145.f_19479;
			}
			break;
		
		case 227:
			if (func_479(0) || func_334(0))
			{
				return Global_262145.f_19491;
			}
			break;
	}
	return 0;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11137;
		
		case 152:
			return Global_262145.f_11172;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11160;
		
		case 157:
			return Global_262145.f_11127;
		
		case 159:
			return Global_262145.f_11110;
		
		case 164:
			return Global_262145.f_11150;
		
		case 160:
			return Global_262145.f_11200;
		
		case 162:
			return Global_262145.f_11220;
		
		case 163:
			return Global_262145.f_11185;
		
		case 154:
			return Global_262145.f_11255;
		
		case 155:
			return Global_262145.f_11245;
		
		case 153:
			return Global_262145.f_11209;
		
		case 170:
			return Global_262145.f_13546;
		
		case 171:
			return Global_262145.f_13605;
		
		case 172:
			return Global_262145.f_13623;
		
		case 173:
			return Global_262145.f_13564;
		
		case 166:
			return Global_262145.f_13579;
		
		case 179:
			return Global_262145.f_16912;
		
		case 180:
			return Global_262145.f_16691;
		
		case 182:
			return Global_262145.f_16691;
		
		case 183:
			return Global_262145.f_16691;
		
		case 185:
			return Global_262145.f_16691;
		
		case 186:
			return Global_262145.f_16691;
		
		case 189:
			return Global_262145.f_16912;
		
		case 193:
			return Global_262145.f_16912;
		
		case 194:
			return Global_262145.f_16912;
		
		case 195:
			return Global_262145.f_16691;
		
		case 197:
			return Global_262145.f_16691;
		
		case 198:
			return Global_262145.f_16691;
		
		case 199:
			return Global_262145.f_16912;
		
		case 200:
			return Global_262145.f_16912;
		
		case 201:
			return Global_262145.f_16912;
		
		case 205:
			return Global_262145.f_16912;
		
		case 207:
			return Global_262145.f_16691;
		
		case 208:
			return Global_262145.f_16691;
		
		case 209:
			return Global_262145.f_16691;
		
		case 210:
			return Global_262145.f_16912;
		
		case 211:
			return Global_262145.f_16912;
		
		case 190:
			if (!func_821())
			{
				return Global_262145.f_16567;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_821())
			{
				return Global_262145.f_16658;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_821())
			{
				return Global_262145.f_16452;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17708;
		
		case 215:
			return Global_262145.f_17710;
		
		case 216:
			return Global_262145.f_17712;
		
		case 217:
			return Global_262145.f_17714;
		
		case 218:
			return Global_262145.f_17716;
		
		case 219:
			return Global_262145.f_17718;
		
		case 220:
			return Global_262145.f_17720;
		
		case 221:
			return Global_262145.f_17722;
		
		case 225:
			if (func_334(0))
			{
				return Global_262145.f_19498;
			}
			break;
		
		case 226:
			if (func_334(0))
			{
				return Global_262145.f_19478;
			}
			break;
		
		case 227:
			if (func_334(0))
			{
				return Global_262145.f_19490;
			}
			break;
	}
	return 0;
}

void func_560(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_821())
		{
			if (func_479(0))
			{
				if (!func_334(0))
				{
					if (unk_0x885F483F34E47503(func_478()))
					{
						if (func_575() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_575());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_573(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_566("GB_BCUT_TICK1", func_478(), iVar0, 0, 0, 1, 1);
						}
						func_565(20);
						func_561(func_478(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_561(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_922(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_564(iParam0);
		func_563(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_562(iParam0));
	}
}

var func_562(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_563(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_564(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

void func_565(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_566(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(func_461(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_571(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_567(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_567(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_570() || !unk_0x1B154DE2D4606530()) || !func_139(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_568(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_568(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_569(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_569(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_570()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

var func_571(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_572(&cVar0);
}

var func_572(char[4] cParam0)
{
	return cParam0;
}

void func_573(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_574(1);
	}
	else
	{
		iVar1 = func_574(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_574(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_575()
{
	return Global_262145.f_11041;
}

void func_576(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_334(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_821())
		{
			iVar15 = unk_0x0FFED3E94261A832();
		}
		else
		{
			iVar15 = func_478();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_614(iVar15);
			iVar0 = (func_613(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_608(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19481));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19480));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x0FFED3E94261A832())
			{
				func_602(iVar16, iVar2);
				if (func_598(iVar16) >= Global_262145.f_19038 || iVar2 >= Global_262145.f_19038)
				{
					func_588(5);
				}
				iVar6 = func_587(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_19483);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_19482));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_565(108);
					}
					else
					{
						func_565(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x244673FE98A43CA3())
						{
							iVar19 = iVar18;
							if (unk_0x9E8AB4FC19962A90(iVar19))
							{
								iVar20 = unk_0x2AFA21CE4322B48D(iVar19);
								if (func_586(iVar20))
								{
									func_577(iVar20, 1, 3, 0);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_19484;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_19485;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1779842 = *iParam2;
					func_565(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_577(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_580(iParam0);
	if (bParam3)
	{
		func_579(iParam0, uVar0, iParam1, iParam2);
	}
	else
	{
		func_578(iParam0, uVar0, iParam1, iParam2);
	}
}

void func_578(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_564(iParam0);
	func_563(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_80())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_562(iParam0));
		}
	}
}

void func_579(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = func_564(iParam0);
	func_563(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_80())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_562(iParam0));
		}
	}
}

int func_580(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_585();
	iVar0 = func_583(iParam0, iVar0);
	iVar1 = Global_1622795[func_478() /*431*/].f_11.f_316;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13507));
	if (iVar0 < func_582())
	{
		iVar0 = func_582();
	}
	if (iVar0 > func_581())
	{
		iVar0 = func_581();
	}
	return iVar0;
}

int func_581()
{
	return Global_262145.f_13508;
}

int func_582()
{
	return Global_262145.f_14683;
}

int func_583(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_637(iParam0) * func_584());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_584()
{
	return Global_262145.f_14682;
}

var func_585()
{
	return Global_262145.f_11033;
}

int func_586(int iParam0)
{
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (iParam0 != unk_0x0FFED3E94261A832())
		{
			if (func_311(iParam0, unk_0x0FFED3E94261A832(), 0))
			{
				if (!func_187(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_587(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
		{
			iVar2 = unk_0x7C214DA899F05536(iVar0);
			if (!func_139(iVar2, 0) && !func_311(iVar2, unk_0x0FFED3E94261A832(), 1))
			{
				iVar1++;
			}
			else if (func_139(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_588(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19026)
			{
				if (func_591(Global_262145.f_19027))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19028)
			{
				if (func_591(Global_262145.f_19029))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19030)
			{
				if (func_591(Global_262145.f_19031))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19032)
			{
				if (func_591(Global_262145.f_19033))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19034)
			{
				if (func_591(Global_262145.f_19035))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19036)
			{
				if (func_591(Global_262145.f_19037))
				{
					func_589("CLOTHAWDSTRAP3", Global_262145.f_19038, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19039)
			{
				if (func_591(Global_262145.f_19040))
				{
					func_589("CLOTHAWDSTRAP5", Global_262145.f_19168, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19042)
			{
				if (func_591(Global_262145.f_19043))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19044)
			{
				if (func_591(Global_262145.f_19045))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19046)
			{
				if (func_591(Global_262145.f_19047))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19048)
			{
				if (func_591(Global_262145.f_19049))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19050)
			{
				if (func_591(Global_262145.f_19051))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19052)
			{
				if (func_591(Global_262145.f_19053))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19054)
			{
				if (func_591(Global_262145.f_19055))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19056)
			{
				if (func_591(Global_262145.f_19057))
				{
					func_590("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_589(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(iParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_567(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_590(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x95CE6D748899618C(iParam3);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
	}
	else
	{
		Global_2484572 = { func_82(unk_0x0FFED3E94261A832()) };
		if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
		{
			iVar1 = 0;
			if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2484502.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xCFCC273DCA662841(iVar2, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar1, 0, Global_2484502, unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), Global_1314009, Global_1314010, Global_1314011);
		}
		else
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
	}
	func_567(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_595(15417, -1, -1))
			{
				func_594(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_595(15418, -1, -1))
			{
				func_594(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_595(15425, -1, -1))
			{
				func_594(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_595(15405, -1, -1))
			{
				func_594(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_595(15393, -1, -1))
			{
				func_594(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_595(15409, -1, -1))
			{
				func_594(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_595(15396, -1, -1))
			{
				func_594(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_595(15412, -1, -1))
			{
				func_594(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_595(15403, -1, -1))
			{
				func_594(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_595(15389, -1, -1))
			{
				func_594(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_595(15398, -1, -1))
			{
				func_594(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_595(15400, -1, -1))
			{
				func_594(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_595(15408, -1, -1))
			{
				func_594(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_595(15411, -1, -1))
			{
				func_594(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_595(15397, -1, -1))
			{
				func_594(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_595(15413, -1, -1))
			{
				func_594(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_595(15391, -1, -1))
			{
				func_594(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_595(15388, -1, -1))
			{
				func_594(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_595(15401, -1, -1))
			{
				func_594(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_595(15394, -1, -1))
			{
				func_594(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_595(15406, -1, -1))
			{
				func_594(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_595(15395, -1, -1))
			{
				func_594(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_595(15410, -1, -1))
			{
				func_594(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_595(15407, -1, -1))
			{
				func_594(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_595(15414, -1, -1))
			{
				func_594(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_595(15415, -1, -1))
			{
				func_594(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_595(15399, -1, -1))
			{
				func_594(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_595(15404, -1, -1))
			{
				func_594(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_595(15392, -1, -1))
			{
				func_594(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_595(15390, -1, -1))
			{
				func_594(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_595(15402, -1, -1))
			{
				func_594(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_595(15416, -1, -1))
			{
				func_594(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_383(209, -1))
			{
				func_592(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_595(15426, -1, -1))
			{
				func_594(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_595(15422, -1, -1))
			{
				func_594(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_595(15423, -1, -1))
			{
				func_594(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_595(15421, -1, -1))
			{
				func_594(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_595(15427, -1, -1))
			{
				func_594(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_595(15419, -1, -1))
			{
				func_594(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_595(15420, -1, -1))
			{
				func_594(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_592(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_593())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_384(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_593()
{
	return 1;
	return 0;
}

int func_594(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_141();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_595(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar1 = func_597(iParam0, iParam1);
	uVar2 = func_596(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_596(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_597(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_598(int iParam0)
{
	int iVar0;
	
	iVar0 = func_600(iParam0);
	return func_495(func_599(iVar0), -1, 0);
}

int func_599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3926;
		
		case 1:
			return 3927;
		
		case 2:
			return 3928;
		
		case 3:
			return 3929;
		
		case 4:
			return 3930;
		
		case 5:
			return 5431;
		
		default:
	}
	return 3926;
}

int func_600(int iParam0)
{
	int iVar0;
	
	if (func_601(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_601(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_602(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_600(iParam0);
	iVar1 = func_599(iVar0);
	iVar2 = (func_495(iVar1, -1, 0) + iParam1);
	func_493(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_605(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
			{
				iVar1 = func_599(iVar0);
				iVar3 = (iVar3 + func_495(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_604(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_603(9357, iVar5, -1, 1);
	}
}

var func_603(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_141();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x46377A59ACA37C91(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_605(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar0 = 0;
	iVar1 = func_607(iParam0, iParam1);
	uVar2 = func_606(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_606(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_607(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_608(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_612(iParam1);
	if (func_601(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15512;
				if (func_609(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15517);
				}
				if (func_609(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15522);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15511;
				if (func_609(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15516);
				}
				if (func_609(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15521);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15510;
				if (func_609(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15515);
				}
				if (func_609(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15520);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15508;
				if (func_609(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15513);
				}
				if (func_609(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15518);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15509;
				if (func_609(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15514);
				}
				if (func_609(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15519);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_19506;
				if (func_609(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_19508);
				}
				if (func_609(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_19507);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_609(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_611(iParam0, iParam1))
	{
		iVar0 = func_610(iParam0, iParam1);
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_610(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_601(iParam1) && iParam0 != func_80())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_611(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_601(iParam1) && iParam0 != func_80())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_613(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	if (func_601(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_614(int iParam0)
{
	if (iParam0 == func_80())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

void func_615(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_511())
			{
				Var0 = { func_617() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_608(unk_0x0FFED3E94261A832(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17142);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17141);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_587(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17132);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17131));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_565(86);
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (func_334(0))
			{
				Var15 = { func_616(func_478()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_608(func_478(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17142));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17141));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17181;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17182;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_616(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_185;
}

struct<2> func_617()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_185;
}

void func_618(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_230(unk_0x0FFED3E94261A832()))
		{
			if (bParam1)
			{
				func_633();
			}
			func_632();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_230(unk_0x0FFED3E94261A832()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_624(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_623(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_587(&uVar2);
					iVar4 = Global_262145.f_14693;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13902));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_565(44);
					}
				}
				func_621(*iParam3);
				func_620();
				Global_2497344.f_4828.f_192 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x244673FE98A43CA3())
				{
					iVar8 = iVar7;
					if (unk_0x9E8AB4FC19962A90(iVar8))
					{
						iVar9 = unk_0x2AFA21CE4322B48D(iVar8);
						if (func_586(iVar9))
						{
							func_577(iVar9, 1, 0, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_230(unk_0x0FFED3E94261A832()))
		{
			func_619();
		}
	}
}

void func_619()
{
	int iVar0;
	
	iVar0 = Global_2528811[func_141()];
	iVar0++;
	func_492(3652, iVar0, -1, 1);
}

void func_620()
{
	int iVar0;
	
	iVar0 = Global_2528817[func_141()];
	iVar0++;
	func_492(3651, iVar0, -1, 1);
}

void func_621(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2528820[func_141()];
	iVar0 = (iVar0 + iParam0);
	func_492(3653, iVar0, -1, 1);
	if (func_605(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_622(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_603(7666, iVar2, -1, 1);
	}
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14826;
			break;
		
		case 2:
			return Global_262145.f_14827;
			break;
		
		case 3:
			return Global_262145.f_14828;
			break;
		
		case 4:
			return Global_262145.f_14829;
			break;
		
		case 5:
			return Global_262145.f_14830;
			break;
		
		case 6:
			return Global_262145.f_14831;
			break;
		
		case 7:
			return Global_262145.f_14832;
			break;
		
		case 8:
			return Global_262145.f_14833;
			break;
		
		case 9:
			return Global_262145.f_14834;
			break;
		
		case 10:
			return Global_262145.f_14835;
			break;
		
		case 11:
			return Global_262145.f_14836;
			break;
		
		case 12:
			return Global_262145.f_14837;
			break;
		
		case 13:
			return Global_262145.f_14838;
			break;
		
		case 14:
			return Global_262145.f_14839;
			break;
		
		case 15:
			return Global_262145.f_14840;
			break;
		
		case 16:
			return Global_262145.f_14841;
			break;
		
		case 17:
			return Global_262145.f_14842;
			break;
		
		case 18:
			return Global_262145.f_14843;
			break;
		
		case 19:
			return Global_262145.f_14844;
			break;
		
		case 20:
			return Global_262145.f_14845;
			break;
		
		case 21:
			return Global_262145.f_14846;
			break;
		
		case 22:
			return Global_262145.f_14847;
			break;
		
		case 23:
			return Global_262145.f_14848;
			break;
		
		case 24:
			return Global_262145.f_14849;
			break;
	}
	return 0;
}

var func_623(int iParam0)
{
	if (iParam0 >= Global_262145.f_13880)
	{
		return Global_262145.f_13901;
	}
	else if (iParam0 >= Global_262145.f_13879)
	{
		return Global_262145.f_13900;
	}
	else if (iParam0 >= Global_262145.f_13878)
	{
		return Global_262145.f_13899;
	}
	else if (iParam0 >= Global_262145.f_13877)
	{
		return Global_262145.f_13898;
	}
	else if (iParam0 >= Global_262145.f_13876)
	{
		return Global_262145.f_13897;
	}
	else if (iParam0 >= Global_262145.f_13875)
	{
		return Global_262145.f_13896;
	}
	else if (iParam0 >= Global_262145.f_13874)
	{
		return Global_262145.f_13895;
	}
	else if (iParam0 >= Global_262145.f_13873)
	{
		return Global_262145.f_13894;
	}
	else if (iParam0 >= Global_262145.f_13872)
	{
		return Global_262145.f_13893;
	}
	else if (iParam0 >= Global_262145.f_13871)
	{
		return Global_262145.f_13892;
	}
	else if (iParam0 >= Global_262145.f_13870)
	{
		return Global_262145.f_13891;
	}
	else if (iParam0 >= Global_262145.f_13869)
	{
		return Global_262145.f_13890;
	}
	else if (iParam0 >= Global_262145.f_13868)
	{
		return Global_262145.f_13889;
	}
	else if (iParam0 >= Global_262145.f_13867)
	{
		return Global_262145.f_13888;
	}
	else if (iParam0 >= Global_262145.f_13866)
	{
		return Global_262145.f_13887;
	}
	else if (iParam0 >= Global_262145.f_13865)
	{
		return Global_262145.f_13886;
	}
	else if (iParam0 >= Global_262145.f_13864)
	{
		return Global_262145.f_13885;
	}
	else if (iParam0 >= Global_262145.f_13863)
	{
		return Global_262145.f_13884;
	}
	else if (iParam0 >= Global_262145.f_13862)
	{
		return Global_262145.f_13883;
	}
	else if (iParam0 >= Global_262145.f_13861)
	{
		return Global_262145.f_13882;
	}
	return Global_262145.f_13881;
}

int func_624(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_631(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_630(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_629(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_625(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_625(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_629(unk_0x895FB9FE885E36ED(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_625(int iParam0)
{
	int iVar0;
	
	if (func_628(iParam0))
	{
		iVar0 = func_626(func_627(iParam0));
		return func_495(iVar0, -1, 0);
	}
	return 0;
}

int func_626(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3631;
	}
	else if (iParam0 == 1)
	{
		return 3632;
	}
	else if (iParam0 == 2)
	{
		return 3633;
	}
	else if (iParam0 == 3)
	{
		return 3634;
	}
	else if (iParam0 == 4)
	{
		return 3635;
	}
	return 3631;
}

int func_627(int iParam0)
{
	int iVar0;
	
	if (func_628(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_628(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_629(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14080;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14078;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14082;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14076;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14074;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14084;
	}
	return 0;
}

int func_630(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_628(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1774539[iVar0] == iParam1 && Global_1774546[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_631(int iParam0)
{
	int iVar0;
	
	if (func_628(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_632()
{
	int iVar0;
	
	iVar0 = Global_2528808[func_141()];
	iVar0++;
	Global_2528808[func_141()] = iVar0;
	func_492(3650, iVar0, -1, 1);
}

void func_633()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2528805[func_141()];
	iVar1 = Global_2528814[func_141()];
	iVar0++;
	iVar1++;
	Global_2528805[func_141()] = iVar0;
	Global_2528814[func_141()] = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_102 = iVar1;
	func_492(3648, iVar0, -1, 1);
	func_492(3649, iVar1, -1, 1);
}

void func_634()
{
	if (func_821())
	{
		Global_2445989.f_3066.f_134 = 0;
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
	}
}

void func_635()
{
	if (func_821())
	{
		if (Global_2445989.f_3066.f_134 < 10)
		{
			Global_2445989.f_3066.f_134++;
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

void func_636()
{
	if (func_821())
	{
		if (Global_2445989.f_3066.f_134 > 0)
		{
			Global_2445989.f_3066.f_134 = (Global_2445989.f_3066.f_134 - 1);
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

int func_637(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_27;
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
			if (func_479(1) && !func_334(1))
			{
				if (func_639(func_478()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_639(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11158) * Global_262145.f_11163));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11113));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11135) * Global_262145.f_11139));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11148) * Global_262145.f_11152));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11170) * Global_262145.f_11175));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11332) * Global_262145.f_11333));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11338) * Global_262145.f_11339));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11336) * Global_262145.f_11337));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11330) * Global_262145.f_11331));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11334) * Global_262145.f_11335));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11328) * Global_262145.f_11329));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13603;
		
		case 172:
			return Global_262145.f_13619;
		
		case 173:
			return Global_262145.f_13562;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16836;
		
		case 180:
			return Global_262145.f_16712;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16720;
		
		case 185:
			return Global_262145.f_16729;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16924;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16941;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16789;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16972;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16850;
		
		case 205:
			return Global_262145.f_16959;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16817;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16954;
		
		case 211:
			return Global_262145.f_16918;
		
		case 214:
			return Global_262145.f_17458;
		
		case 215:
			return Global_262145.f_17468;
		
		case 216:
			return Global_262145.f_17478;
		
		case 217:
			return Global_262145.f_17487;
		
		case 218:
			return Global_262145.f_17496;
		
		case 219:
			return Global_262145.f_17512;
		
		default:
	}
	return 0;
}

int func_641(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11159) * Global_262145.f_11164));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11109) * Global_262145.f_11114));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11136) * Global_262145.f_11140));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11149) * Global_262145.f_11153));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11171) * Global_262145.f_11176));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11208) * Global_262145.f_11211));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11254) * Global_262145.f_11257));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11244) * Global_262145.f_11247));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11199) * Global_262145.f_11202));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11219) * Global_262145.f_11224));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11184) * Global_262145.f_11187));
		
		case 170:
			return Global_262145.f_13545;
		
		case 171:
			return Global_262145.f_13604;
		
		case 172:
			return Global_262145.f_13620;
		
		case 173:
			return Global_262145.f_13563;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15640;
		
		case 168:
			return Global_262145.f_15639;
		
		case 179:
			return Global_262145.f_16837;
		
		case 180:
			return Global_262145.f_16713;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16721;
		
		case 185:
			return Global_262145.f_16730;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16925;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16942;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16790;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16973;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16851;
		
		case 205:
			return Global_262145.f_16960;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16818;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16955;
		
		case 211:
			return Global_262145.f_16919;
		
		case 214:
			return Global_262145.f_17459;
		
		case 215:
			return Global_262145.f_17469;
		
		case 216:
			return Global_262145.f_17479;
		
		case 217:
			return Global_262145.f_17488;
		
		case 218:
			return Global_262145.f_17497;
		
		case 219:
			return Global_262145.f_17513;
		
		case 178:
			if (func_821())
			{
				return Global_262145.f_17336;
			}
			else if (bParam1)
			{
				return Global_262145.f_17337;
			}
			break;
		
		case 188:
			if (func_821())
			{
				return Global_262145.f_17420;
			}
			else if (bParam1)
			{
				return Global_262145.f_17421;
			}
			break;
		
		case 225:
			if (func_821() && !func_511())
			{
				if (func_639(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19494;
				}
				else
				{
					return Global_262145.f_19495;
				}
			}
			else if (func_511())
			{
				return Global_262145.f_19496;
			}
			break;
		
		case 226:
			if (func_821() && !func_511())
			{
				if (func_639(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19474;
				}
				else
				{
					return Global_262145.f_19475;
				}
			}
			else if (func_511())
			{
				return Global_262145.f_19476;
			}
			break;
		
		case 227:
			if (func_821() && !func_511())
			{
				if (func_639(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19486;
				}
				else
				{
					return Global_262145.f_19487;
				}
			}
			else if (func_511())
			{
				return Global_262145.f_19488;
			}
			break;
	}
	return 0;
}

void func_642(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_643(iParam0))
	{
		if (!func_821())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11052;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_398(iParam0))
	{
		*uParam1 = (Global_262145.f_16690 / 100f);
		*uParam2 = (Global_262145.f_16690 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11051;
		*uParam2 = Global_262145.f_11050;
	}
	if (func_398(iParam0))
	{
		if (func_275(unk_0x0FFED3E94261A832(), 1))
		{
			*uParam1 = (Global_262145.f_16689 / 100f);
			*uParam2 = (Global_262145.f_16689 / 100f);
		}
	}
	else if (func_275(unk_0x0FFED3E94261A832(), 1))
	{
		*uParam1 = Global_262145.f_11049;
		*uParam2 = Global_262145.f_11048;
	}
	iVar0 = func_337();
	if (iVar0 != func_80())
	{
		if (func_311(unk_0x0FFED3E94261A832(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_644(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_211(unk_0x0FFED3E94261A832());
	if (func_398(iVar0))
	{
		Global_1773272.f_2 = func_677();
		Global_1773272.f_3 = func_676();
		Global_1773272.f_50 = iParam4;
		Global_1773272.f_51 = iParam5;
		Global_1773272.f_10 = unk_0xDA84A1E29323722E();
		Global_1773272.f_20 = (Global_1773272.f_10 - Global_1773272.f_9);
		Global_1773272.f_12 = iParam1;
		Global_1773272.f_19 = func_670(iVar0, bParam0, func_675(bParam3));
		if (bParam0)
		{
			Global_1773272.f_11 = 1;
		}
		else
		{
			Global_1773272.f_11 = 0;
		}
		if ((func_231(unk_0x0FFED3E94261A832()) || func_378(unk_0x0FFED3E94261A832())) || func_281(unk_0x0FFED3E94261A832()))
		{
			Global_1773272.f_8 = 1;
		}
		else
		{
			Global_1773272.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1773272.f_43 = 0;
			Global_1773272.f_45 = func_669(func_478(), iParam2);
			Global_1773272.f_47 = iParam7;
			Global_1773272.f_46 = iParam6;
			Global_1773272.f_52 = func_668(func_478(), iParam2);
		}
		func_666(iVar0);
	}
	else if (func_402(iVar0))
	{
		Global_1773325.f_2 = func_677();
		Global_1773325.f_3 = func_676();
		Global_1773325.f_10 = unk_0xDA84A1E29323722E();
		Global_1773325.f_19 = (Global_1773325.f_10 - Global_1773325.f_9);
		Global_1773325.f_12 = iParam1;
		if (bParam0)
		{
			Global_1773325.f_11 = 1;
		}
		else
		{
			Global_1773325.f_11 = 0;
		}
		if ((func_231(unk_0x0FFED3E94261A832()) || func_378(unk_0x0FFED3E94261A832())) || func_281(unk_0x0FFED3E94261A832()))
		{
			Global_1773325.f_8 = 1;
		}
		else
		{
			Global_1773325.f_8 = 0;
		}
		func_664(iVar0);
	}
	else if (func_432(iVar0))
	{
		Global_1773387.f_2 = func_677();
		Global_1773387.f_3 = func_676();
		Global_1773387.f_9 = unk_0xDA84A1E29323722E();
		Global_1773387.f_18 = (Global_1773387.f_9 - Global_1773387.f_8);
		Global_1773387.f_11 = iParam1;
		Global_1773387.f_7 = func_662();
		Global_1773387.f_42 = func_660(func_141(), 5);
		iVar1 = unk_0x0FFED3E94261A832();
		iVar2 = func_614(iVar1);
		Global_1773387.f_28 = iVar2;
		Global_1773387.f_29 = func_657((func_659(iVar1) || func_658(iVar1)));
		Global_1773387.f_30 = func_657(func_656(iVar1));
		Global_1773387.f_32 = func_657(func_655(iVar1));
		Global_1773387.f_33 = func_657(func_654(iVar1));
		Global_1773387.f_34 = func_657(func_653(iVar1));
		Global_1773387.f_35 = func_657(func_652(0, iVar1) == 1);
		Global_1773387.f_36 = func_657(func_651(iVar1));
		Global_1773387.f_37 = func_657(func_650(iVar1));
		Global_1773387.f_38 = func_657(func_649(iVar1));
		Global_1773387.f_39 = func_657(func_609(iVar1, iVar2, 0));
		Global_1773387.f_40 = func_657(func_609(iVar1, iVar2, 2));
		Global_1773387.f_41 = func_657(func_609(iVar1, iVar2, 1));
		if (func_648(iVar1))
		{
			Global_1773387.f_31 = 2;
		}
		else if (func_647(iVar1))
		{
			Global_1773387.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1773387.f_10 = 1;
		}
		else
		{
			Global_1773387.f_10 = 0;
		}
		if ((func_231(unk_0x0FFED3E94261A832()) || func_378(unk_0x0FFED3E94261A832())) || func_281(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_6 = 1;
		}
		else
		{
			Global_1773387.f_6 = 0;
		}
		Global_1773387.f_21 = -2;
		Global_1773387.f_22 = -2;
		func_645(iVar0);
	}
	else
	{
		Global_1773254.f_6 = unk_0xDA84A1E29323722E();
		if (bParam0)
		{
			Global_1773254.f_7 = 1;
		}
		else
		{
			Global_1773254.f_7 = 0;
		}
		Global_1773254.f_8 = iParam1;
		if (Global_1773254.f_4 == 0)
		{
			if ((func_231(unk_0x0FFED3E94261A832()) || func_378(unk_0x0FFED3E94261A832())) || func_281(unk_0x0FFED3E94261A832()))
			{
				Global_1773254.f_4 = 1;
			}
		}
	}
}

void func_645(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1773387);
	func_646();
}

void func_646()
{
	struct<43> Var0;
	
	Global_1773387 = { Var0 };
	Global_1773387.f_23 = 0;
	Global_1773387.f_24 = 0;
	Global_1773387.f_16 = 0;
}

bool func_647(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 12);
}

bool func_648(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 13);
}

int func_649(int iParam0)
{
	if (iParam0 != func_80())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 12) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 13)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_650(int iParam0)
{
	if (iParam0 != func_80())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_651(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (((((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 3) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 4)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 5)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_652(int iParam0, int iParam1)
{
	if (iParam1 == func_80())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 0))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 3))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 6))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 9))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 12))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 15))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 18))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 21))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 1))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 4))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 7))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 10))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 13))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 16))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 19))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 22))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 2))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 5))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 8))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 11))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 14))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 17))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 20))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 23))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_653(int iParam0)
{
	if (iParam0 != func_80())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 6) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 7)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_654(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 8);
}

bool func_655(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 7);
}

bool func_656(int iParam0)
{
	if (iParam0 == func_80())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 9);
}

int func_657(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_658(int iParam0)
{
	if (iParam0 == func_80())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 11);
}

bool func_659(int iParam0)
{
	if (iParam0 == func_80())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 10);
}

int func_660(int iParam0, int iParam1)
{
	return func_495(func_661(iParam1), iParam0, 0);
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

int func_662()
{
	int iVar0;
	
	if (func_511())
	{
		return 4;
	}
	else if (func_821())
	{
		if (func_639(unk_0x0FFED3E94261A832()))
		{
			return 8;
		}
		return 6;
	}
	if (func_334(1))
	{
		iVar0 = func_663(unk_0x0FFED3E94261A832());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_479(1))
	{
		if (func_639(func_478()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_663(int iParam0)
{
	if (func_275(iParam0, 1))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_318;
	}
	return -1;
}

void func_664(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x76C73F892FF4A48A(&Global_1773325);
	func_665();
}

void func_665()
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1773325 = { Var0 };
	Global_1773325.f_24 = 0;
	Global_1773325.f_25 = 0;
	Global_1773325.f_17 = 0;
}

void func_666(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xEA5062924BF2F0F6(&Global_1773272);
	func_667();
}

void func_667()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1773272 = { Var0 };
	Global_1773272.f_29 = 0;
	Global_1773272.f_30 = 0;
	Global_1773272.f_17 = 0;
}

int func_668(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_609(iParam0, iParam1, 2);
	bVar1 = func_609(iParam0, iParam1, 1);
	bVar2 = func_609(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_669(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	if (func_601(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_670(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_435(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 19;
	}
	else if (func_434(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_309(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16227;
			iVar1 = 20;
		}
	}
	else if (func_398(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xEE4C451D799A4C78(func_674(func_478()), func_673(func_478()), func_677(), func_676(), iVar1, iVar0);
	}
	func_672(iVar0);
	func_671(iVar0);
	return iVar0;
}

void func_671(int iParam0)
{
	int iVar0;
	
	iVar0 = func_495(3943, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_357 = iVar0;
	func_493(3943, iVar0, -1, 1, 0);
}

void func_672(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	Global_1622795[iVar0 /*431*/].f_11.f_356 = (Global_1622795[iVar0 /*431*/].f_11.f_356 + iParam0);
	if (Global_1622795[iVar0 /*431*/].f_11.f_356 < -9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
	else if (Global_1622795[iVar0 /*431*/].f_11.f_356 > 9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
}

int func_673(int iParam0)
{
	if (iParam0 == func_80())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_674(int iParam0)
{
	if (iParam0 == func_80())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_675(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_231(unk_0x0FFED3E94261A832()) || func_281(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_676()
{
	if (Global_1773254.f_3 != 0)
	{
		return Global_1773254.f_3;
	}
	return -1;
}

int func_677()
{
	if (Global_1773254.f_2 != 0)
	{
		return Global_1773254.f_2;
	}
	return -1;
}

int func_678(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_80();
	iVar1 = func_80();
	iVar2 = func_80();
	return func_679(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_679(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_477(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_69 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_70 = uParam12;
	unk_0xF6082E2ADA1C795B(&(Var0.f_67), 2);
	return func_450(&Var0);
}

int func_680(int iParam0)
{
	int iVar0;
	
	iVar0 = func_279(iParam0);
	if (iVar0 != -1)
	{
		return func_277(iVar0);
	}
	return 1;
}

char* func_681()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_81(unk_0x0FFED3E94261A832());
	if (iVar0 != func_80())
	{
		if (iVar0 != unk_0x0FFED3E94261A832())
		{
			if (((func_187(iVar0, 28) || func_187(unk_0x0FFED3E94261A832(), 28)) || func_483(iVar0)) && !func_482(iVar0))
			{
				return func_484(iVar0, 0);
			}
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_484(iVar0, 0);
			}
		}
		uVar1 = func_486(&(Global_1622795[iVar0 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar1))
		{
			return func_484(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_682()
{
	func_817();
	func_772();
	func_761();
	func_751();
	func_704();
	func_699();
	func_686();
	func_683();
}

void func_683()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_782 != Local_217.f_5)
	{
		if (Local_217.f_34 != -1)
		{
			if (func_424())
			{
				if (func_377(unk_0x0FFED3E94261A832()) >= 1)
				{
					if (Local_217.f_5 > 0)
					{
						if (Local_217.f_37 > -1)
						{
							iVar0 = unk_0x7C214DA899F05536(Local_217.f_37);
							if (unk_0x885F483F34E47503(iVar0))
							{
								if (iVar0 != unk_0x0FFED3E94261A832())
								{
									if (func_275(iVar0, 1))
									{
										iVar1 = func_279(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_277(iVar1);
											func_684("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_684("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_782 = Local_217.f_5;
		}
	}
}

int func_684(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(iParam2);
		unk_0xCF6846167A5EFE98(func_571(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_82(iParam1) };
			if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
			{
				iVar17 = 0;
				if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2484502.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_685(&Var1) };
					}
					iVar0 = unk_0xCFCC273DCA662841(iVar18, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar17, 0, Global_2484502, &Var1, Global_1314009, Global_1314010, Global_1314011);
				}
				else
				{
					iVar0 = unk_0xA390BEE87F567563(iVar18, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar17, 0, Global_2484502, Global_1314009, Global_1314010, Global_1314011);
				}
			}
			else
			{
				iVar0 = unk_0xEF731ED745A201C5(0, 1);
			}
		}
		func_567(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_685(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_686()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_837() && !func_386())
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_483.f_0, 0))
	{
		return;
	}
	if (!func_424())
	{
		return;
	}
	iVar0 = func_377(unk_0x0FFED3E94261A832());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_217.f_51)))
	{
		iVar1 = (func_11() - func_698(&(Local_217.f_51), 0, 0));
		iVar2 = (func_176() - Local_217.f_5);
		func_697(iVar1);
		if (iVar1 > 30000)
		{
			func_687(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_687(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_687(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_687(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_695(0) == 0)
	{
		return;
	}
	func_694();
	func_691(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_553(sParam4))
	{
		sVar0 = sParam4;
	}
	func_688(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_688(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_690(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_689(7, iVar0);
		Global_1353013.f_4366[iVar0] = uParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = uParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = uParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_689(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_690(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

void func_691(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_690(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_689(6, iVar0);
		Global_1353013.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_3770.f_183[iVar0] = iParam3;
		Global_1353013.f_3770.f_172[iVar0] = iParam2;
		Global_1353013.f_3770.f_260[iVar0] = iParam4;
		Global_1353013.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1353013.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1353013.f_3770.f_443[iVar0] = iParam7;
		Global_1353013.f_3770.f_454[iVar0] = iParam8;
		Global_1353013.f_3770.f_497[iVar0] = iParam9;
		Global_1353013.f_3770.f_508[iVar0] = iParam10;
		Global_1353013.f_3770.f_205[iVar0] = iParam11;
		Global_1353013.f_3770.f_216[iVar0] = iParam12;
		Global_1353013.f_3770.f_227[iVar0] = iParam13;
		Global_1353013.f_3770.f_238[iVar0] = iParam14;
		Global_1353013.f_3770.f_249[iVar0] = iParam15;
		Global_1353013.f_3770.f_519[iVar0] = iParam16;
		Global_1353013.f_3770.f_530[iVar0] = iParam17;
		Global_1353013.f_3770.f_541[iVar0] = iParam18;
		Global_1353013.f_3770.f_552[iVar0] = iParam19;
		Global_1353013.f_3770.f_563[iVar0] = iParam20;
		Global_1353013.f_3770.f_574[iVar0] = iParam21;
		Global_1353013.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_693())
		{
			Global_1353013.f_1088 = 1;
		}
		if (unk_0x5018862FF5D9F844())
		{
			iVar2 = 0;
			unk_0xEB51D9D737FD6BC1(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1353013.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1353013.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1353013.f_1088 = 1;
			}
			if (func_692())
			{
				Global_1353013.f_1092 = 1;
			}
		}
	}
}

int func_692()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x5018862FF5D9F844())
	{
		unk_0xEB51D9D737FD6BC1(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_693()
{
	if ((unk_0xBC8CC6C19B70E1C4() == 8 || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

void func_694()
{
	unk_0x47BFFB0507046AE3(8);
	unk_0x47BFFB0507046AE3(9);
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(7);
	Global_2456239 = 1;
}

int func_695(bool bParam0)
{
	if (func_696())
	{
		return 0;
	}
	if (func_360())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_922(unk_0x0FFED3E94261A832(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_696()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 12);
}

void func_697(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_471, 8))
	{
		func_188();
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x988197573BDAD49A("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_471, 15);
				unk_0xF6082E2ADA1C795B(&iLocal_471, 9);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_471, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 11))
			{
				if (unk_0x8CF1128C350F1552("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 1);
					unk_0x6040865446FA4030(0);
					unk_0xF6082E2ADA1C795B(&iLocal_471, 11);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 14))
			{
				if (unk_0x988197573BDAD49A("APT_COUNTDOWN_30S"))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_471, 14);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(iLocal_471, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 12))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
						unk_0xF6082E2ADA1C795B(&iLocal_471, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x988197573BDAD49A("APT_FADE_IN_RADIO"))
						{
							unk_0x15AFDA4756FDF7EC("APT_COUNTDOWN_30S_KILL");
							unk_0x507FE690B1271947(&iLocal_471, 9);
						}
					}
				}
			}
		}
	}
}

int func_698(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0);
		}
		else
		{
			return unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), *uParam0);
		}
	}
	return unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0);
}

void func_699()
{
	var uVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_217.f_3))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 2))
			{
				if (unk_0xAA14E382041F4A6A(unk_0xA210FA5BDB2E5744(Local_217.f_3), unk_0x2A5EB8B0FE590B91()))
				{
					unk_0xF6082E2ADA1C795B(&(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1), 2);
					iLocal_780 = unk_0x9FF6FFD9EB30D086();
					if (func_334(1))
					{
						unk_0x08BE237DBCD9CBD9(iLocal_780, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0x08BE237DBCD9CBD9(iLocal_780, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					Local_277[unk_0x88641E5BC172153A() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_473 != Local_217.f_5)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 3))
		{
			unk_0x507FE690B1271947(&(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1), 3);
		}
		if (unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 2))
		{
			if (unk_0x434105A1C45F1BED(Local_217.f_3))
			{
				uVar0 = unk_0x7BAE3A9057619E1F(Local_217.f_3);
				unk_0xA54DE0E68212CD6B(&uVar0);
				unk_0x507FE690B1271947(&(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1), 2);
			}
			else
			{
				unk_0x47ABF422A76CAA6A(Local_217.f_3);
			}
		}
		else
		{
			iLocal_473 = Local_217.f_5;
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_217.f_3))
	{
		if (func_821())
		{
			if (func_837())
			{
				func_701();
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 13))
		{
			if (!func_837() || !func_821())
			{
				unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_217.f_3), 1, 1);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 13);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 3))
		{
			unk_0xCEF34666451D1CD0(unk_0xA210FA5BDB2E5744(Local_217.f_3), 1200);
			unk_0xF6082E2ADA1C795B(&iLocal_470, 3);
		}
	}
	else
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_470, 13))
		{
			unk_0x507FE690B1271947(&iLocal_470, 13);
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_470, 3))
		{
			unk_0x507FE690B1271947(&iLocal_470, 3);
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_475))
		{
			unk_0x789C84F1B8496AD0(&uLocal_475);
		}
	}
	func_700();
}

void func_700()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_424())
	{
		return;
	}
	if (func_377(unk_0x0FFED3E94261A832()) >= 1)
	{
		if (unk_0x3756406E4D76B25E(Local_217.f_3) && !unk_0xA9A04898798AE9E6(unk_0xA210FA5BDB2E5744(Local_217.f_3), 0))
		{
			if (!unk_0xA6A04A00C612EAA5(unk_0xA210FA5BDB2E5744(Local_217.f_3)))
			{
				unk_0xF9C830438D0097FD(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(unk_0x7BAE3A9057619E1F(Local_217.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_701()
{
	int iVar0;
	
	iVar0 = func_377(unk_0x0FFED3E94261A832());
	if (iVar0 < 2)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_475))
		{
			unk_0x789C84F1B8496AD0(&uLocal_475);
		}
		return;
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_475))
	{
		return;
	}
	unk_0x507FE690B1271947(&iLocal_470, 11);
	uLocal_475 = unk_0x9E3A324AB806771E(unk_0x7BAE3A9057619E1F(Local_217.f_3));
	unk_0x697F84823ACFF84C(uLocal_475, 12);
	unk_0x9FD1808EF916E312(uLocal_475, 459);
	unk_0xA6B842B66643C116(uLocal_475, "GB_SGHT_BLP");
	unk_0xD42DEAFD12809447(uLocal_475, 1);
	unk_0x0B584E556B01101F(uLocal_475, Global_262145.f_11007);
	if (func_837())
	{
		func_702(&uLocal_475, 18);
	}
	unk_0xE1E81CBB89115254(uLocal_475, 1);
	iLocal_781 = unk_0x9FF6FFD9EB30D086();
	if (func_334(1))
	{
		unk_0x08BE237DBCD9CBD9(iLocal_781, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", 0);
	}
	else
	{
		unk_0x08BE237DBCD9CBD9(iLocal_781, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
	}
}

void func_702(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		iVar0 = func_703(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, iVar0);
	}
}

int func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_704()
{
	if (unk_0x88641E5BC172153A() != Local_217.f_33)
	{
		return;
	}
	if (unk_0xD0BCF9877CD72A3F(Local_217.f_3))
	{
		if (iLocal_777 != -1)
		{
			iLocal_777 = -1;
		}
		if (unk_0xAA4F14DA15DB0B51(Global_2600685, 20))
		{
			unk_0x507FE690B1271947(&Global_2600685, 20);
		}
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 20))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 21))
		{
			if (iLocal_777 < 0)
			{
				unk_0xF6082E2ADA1C795B(&Global_2600685, 20);
			}
		}
	}
	if (iLocal_778 == -1)
	{
		iLocal_778 = unk_0x895FB9FE885E36ED(0, 3);
	}
	if (iLocal_777 < 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2600685, 21))
		{
			unk_0x507FE690B1271947(&Global_2600685, 21);
			iLocal_777 = 0;
		}
	}
	func_705();
}

void func_705()
{
	bool bVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 4))
	{
		if (iLocal_777 >= 0)
		{
			if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x507FE690B1271947(&Local_483, 0);
				iLocal_777 = -1;
			}
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					func_750(1);
				}
			}
		}
	}
	else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		func_749(&Local_483);
		func_748(&Local_483);
		unk_0x507FE690B1271947(&iLocal_470, 4);
	}
	switch (iLocal_777)
	{
		case 0:
			func_747(1);
			unk_0xC9173FA08E7D8227("HACK", 3);
			iLocal_777++;
			break;
		
		case 1:
			if (func_746(1) && unk_0x44FB58EFDA8731B7(3))
			{
				unk_0xF6082E2ADA1C795B(&Local_483, 0);
				unk_0xF6082E2ADA1C795B(&(Local_483.f_1), 0);
				func_417();
				iLocal_779 = 10;
				if (iLocal_778 == 2)
				{
					Local_483.f_22 = 1;
				}
				else if (iLocal_778 == 1)
				{
					Local_483.f_22 = 0;
					iLocal_779 = 77;
				}
				else if (iLocal_778 == 0)
				{
					iLocal_779 = 50;
					Local_483.f_22 = 0;
				}
				func_741(unk_0x0FFED3E94261A832(), 0, 66048);
				iLocal_777++;
			}
			else
			{
				if (!func_746(1))
				{
				}
				if (!unk_0x44FB58EFDA8731B7(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0x9BF32B79391A5A8E();
			unk_0x27E1B77F5BF686B0(19);
			if (!func_192(0))
			{
				func_215(0);
			}
			if (iLocal_778 == 0)
			{
				func_719(&Local_483, 5, 5, iLocal_779, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_718(&Local_483, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_778 == 1)
			{
				func_719(&Local_483, 5, 5, iLocal_779, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_717(&Local_483, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_778 == 2)
			{
				func_719(&Local_483, 5, 5, iLocal_779, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_706(&Local_483, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xAA4F14DA15DB0B51(Local_483.f_1, 1))
			{
				unk_0x507FE690B1271947(&Local_483, 0);
				func_749(&Local_483);
				func_741(unk_0x0FFED3E94261A832(), 1, 0);
				if (func_192(0))
				{
					func_191(0);
				}
				iLocal_777 = -1;
			}
			else if (bVar0)
			{
				unk_0x507FE690B1271947(&Local_483, 0);
				func_749(&Local_483);
				Local_277[unk_0x88641E5BC172153A() /*6*/].f_4++;
				unk_0xF6082E2ADA1C795B(&(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1), 3);
				iLocal_778++;
				if (iLocal_778 >= 3)
				{
					iLocal_778 = 0;
				}
				if (func_192(0))
				{
					func_191(0);
				}
				func_741(unk_0x0FFED3E94261A832(), 1, 0);
				iLocal_777++;
			}
			break;
	}
}

int func_706(var uParam0, bool bParam1)
{
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 26))
	{
		if (bParam1)
		{
			func_707(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_707(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x507FE690B1271947(uParam0, 0);
	unk_0xF6082E2ADA1C795B(uParam0, 12);
	unk_0x981C3BDC1D914416(0);
	if (bParam2)
	{
		if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x38C30E113A73946D(unk_0x2A5EB8B0FE590B91(), 1, 1, 1, 0);
		}
	}
	if (unk_0xDDA1B42A28EFD32F())
	{
		unk_0x7C995C7E92700D20(0);
	}
	unk_0x7D53B6FFAEDA810A(1);
	if (bParam1)
	{
		unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
	}
	unk_0x1E2E6AAAD9AE1286(uLocal_76, 0);
	func_711(0);
	func_710();
	unk_0xFFED429E9A2434E1(0);
	func_709(uParam0, 1, 1);
	func_708(0, 1, 1, 0);
}

int func_708(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && iParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_709(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_67[iVar0] != -1)
		{
			if (!unk_0xBB6A424DD700764B(iLocal_67[iVar0]))
			{
				unk_0xDC0343058D861402(iLocal_67[iVar0]);
				iLocal_67[iVar0] = -1;
			}
		}
		iVar0++;
	}
	unk_0x507FE690B1271947(uParam0, 25);
	unk_0x507FE690B1271947(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x507FE690B1271947(uParam0, 12);
		unk_0x507FE690B1271947(uParam0, 9);
		unk_0x507FE690B1271947(uParam0, 18);
		unk_0x507FE690B1271947(uParam0, 27);
		unk_0x507FE690B1271947(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_79 = 0;
	if (bParam1)
	{
		unk_0x73F5E7B6BB964839(&uLocal_78);
	}
	unk_0x507FE690B1271947(uParam0, 29);
}

void func_710()
{
	int iVar0;
	
	Global_1351508.f_1047 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1351508.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2497344.f_4451 = 1;
}

void func_711(bool bParam0)
{
	if (bParam0)
	{
		func_716();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_715(0))
		{
			func_712(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_712(int iParam0)
{
	if (Global_14604)
	{
		func_714(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_713())
	{
		Global_14443.f_1 = 3;
	}
}

int func_713()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_714(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_715(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_715(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_716()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

int func_717(var uParam0, bool bParam1)
{
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 9))
	{
		if (bParam1)
		{
			func_707(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_718(var uParam0, bool bParam1)
{
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 18))
	{
		if (bParam1)
		{
			func_707(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_719(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 0))
	{
		func_720(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_720(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar16;
	
	unk_0x741FE9A722257B96(0);
	unk_0x741FE9A722257B96(2);
	unk_0x981C3BDC1D914416(1);
	if (bParam17)
	{
		func_740(1);
	}
	func_739(4, -1);
	func_738(0);
	if (func_746(bParam16))
	{
		if (!unk_0x9E5289F5D782437C())
		{
			unk_0x9BF32B79391A5A8E();
			unk_0xFF4C3B41848CE5CD(1);
			if (unk_0x237515DD54DDE573() == 0 && !unk_0x9E5289F5D782437C())
			{
				unk_0x792C5262A7BE057A(uLocal_78, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0x44E808F6D1BC4ED4(2))
		{
			uParam0->f_290 = unk_0x8BE11D5E5EA52A42(2, 239);
			uParam0->f_291 = unk_0x8BE11D5E5EA52A42(2, 240);
			if (uParam0->f_292 != uParam0->f_290 || uParam0->f_293 != uParam0->f_291)
			{
				unk_0xD1FCC52F87A98873(uLocal_78, "SET_CURSOR");
				unk_0xD3A4A11E4FDC9D63(uParam0->f_290);
				unk_0xD3A4A11E4FDC9D63(uParam0->f_291);
				unk_0x8123397DC676E794();
			}
			uParam0->f_292 = uParam0->f_290;
			uParam0->f_293 = uParam0->f_291;
		}
		else
		{
			func_737(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_79 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0xD1FCC52F87A98873(uLocal_78, "MOVE_CURSOR");
					unk_0xD3A4A11E4FDC9D63(fVar6);
					unk_0xD3A4A11E4FDC9D63(fVar7);
					unk_0x8123397DC676E794();
				}
			}
		}
		if (iLocal_79 > 4)
		{
			if (unk_0x44E808F6D1BC4ED4(2))
			{
				uParam0->f_290 = unk_0xC3A8B4D77287B3E7(2, 239);
				uParam0->f_291 = unk_0xC3A8B4D77287B3E7(2, 240);
				if (unk_0x429A1F8C699BEE23())
				{
					if (uParam0->f_292 != uParam0->f_290)
					{
						if (uParam0->f_290 < 0.49f)
						{
							unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
							unk_0x4CECF13AF144A8F6(10);
							unk_0x8123397DC676E794();
						}
						else if (uParam0->f_290 > 0.51f)
						{
							unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
							unk_0x4CECF13AF144A8F6(11);
							unk_0x8123397DC676E794();
						}
					}
				}
				uParam0->f_292 = uParam0->f_290;
				uParam0->f_293 = uParam0->f_291;
			}
			if (unk_0x3A473E888D0CF9FD(2))
			{
				fVar8 = unk_0x4551F27FA8ED8578(2, 1);
				fVar9 = unk_0x4551F27FA8ED8578(2, 2);
				bVar10 = false;
				fLocal_66 = (fLocal_66 + unk_0x0000000050597EE2());
				fLocal_73 = (fLocal_73 + fVar8);
				fLocal_74 = (fLocal_74 + fVar9);
				fLocal_75 = (fLocal_75 + 1f);
				if (fLocal_66 > 0.15f)
				{
					fLocal_66 = 0f;
					fLocal_73 = (fLocal_73 / fLocal_75);
					fLocal_74 = (fLocal_74 / fLocal_75);
					if (unk_0x3FEF699D13BCC798(fLocal_74) < 0.2f)
					{
						if (fLocal_73 < 0f)
						{
							bVar10 = true;
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
							unk_0x4CECF13AF144A8F6(10);
							unk_0x8123397DC676E794();
						}
						else if (fLocal_73 > 0f)
						{
							bVar10 = true;
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
							unk_0x4CECF13AF144A8F6(11);
							unk_0x8123397DC676E794();
						}
					}
					if (unk_0x3FEF699D13BCC798(fLocal_73) < 0.2f)
					{
						if (fLocal_74 < 0f)
						{
							bVar10 = true;
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
							unk_0x4CECF13AF144A8F6(8);
							unk_0x8123397DC676E794();
						}
						else if (fLocal_74 > 0f)
						{
							bVar10 = true;
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
							unk_0x4CECF13AF144A8F6(9);
							unk_0x8123397DC676E794();
						}
					}
					if (bVar10)
					{
						unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_73 = 0f;
					fLocal_74 = 0f;
					fLocal_75 = 0f;
				}
			}
			func_736(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0xEF76CA199A0C9035(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0xBB6A424DD700764B(uParam0->f_20))
						{
							if (iLocal_79 != 8)
							{
								unk_0x08BE237DBCD9CBD9(uParam0->f_20, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0x92BC4A8239BDDACC(2, 195) || unk_0x92BC4A8239BDDACC(2, 196)) || unk_0x83F6A1E4E653AD75(2, 195)) || unk_0x83F6A1E4E653AD75(2, 196))
			{
			}
			if (unk_0x3A473E888D0CF9FD(2))
			{
				if (unk_0x92BC4A8239BDDACC(2, 32) || unk_0x92BC4A8239BDDACC(2, 172))
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
					unk_0x4CECF13AF144A8F6(8);
					unk_0x8123397DC676E794();
				}
				else if (unk_0x92BC4A8239BDDACC(2, 33) || unk_0x92BC4A8239BDDACC(2, 173))
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
					unk_0x4CECF13AF144A8F6(9);
					unk_0x8123397DC676E794();
				}
				else if (unk_0x92BC4A8239BDDACC(2, 34) || unk_0x92BC4A8239BDDACC(2, 174))
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
					unk_0x4CECF13AF144A8F6(10);
					unk_0x8123397DC676E794();
				}
				else if (unk_0x92BC4A8239BDDACC(2, 35) || unk_0x92BC4A8239BDDACC(2, 175))
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
					unk_0x4CECF13AF144A8F6(11);
					unk_0x8123397DC676E794();
				}
			}
			else if (unk_0x92BC4A8239BDDACC(2, 188))
			{
				unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
				unk_0x4CECF13AF144A8F6(8);
				unk_0x8123397DC676E794();
			}
			else if (unk_0x92BC4A8239BDDACC(2, 187))
			{
				unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
				unk_0x4CECF13AF144A8F6(9);
				unk_0x8123397DC676E794();
			}
			else if (unk_0x92BC4A8239BDDACC(2, 189))
			{
				unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
				unk_0x4CECF13AF144A8F6(10);
				unk_0x8123397DC676E794();
			}
			else if (unk_0x92BC4A8239BDDACC(2, 190))
			{
				unk_0x08BE237DBCD9CBD9(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT");
				unk_0x4CECF13AF144A8F6(11);
				unk_0x8123397DC676E794();
			}
		}
		if (bParam12)
		{
			if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
			{
				unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
				uLocal_77 = unk_0xCA19844C8EBF135B();
			}
			if (unk_0x49312763BCF4C85A(uLocal_77))
			{
				iVar0 = unk_0x7E45511185E08C01(uLocal_77);
				if (iVar0 == 6)
				{
					func_735(uParam0);
				}
			}
		}
		func_734();
	}
	if (iLocal_79 == 5 || iLocal_79 == 6)
	{
		if (iLocal_63)
		{
			func_733((iParam15 - (unk_0x3732B96D7A1859B4() - iLocal_62)), &iLocal_59, &iLocal_60, &iLocal_61);
			if ((iLocal_59 >= 0 && iLocal_60 >= 0) && iLocal_61 >= 0)
			{
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_59), unk_0xBBDA792448DB5A89(iLocal_60), unk_0xBBDA792448DB5A89(iLocal_61), -1082130432, -1082130432);
			}
			else
			{
				iLocal_59 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_59), unk_0xBBDA792448DB5A89(iLocal_60), unk_0xBBDA792448DB5A89(iLocal_61), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_79 == 5)
	{
		if (func_732(&iLocal_80, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_80 = unk_0x3732B96D7A1859B4();
			}
		}
	}
	if (iLocal_79 == 6)
	{
		if (func_732(&iLocal_80, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_80 = unk_0x3732B96D7A1859B4();
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_1, 0))
	{
		if (iLocal_79 == 2)
		{
			iLocal_79 = 3;
		}
		else if (iLocal_79 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_79 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_79)
	{
		case 0:
			if (!unk_0xAA4F14DA15DB0B51(*uParam0, 29))
			{
				func_731(uParam0, iParam14);
			}
			func_747(1);
			unk_0xFFED429E9A2434E1(1);
			uParam0->f_20 = unk_0x9FF6FFD9EB30D086();
			iLocal_153 = 0;
			iLocal_154 = 0;
			uParam0->f_23 = 0;
			iLocal_79++;
			break;
		
		case 1:
			iLocal_67[0] = -1;
			iLocal_67[1] = -1;
			unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0x842AF8E8BB29CB45(uLocal_78, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0xF31983A554AF19D1(uLocal_78, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0x507FE690B1271947(uParam0, 1);
			fLocal_73 = 0f;
			fLocal_74 = 0f;
			fLocal_75 = 0f;
			iLocal_67[0] = unk_0x9FF6FFD9EB30D086();
			iLocal_67[1] = unk_0x9FF6FFD9EB30D086();
			func_708(1, 0, 1, 0);
			if (uParam0->f_22)
			{
				iLocal_79 = 8;
			}
			else
			{
				iLocal_79++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_64 == 0)
				{
					if (!func_393("H_EXIT_PROMPT"))
					{
						if (!func_393("HACKOBJ1"))
						{
							func_730("HACKOBJ1");
							iLocal_64 = 1;
						}
					}
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (unk_0x44E808F6D1BC4ED4(2))
				{
					if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
					{
						unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
						uLocal_77 = unk_0xCA19844C8EBF135B();
					}
				}
				else if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
				{
					unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
					uLocal_77 = unk_0xCA19844C8EBF135B();
				}
			}
			if (unk_0x49312763BCF4C85A(uLocal_77))
			{
				iVar0 = unk_0x7E45511185E08C01(uLocal_77);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_393("H_EXIT_PROMPT"))
						{
							unk_0x7D53B6FFAEDA810A(1);
						}
					}
					iLocal_64 = 0;
					iLocal_79++;
				}
			}
			if (iLocal_82 == 1)
			{
				if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
				{
					if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
					{
						func_729(0, "");
					}
				}
			}
			if (unk_0x49312763BCF4C85A(uLocal_77))
			{
				iVar0 = unk_0x7E45511185E08C01(uLocal_77);
				if (iVar0 == 80)
				{
					if (iLocal_82 == 0)
					{
						unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
						func_729(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_79 == 3)
				{
					if (iLocal_64 == 0)
					{
						if (!func_393("HACKOBJ2"))
						{
							func_730("HACKOBJ2");
							iLocal_64 = 1;
						}
					}
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (!unk_0x49312763BCF4C85A(uLocal_77))
				{
					if (unk_0x44E808F6D1BC4ED4(2))
					{
						if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
						{
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
							uLocal_77 = unk_0xCA19844C8EBF135B();
						}
					}
					else if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
					{
						unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
						uLocal_77 = unk_0xCA19844C8EBF135B();
					}
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (iLocal_82 == 0)
				{
					if (!unk_0x49312763BCF4C85A(uLocal_77))
					{
						if (unk_0x92BC4A8239BDDACC(2, 202))
						{
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_BACK");
							uLocal_77 = unk_0xCA19844C8EBF135B();
							if (iParam7 == 1)
							{
								if (func_393("HACKOBJ2"))
								{
									unk_0x7D53B6FFAEDA810A(1);
								}
								func_730("H_EXIT_PROMPT");
								iLocal_64 = 0;
								iLocal_79 = (iLocal_79 - 1);
							}
						}
					}
				}
			}
			if (iLocal_82 == 1)
			{
				if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
				{
					if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
					{
						func_729(0, "");
					}
				}
			}
			if (iLocal_82 == 0)
			{
				if (unk_0x49312763BCF4C85A(uLocal_77))
				{
					iVar0 = unk_0x7E45511185E08C01(uLocal_77);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_82 == 0)
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
					func_729(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_64 = 0;
				iLocal_79++;
			}
			break;
		
		case 4:
			if (iLocal_67[1] != -1)
			{
				if (!unk_0xBB6A424DD700764B(iLocal_67[1]))
				{
					unk_0xDC0343058D861402(iLocal_67[1]);
					iLocal_67[1] = -1;
				}
			}
			if (iLocal_67[0] != -1)
			{
				if (!unk_0xBB6A424DD700764B(iLocal_67[0]))
				{
					unk_0xDC0343058D861402(iLocal_67[0]);
					iLocal_67[0] = -1;
				}
			}
			if (iLocal_67[1] != -1)
			{
				if (!unk_0xBB6A424DD700764B(iLocal_67[1]))
				{
					unk_0xDC0343058D861402(iLocal_67[1]);
					iLocal_67[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_79 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0xAA4F14DA15DB0B51(*uParam0, 5))
						{
							if (iLocal_64 == 0)
							{
								if (!func_393("HACKOBJ5"))
								{
									func_730("HACKOBJ5");
									iLocal_64 = 1;
								}
							}
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(*uParam0, 18))
					{
						if (iLocal_64 == 0)
						{
							if (!func_393("HACKOBJ3"))
							{
								func_730("HACKOBJ3");
								iLocal_64 = 1;
							}
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(*uParam0, 5))
					{
						if (iLocal_64 == 0)
						{
							if (!func_393("HACKOBJ5"))
							{
								func_730("HACKOBJ5");
								iLocal_64 = 1;
							}
						}
					}
					else if (iLocal_64 == 1)
					{
						if (func_393("HACKOBJ5"))
						{
							unk_0x7D53B6FFAEDA810A(1);
							iLocal_64 = 0;
						}
					}
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (iLocal_82 == 0)
				{
					if (!unk_0x49312763BCF4C85A(uLocal_77))
					{
						if (unk_0x44E808F6D1BC4ED4(2))
						{
							if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
							{
								unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
								uLocal_77 = unk_0xCA19844C8EBF135B();
							}
						}
						else if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
						{
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
							uLocal_77 = unk_0xCA19844C8EBF135B();
						}
					}
				}
			}
			if (iLocal_82 == 0)
			{
				if (!unk_0x49312763BCF4C85A(uLocal_77))
				{
					if (unk_0x92BC4A8239BDDACC(2, 202))
					{
						unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_BACK");
						uLocal_77 = unk_0xCA19844C8EBF135B();
						if (iParam7 == 1)
						{
							if (func_393("HACKOBJ5") || func_393("HACKOBJ3"))
							{
								unk_0x7D53B6FFAEDA810A(1);
							}
							iLocal_64 = 0;
							iLocal_79 = (iLocal_79 - 1);
						}
					}
				}
			}
			if (iLocal_82 == 1)
			{
				if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
				{
					if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
					{
						func_729(0, "");
					}
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (unk_0x49312763BCF4C85A(uLocal_77))
				{
					iVar0 = unk_0x7E45511185E08C01(uLocal_77);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_82 == 0)
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
					func_729(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_80 = unk_0x3732B96D7A1859B4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 0))
						{
							unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x842AF8E8BB29CB45(uLocal_78, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x842AF8E8BB29CB45(uLocal_78, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x842AF8E8BB29CB45(uLocal_78, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x842AF8E8BB29CB45(uLocal_78, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x842AF8E8BB29CB45(uLocal_78, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_62 = unk_0x3732B96D7A1859B4();
						iLocal_63 = 1;
						iLocal_64 = 0;
						iLocal_67[0] = unk_0x9FF6FFD9EB30D086();
						unk_0x08BE237DBCD9CBD9(iLocal_67[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_79++;
					}
					else if (!unk_0xAA4F14DA15DB0B51(*uParam0, 18))
					{
						iLocal_80 = unk_0x3732B96D7A1859B4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_62 = unk_0x3732B96D7A1859B4();
						iLocal_63 = 1;
						iLocal_64 = 0;
						iLocal_67[0] = unk_0x9FF6FFD9EB30D086();
						unk_0x08BE237DBCD9CBD9(iLocal_67[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_79++;
					}
					else
					{
						if (iLocal_82 == 1)
						{
							if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
							{
								if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
								{
									func_729(0, "");
								}
							}
						}
						if (iLocal_82 == 0)
						{
							unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xAA4F14DA15DB0B51(*uParam0, 9))
							{
								func_729(1, "TRYDL");
							}
							else
							{
								func_729(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_82 == 1)
					{
						if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
						{
							if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
							{
								func_729(0, "");
							}
						}
					}
					if (iLocal_82 == 0)
					{
						unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xAA4F14DA15DB0B51(*uParam0, 9))
						{
							func_729(1, "TRYDL");
						}
						else
						{
							func_729(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_80 = unk_0x3732B96D7A1859B4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 0))
						{
							unk_0x842AF8E8BB29CB45(uLocal_78, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x842AF8E8BB29CB45(uLocal_78, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x842AF8E8BB29CB45(uLocal_78, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_62 = unk_0x3732B96D7A1859B4();
						iLocal_63 = 1;
						iLocal_64 = 0;
						iLocal_67[1] = unk_0x9FF6FFD9EB30D086();
						if (bParam10)
						{
							func_728(uParam0, bParam18);
						}
						unk_0xCB316869290B5374(uLocal_78, "SET_ROULETTE_WORD", &(uParam0->f_14), 0, 0, 0, 0);
						unk_0x08BE237DBCD9CBD9(iLocal_67[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_79 = 6;
					}
					else if ((!bParam11 || unk_0xAA4F14DA15DB0B51(*uParam0, 18)) && !unk_0xAA4F14DA15DB0B51(*uParam0, 9))
					{
						iLocal_80 = unk_0x3732B96D7A1859B4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x842AF8E8BB29CB45(uLocal_78, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_62 = unk_0x3732B96D7A1859B4();
						iLocal_63 = 1;
						iLocal_64 = 0;
						iLocal_67[1] = unk_0x9FF6FFD9EB30D086();
						if (bParam10)
						{
							func_728(uParam0, bParam18);
						}
						if (func_393("HACKOBJ5"))
						{
							unk_0x7D53B6FFAEDA810A(1);
						}
						unk_0xCB316869290B5374(uLocal_78, "SET_ROULETTE_WORD", &(uParam0->f_14), 0, 0, 0, 0);
						unk_0x08BE237DBCD9CBD9(iLocal_67[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_79 = 6;
					}
					else
					{
						if (iLocal_82 == 1)
						{
							if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
							{
								if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
								{
									func_729(0, "");
								}
							}
						}
						if (iLocal_82 == 0)
						{
							unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xAA4F14DA15DB0B51(*uParam0, 18))
							{
								func_729(1, "TRYDL");
							}
							else
							{
								func_729(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_82 == 1)
					{
						if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
						{
							if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
							{
								func_729(0, "");
							}
						}
					}
					if (iLocal_82 == 0)
					{
						unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xAA4F14DA15DB0B51(*uParam0, 18))
						{
							func_729(1, "TRYDL");
						}
						else
						{
							func_729(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0xAA4F14DA15DB0B51(*uParam0, 18) && unk_0xAA4F14DA15DB0B51(*uParam0, 9))
						{
							if (!unk_0xAA4F14DA15DB0B51(*uParam0, 28))
							{
								unk_0xF6082E2ADA1C795B(uParam0, 28);
								iLocal_79 = 8;
							}
						}
						else
						{
							if (iLocal_82 == 1)
							{
								if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
								{
									if (((unk_0x3732B96D7A1859B4() - iLocal_81) > 2500 || unk_0x92BC4A8239BDDACC(2, 201)) || unk_0x92BC4A8239BDDACC(2, 237))
									{
										func_729(0, "");
									}
								}
							}
							if (iLocal_82 == 0)
							{
								unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0xAA4F14DA15DB0B51(*uParam0, 18))
								{
									func_729(1, "TRYBRUTE");
								}
								else
								{
									func_729(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_64 == 0)
				{
					func_727("H_USE_PC6", -1);
					iLocal_64 = 1;
				}
				else if (iLocal_65 == 1)
				{
					func_727("H_USE_PC7", -1);
					iLocal_65 = 0;
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 1))
				{
					if (!unk_0x49312763BCF4C85A(uLocal_77))
					{
						if (unk_0x92BC4A8239BDDACC(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xE7B0632DAF0CEE71(uLocal_78, "CLOSE_APP");
							if (iLocal_67[1] != -1)
							{
								if (!unk_0xBB6A424DD700764B(iLocal_67[1]))
								{
									unk_0xDC0343058D861402(iLocal_67[1]);
									iLocal_67[1] = -1;
								}
							}
							if (iLocal_67[0] != -1)
							{
								if (!unk_0xBB6A424DD700764B(iLocal_67[0]))
								{
									unk_0xDC0343058D861402(iLocal_67[0]);
									iLocal_67[0] = -1;
								}
							}
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 0))
							{
								iLocal_79 = 4;
							}
							else
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (!unk_0x49312763BCF4C85A(uLocal_77))
				{
					if (unk_0x44E808F6D1BC4ED4(2))
					{
						if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
						{
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
							uLocal_77 = unk_0xCA19844C8EBF135B();
						}
					}
					else if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
					{
						unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
						uLocal_77 = unk_0xCA19844C8EBF135B();
					}
				}
				if (unk_0x49312763BCF4C85A(uLocal_77))
				{
					iVar0 = unk_0x7E45511185E08C01(uLocal_77);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0xBB6A424DD700764B(iLocal_67[0]))
					{
						unk_0xDC0343058D861402(iLocal_67[0]);
					}
					unk_0xF6082E2ADA1C795B(uParam0, 25);
					iLocal_63 = 0;
					iLocal_65 = 1;
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_FAILURE", 0, 1);
					unk_0xF31983A554AF19D1(uLocal_78, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_62 = unk_0x3732B96D7A1859B4();
				iLocal_67[0] = unk_0x9FF6FFD9EB30D086();
				unk_0x08BE237DBCD9CBD9(iLocal_67[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0xF6082E2ADA1C795B(uParam0, 25);
				iLocal_63 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0xE7B0632DAF0CEE71(uLocal_78, "CLOSE_APP");
				if (iLocal_67[0] != -1)
				{
					if (!unk_0xBB6A424DD700764B(iLocal_67[0]))
					{
						unk_0xDC0343058D861402(iLocal_67[0]);
						iLocal_67[0] = -1;
					}
				}
				unk_0xF6082E2ADA1C795B(uParam0, 25);
				iLocal_79 = 4;
			}
			if (iLocal_63 == 1)
			{
				iVar1 = (60000 - (unk_0x3732B96D7A1859B4() - iLocal_62));
				if (iVar1 < 1)
				{
					unk_0xF6082E2ADA1C795B(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_62 = unk_0x3732B96D7A1859B4();
					iLocal_63 = 0;
					iLocal_65 = 1;
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_67[0] != -1)
					{
						if (!unk_0xBB6A424DD700764B(iLocal_67[0]))
						{
							unk_0xDC0343058D861402(iLocal_67[0]);
							iLocal_67[0] = -1;
						}
					}
					unk_0xF31983A554AF19D1(uLocal_78, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0xF31983A554AF19D1(uLocal_78, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_80 = unk_0x3732B96D7A1859B4();
				unk_0xF6082E2ADA1C795B(uParam0, 18);
				iLocal_63 = 0;
				iLocal_64 = 0;
				unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_67[0] != -1)
				{
					if (!unk_0xBB6A424DD700764B(iLocal_67[0]))
					{
						unk_0xDC0343058D861402(iLocal_67[0]);
						iLocal_67[0] = -1;
					}
				}
				iLocal_79 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_64 == 0)
				{
					func_727("H_USE_PC8", -1);
					iLocal_64 = 1;
				}
				else if (iLocal_65 == 1)
				{
					func_727("H_USE_PC9", -1);
					iLocal_65 = 0;
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (!unk_0x49312763BCF4C85A(uLocal_77))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 1))
					{
						if (unk_0x92BC4A8239BDDACC(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xE7B0632DAF0CEE71(uLocal_78, "CLOSE_APP");
							if (!unk_0xBB6A424DD700764B(iLocal_67[0]))
							{
								unk_0xDC0343058D861402(iLocal_67[0]);
							}
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 0))
							{
								iLocal_79 = 4;
							}
							else
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0x49312763BCF4C85A(uLocal_77))
				{
					if (unk_0x44E808F6D1BC4ED4(2))
					{
						if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
						{
							unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
							uLocal_77 = unk_0xCA19844C8EBF135B();
						}
					}
					else if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
					{
						unk_0xD1FCC52F87A98873(uLocal_78, "SET_INPUT_EVENT_SELECT");
						uLocal_77 = unk_0xCA19844C8EBF135B();
					}
				}
				if (unk_0x49312763BCF4C85A(uLocal_77))
				{
					iVar0 = unk_0x7E45511185E08C01(uLocal_77);
				}
			}
			if (iVar0 == 86)
			{
				unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0xAA4F14DA15DB0B51(*uParam0, 23))
			{
				if (func_732(&(uParam0->f_10), 500))
				{
					unk_0xE7B0632DAF0CEE71(uLocal_78, "RESET_ROULETTE");
					unk_0x507FE690B1271947(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0xE7B0632DAF0CEE71(uLocal_78, "STOP_ROULETTE");
					uParam0->f_10 = unk_0x3732B96D7A1859B4();
					unk_0xF6082E2ADA1C795B(uParam0, 23);
					unk_0xF6082E2ADA1C795B(uParam0, 31);
					if (func_221() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xF6082E2ADA1C795B(uParam0, 25);
					unk_0xF6082E2ADA1C795B(uParam0, 31);
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_62 = unk_0x3732B96D7A1859B4();
					if (iLocal_67[1] != -1)
					{
						if (!unk_0xBB6A424DD700764B(iLocal_67[1]))
						{
							unk_0xDC0343058D861402(iLocal_67[1]);
							iLocal_67[1] = -1;
						}
					}
					if (func_221() == 0)
					{
						unk_0xF31983A554AF19D1(uLocal_78, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_63 == 1)
			{
				iVar1 = (60000 - (unk_0x3732B96D7A1859B4() - iLocal_62));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0xF6082E2ADA1C795B(uParam0, 25);
					unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_62 = unk_0x3732B96D7A1859B4();
					iLocal_63 = 0;
					iLocal_65 = 1;
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_FAILURE", 0, 1);
					unk_0x7D53B6FFAEDA810A(1);
					if (iLocal_67[1] != -1)
					{
						if (!unk_0xBB6A424DD700764B(iLocal_67[1]))
						{
							unk_0xDC0343058D861402(iLocal_67[1]);
							iLocal_67[1] = -1;
						}
					}
					unk_0xF31983A554AF19D1(uLocal_78, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0xF6082E2ADA1C795B(uParam0, 25);
				unk_0x842AF8E8BB29CB45(uLocal_78, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_62 = unk_0x3732B96D7A1859B4();
				iLocal_67[1] = unk_0x9FF6FFD9EB30D086();
				unk_0x08BE237DBCD9CBD9(iLocal_67[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_63 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0xF6082E2ADA1C795B(uParam0, 25);
				unk_0xE7B0632DAF0CEE71(uLocal_78, "CLOSE_APP");
				if (iLocal_67[1] != -1)
				{
					if (!unk_0xBB6A424DD700764B(iLocal_67[1]))
					{
						unk_0xDC0343058D861402(iLocal_67[1]);
						iLocal_67[1] = -1;
					}
				}
				iLocal_79 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0xF31983A554AF19D1(uLocal_78, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_80 = unk_0x3732B96D7A1859B4();
				unk_0xF6082E2ADA1C795B(uParam0, 9);
				if (bParam19)
				{
					unk_0x08BE237DBCD9CBD9(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", 1);
				}
				else
				{
					unk_0x08BE237DBCD9CBD9(-1, "HACKING_SUCCESS", 0, 1);
				}
				if (iLocal_67[1] != -1)
				{
					if (!unk_0xBB6A424DD700764B(iLocal_67[1]))
					{
						unk_0xDC0343058D861402(iLocal_67[1]);
						iLocal_67[1] = -1;
					}
				}
				iLocal_79 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 9) && unk_0xAA4F14DA15DB0B51(*uParam0, 18))
				{
					if (iLocal_153 == 0)
					{
						if (!func_393("HACKOBJ7"))
						{
							func_730("HACKOBJ7");
							iLocal_153 = 1;
						}
					}
				}
				if (((func_393("H_USE_PC6") || func_393("H_USE_PC7")) || func_393("H_USE_PC8")) || func_393("H_USE_PC9"))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
			}
			if ((unk_0xAA4F14DA15DB0B51(*uParam0, 9) && unk_0xAA4F14DA15DB0B51(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0xAA4F14DA15DB0B51(*uParam0, 28))))
			{
				if (func_393("HACKOBJ7"))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				if (!iLocal_154)
				{
					unk_0x853D8B40635017CB(-1, "unlocked_bleep", unk_0x2A5EB8B0FE590B91(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_154 = 1;
				}
				if (func_732(&iLocal_80, 3000))
				{
					unk_0x507FE690B1271947(uParam0, 0);
					unk_0xF6082E2ADA1C795B(uParam0, 12);
					unk_0xFFED429E9A2434E1(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0xAA4F14DA15DB0B51(*uParam0, 27)) && unk_0xAA4F14DA15DB0B51(*uParam0, 9)) && unk_0xAA4F14DA15DB0B51(*uParam0, 18))
				{
					unk_0xD1FCC52F87A98873(uLocal_78, "OPEN_DOWNLOAD");
					unk_0xD426F7366505EADF(1);
					unk_0x8123397DC676E794();
					unk_0xF6082E2ADA1C795B(uParam0, 27);
				}
				if (func_732(&iLocal_80, 2000))
				{
					unk_0xE7B0632DAF0CEE71(uLocal_78, "CLOSE_APP");
					iLocal_79 = 4;
				}
			}
			break;
		
		case 8:
			func_721(uParam0);
			break;
	}
}

void func_721(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_23 > 0)
	{
		if (unk_0xAA4F14DA15DB0B51(*uParam0, 22))
		{
			if (unk_0xB5ABADF6417115F2("hackingNG"))
			{
				if (!unk_0x9E5289F5D782437C())
				{
					unk_0xC62720CB38828796("hackingNG", "DHMain", Local_83.f_0, Local_83.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_104[0 /*4*/] == 1 && Local_104[1 /*4*/] == 1) && Local_104[2 /*4*/] == 1) && Local_104[3 /*4*/] == 1) && Local_104[4 /*4*/] == 1) && Local_104[5 /*4*/] == 1) && Local_104[6 /*4*/] == 1) && Local_104[7 /*4*/] == 1)
	{
		unk_0x08BE237DBCD9CBD9(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_393("H1_HNG"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (unk_0x5018862FF5D9F844())
		{
			if (func_393("H1_HNG_KM"))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
		}
		unk_0xF6082E2ADA1C795B(uParam0, 26);
	}
	else if (unk_0x3A473E888D0CF9FD(2))
	{
		if (!func_393("H1_HNG_KM"))
		{
			func_730("H1_HNG_KM");
		}
	}
	else if (!func_393("H1_HNG"))
	{
		func_730("H1_HNG");
	}
	switch (uParam0->f_23)
	{
		case 0:
			unk_0x91A9530585A5AF03("hackingNG", 0);
			unk_0x507FE690B1271947(uParam0, 22);
			func_726();
			iLocal_142 = unk_0x3732B96D7A1859B4();
			Local_102.f_0 = 0;
			unk_0x507FE690B1271947(&uLocal_152, 0);
			unk_0x507FE690B1271947(&uLocal_152, 1);
			unk_0x507FE690B1271947(&uLocal_152, 2);
			unk_0x507FE690B1271947(&uLocal_152, 3);
			unk_0x507FE690B1271947(&uLocal_152, 4);
			unk_0x507FE690B1271947(&uLocal_152, 5);
			unk_0x507FE690B1271947(&uLocal_152, 6);
			unk_0x507FE690B1271947(&uLocal_152, 7);
			uParam0->f_23++;
			break;
		
		case 1:
			if (unk_0xB5ABADF6417115F2("hackingNG"))
			{
				unk_0xF6082E2ADA1C795B(uParam0, 22);
				unk_0xD1FCC52F87A98873(uLocal_78, "SET_CURSOR_VISIBILITY");
				unk_0xD426F7366505EADF(0);
				unk_0x8123397DC676E794();
				uParam0->f_23++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_104[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_104[iVar0 /*4*/].f_2 < 1f)
					{
						Local_104[iVar0 /*4*/].f_2 = (Local_104[iVar0 /*4*/].f_2 + ((Local_104[iVar0 /*4*/].f_1 * unk_0x0000000050597EE2()) * fLocal_141));
					}
					else
					{
						Local_104[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_104[iVar0 /*4*/].f_2 > 0f)
				{
					Local_104[iVar0 /*4*/].f_2 = (Local_104[iVar0 /*4*/].f_2 - ((Local_104[iVar0 /*4*/].f_1 * unk_0x0000000050597EE2()) * fLocal_141));
				}
				else
				{
					Local_104[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_104[iVar0 /*4*/] == 0)
				{
					Local_85[iVar0 /*2*/].f_1 = func_724(0.744f, 0.4f, Local_104[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_104[iVar0 /*4*/] == 0)
				{
					if (Local_102.f_0 == iVar0)
					{
						if (!unk_0xAA4F14DA15DB0B51(uLocal_152, iVar0))
						{
							iLocal_143[iVar0] = unk_0x9FF6FFD9EB30D086();
							unk_0x08BE237DBCD9CBD9(iLocal_143[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0xF6082E2ADA1C795B(&iLocal_152, iVar0);
						}
						else
						{
							if (Local_104[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_137 = (2f * (1f - Local_104[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_137 = (2f * Local_104[iVar0 /*4*/].f_2);
							}
							unk_0x634090A93BBC4EEE(iLocal_143[iVar0], "PinMovementY", fLocal_137);
						}
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(iLocal_152, iVar0))
				{
					unk_0xDC0343058D861402(iLocal_143[iVar0]);
					unk_0x15BA16B33BC155D8(iLocal_143[iVar0]);
					unk_0x507FE690B1271947(&iLocal_152, iVar0);
					iLocal_143[iVar0] = -1;
				}
				iVar0++;
			}
			if (func_723(Local_102.f_0))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
			{
				if (func_732(&iLocal_142, 300))
				{
					if (func_722(Local_102.f_0))
					{
						Local_104[Local_102.f_0 /*4*/] = 1;
						Local_85[Local_102.f_0 /*2*/].f_1 = 0.572f;
						unk_0x08BE237DBCD9CBD9(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_102.f_0 != 7)
						{
							Local_102.f_0++;
						}
					}
					else
					{
						if (Local_102.f_0 != 0)
						{
							if (unk_0xAA4F14DA15DB0B51(iLocal_152, Local_102.f_0))
							{
								unk_0xDC0343058D861402(iLocal_143[Local_102.f_0]);
								unk_0x15BA16B33BC155D8(iLocal_143[Local_102.f_0]);
								unk_0x507FE690B1271947(&iLocal_152, Local_102.f_0);
								iLocal_143[Local_102.f_0] = -1;
							}
							Local_104[(Local_102.f_0 - 1) /*4*/] = 0;
							Local_102.f_0 = (Local_102.f_0 - 1);
						}
						if (!unk_0x9E5289F5D782437C())
						{
							unk_0xA55ED9111DC832BC(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_142 = unk_0x3732B96D7A1859B4();
						unk_0xCE2F5764A6CFB9EF(0, 100, 100);
						unk_0x08BE237DBCD9CBD9(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_102.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0x9E5289F5D782437C())
					{
						unk_0xC62720CB38828796("hackingNG", "DHMain", Local_83.f_0, Local_83.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_142 = unk_0x3732B96D7A1859B4();
					unk_0xCE2F5764A6CFB9EF(0, 100, 100);
				}
			}
			if (!unk_0x9E5289F5D782437C())
			{
				if (Local_102.f_0 == 0)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[0 /*2*/], Local_85[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[0 /*2*/], Local_85[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_102.f_0 == 1)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[1 /*2*/], Local_85[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[1 /*2*/], Local_85[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_102.f_0 == 2)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[2 /*2*/], Local_85[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[2 /*2*/], Local_85[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_102.f_0 == 3)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[3 /*2*/], Local_85[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[3 /*2*/], Local_85[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_102.f_0 == 4)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[4 /*2*/], Local_85[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[4 /*2*/], Local_85[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_102.f_0 == 5)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[5 /*2*/], Local_85[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[5 /*2*/], Local_85[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_102.f_0 == 6)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[6 /*2*/], Local_85[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[6 /*2*/], Local_85[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_102.f_0 == 7)
				{
					unk_0xC62720CB38828796("hackingNG", "DHCompHi", Local_85[7 /*2*/], Local_85[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xC62720CB38828796("hackingNG", "DHComp", Local_85[7 /*2*/], Local_85[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0xAA4F14DA15DB0B51(uParam0->f_1, 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 1))
					{
						if (unk_0x92BC4A8239BDDACC(2, 202))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 1);
							unk_0x7D53B6FFAEDA810A(1);
						}
					}
				}
			}
			break;
	}
}

int func_722(int iParam0)
{
	if (Local_85[iParam0 /*2*/].f_1 >= fLocal_139 && Local_85[iParam0 /*2*/].f_1 <= fLocal_138)
	{
		return 1;
	}
	return 0;
}

int func_723(int iParam0)
{
	if (Local_85[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_724(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_725((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_725(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_726()
{
	fLocal_138 = 0.6f;
	fLocal_139 = 0.53f;
	Local_104[0 /*4*/].f_1 = (0.02f * fLocal_140);
	Local_104[1 /*4*/].f_1 = (0.025f * fLocal_140);
	Local_104[2 /*4*/].f_1 = (0.03f * fLocal_140);
	Local_104[3 /*4*/].f_1 = (0.035f * fLocal_140);
	Local_104[4 /*4*/].f_1 = (0.04f * fLocal_140);
	Local_104[5 /*4*/].f_1 = (0.045f * fLocal_140);
	Local_104[6 /*4*/].f_1 = (0.048f * fLocal_140);
	Local_104[7 /*4*/].f_1 = (0.05f * fLocal_140);
	Local_104[0 /*4*/] = 0;
	Local_104[1 /*4*/] = 0;
	Local_104[2 /*4*/] = 0;
	Local_104[3 /*4*/] = 0;
	Local_104[4 /*4*/] = 0;
	Local_104[5 /*4*/] = 0;
	Local_104[6 /*4*/] = 0;
	Local_104[7 /*4*/] = 0;
	Local_83.f_0 = 0.5f;
	Local_83.f_1 = 0.5f;
	Local_85[0 /*2*/] = 0.35f;
	Local_85[0 /*2*/].f_1 = 0.4f;
	Local_85[1 /*2*/] = 0.39f;
	Local_85[1 /*2*/].f_1 = 0.4f;
	Local_85[2 /*2*/] = 0.43f;
	Local_85[2 /*2*/].f_1 = 0.4f;
	Local_85[3 /*2*/] = 0.47f;
	Local_85[3 /*2*/].f_1 = 0.4f;
	Local_85[4 /*2*/] = 0.51f;
	Local_85[4 /*2*/].f_1 = 0.74f;
	Local_85[5 /*2*/] = 0.55f;
	Local_85[5 /*2*/].f_1 = 0.74f;
	Local_85[6 /*2*/] = 0.59f;
	Local_85[6 /*2*/].f_1 = 0.74f;
	Local_85[7 /*2*/] = 0.63f;
	Local_85[7 /*2*/].f_1 = 0.74f;
}

void func_727(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_728(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = unk_0x895FB9FE885E36ED(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = unk_0x895FB9FE885E36ED(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(uParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(uParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(uParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(uParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(uParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(uParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(uParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(uParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(uParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(uParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(uParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_729(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0xF31983A554AF19D1(uLocal_78, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_81 = unk_0x3732B96D7A1859B4();
		iLocal_82 = 1;
	}
	else
	{
		unk_0xF31983A554AF19D1(uLocal_78, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_82 = 0;
	}
}

void func_730(char* sParam0)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 1, 1, -1);
}

void func_731(var uParam0, int iParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(*uParam0, 29))
	{
		unk_0x842AF8E8BB29CB45(uLocal_78, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0x35F3322252D614F6())
		{
			unk_0xF31983A554AF19D1(uLocal_78, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0xF31983A554AF19D1(uLocal_78, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0xD1FCC52F87A98873(uLocal_78, "SET_LABELS");
		func_256("H_ICON_1");
		if (iParam1 == 0)
		{
			func_256("H_ICON_2a");
		}
		else
		{
			func_256("H_ICON_2");
		}
		func_256("H_ICON_3");
		func_256("H_ICON_4");
		func_256("H_ICON_5");
		func_256("H_ICON_6");
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(uParam0, 29);
	}
}

int func_732(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3732B96D7A1859B4();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_733(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_734()
{
	if (iLocal_79 < 5)
	{
		if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
		{
			unk_0x08BE237DBCD9CBD9(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_735(var uParam0)
{
	unk_0x38C30E113A73946D(unk_0x2A5EB8B0FE590B91(), 1, 1, 1, 0);
	if (unk_0xDDA1B42A28EFD32F())
	{
		unk_0x7C995C7E92700D20(0);
	}
	unk_0x7D53B6FFAEDA810A(1);
	unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
	unk_0x1E2E6AAAD9AE1286(uLocal_76, 0);
	func_711(0);
	func_710();
	unk_0xF6082E2ADA1C795B(uParam0, 1);
	unk_0xFFED429E9A2434E1(0);
	func_709(uParam0, 1, 0);
	func_708(0, 1, 1, 0);
}

void func_736(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x8BE11D5E5EA52A42(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x8BE11D5E5EA52A42(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x8BE11D5E5EA52A42(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x8BE11D5E5EA52A42(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x63633220DF29A092(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xDC21082B45236352(2, 218) * 127f));
		}
		if (!unk_0x63633220DF29A092(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xDC21082B45236352(2, 219) * 127f));
		}
		if (!unk_0x63633220DF29A092(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xDC21082B45236352(2, 220) * 127f));
		}
		if (!unk_0x63633220DF29A092(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xDC21082B45236352(2, 221) * 127f));
		}
	}
	if (unk_0x3A473E888D0CF9FD(2))
	{
		if (bParam5)
		{
			if (unk_0xC4BE06D8BA3A137F())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x35BD21A9AEEFFA28())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_737(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xC3A8B4D77287B3E7(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xC3A8B4D77287B3E7(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xC3A8B4D77287B3E7(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xC3A8B4D77287B3E7(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x4551F27FA8ED8578(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x4551F27FA8ED8578(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x4551F27FA8ED8578(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x4551F27FA8ED8578(2, 221) * 127f));
		}
	}
}

void func_738(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_715(0))
		{
			func_712(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_739(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1351508.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1351508.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_740(int iParam0)
{
	Global_1353013.f_1079 = iParam0;
}

void func_741(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x7B399FFF3AC5B678())
		{
			unk_0x6F0F1C5EEC77F84A(0);
		}
	}
	if (!unk_0x591AF4C50B46E014())
	{
		iVar0 = iParam2;
		unk_0x73EC54DB6766EF37(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_362())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x885F483F34E47503(iParam0) && unk_0xB8B285A272E7A79E(iParam0))
		{
			uVar25 = unk_0x1E199569E0295838(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x591AF4C50B46E014())
				{
					unk_0xA64CA7CB069DDFFA(1);
				}
				else
				{
					unk_0x4C1FCB3943DAF647(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x591AF4C50B46E014() && !bVar18)
					{
						unk_0xA64CA7CB069DDFFA(0);
					}
					Global_2422215[iParam0 /*387*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_745(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(uVar25, true, 0);
					}
				}
				if (!unk_0xED01C551E3A161C0(uVar25))
				{
					if (!bVar20)
					{
						unk_0xA32D9C84C1A93920(uVar25, false);
					}
					unk_0xE77EEA92586CF2E8(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA32D9C84C1A93920(uVar25, false);
				}
				unk_0x2725C3746060DA66(uVar25, true);
				unk_0x1EF72C87138AD63D(iParam0, 0);
				unk_0x81CEA1F6278C00AA(uVar25);
				unk_0xDC7A31134115BFF0(uVar25, 1);
				func_744();
				func_743();
				if (unk_0x57A397BDF5F38342())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xFD918707B1B07874())
				{
				}
				Global_2422215[iParam0 /*387*/].f_254 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_745(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(uVar25, !bVar14, 0);
					}
					if (!unk_0xED01C551E3A161C0(uVar25))
					{
						if (!bVar20)
						{
							unk_0xA32D9C84C1A93920(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xE77EEA92586CF2E8(uVar25, 1);
						}
					}
					if (func_742(Global_1638223.f_112772))
					{
						unk_0xA32D9C84C1A93920(uVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0x1EF72C87138AD63D(iParam0, 0);
				}
				else
				{
					unk_0x1EF72C87138AD63D(iParam0, 1);
				}
				unk_0x2725C3746060DA66(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xE1F938E1A529D851(uVar25) && !unk_0xC4A39E4229BD3ABE(uVar25, 0))
					{
						unk_0x5DE3EC94E90BB96F(uVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x73EC54DB6766EF37(iParam0, bParam1, iVar26);
		}
	}
}

bool func_742(int iParam0)
{
	return iParam0 == 17;
}

void func_743()
{
	struct<2> Var0;
	
	Global_2434604.f_1010 = 0;
	Global_2434604.f_1011 = 0;
	Global_2434604.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434604.f_1017 = -1;
	Global_2404996.f_2472 = { Var0 };
}

void func_744()
{
	Global_2404996.f_664 = 0;
	Global_2404996.f_2513 = 0;
	Global_2404996.f_502 = 0;
	Global_2404996.f_578 = 0;
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_216 = 0;
}

int func_745(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE897E371352225D5(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_746(bool bParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(uLocal_78) && (!bParam0 || (((((unk_0xB5ABADF6417115F2("HACKING_PC_desktop_0") && unk_0xB5ABADF6417115F2("HACKING_PC_desktop_1")) && unk_0xB5ABADF6417115F2("HACKING_PC_desktop_2")) && unk_0xB5ABADF6417115F2("HACKING_PC_desktop_3")) && unk_0xB5ABADF6417115F2("HACKING_PC_desktop_4")) && unk_0xB5ABADF6417115F2("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_747(bool bParam0)
{
	if (bParam0)
	{
		unk_0x91A9530585A5AF03("HACKING_PC_desktop_0", 0);
		unk_0x91A9530585A5AF03("HACKING_PC_desktop_1", 0);
		unk_0x91A9530585A5AF03("HACKING_PC_desktop_2", 0);
		unk_0x91A9530585A5AF03("HACKING_PC_desktop_3", 0);
		unk_0x91A9530585A5AF03("HACKING_PC_desktop_4", 0);
		unk_0x91A9530585A5AF03("HACKING_PC_desktop_5", 0);
	}
	uLocal_78 = unk_0x7E5F1A9C59BCC7F8("Hacking_PC");
}

void func_748(var uParam0)
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x38C30E113A73946D(unk_0x2A5EB8B0FE590B91(), 1, 1, 1, 0);
	}
	if (unk_0xDDA1B42A28EFD32F())
	{
		unk_0x7C995C7E92700D20(0);
	}
	unk_0x981C3BDC1D914416(0);
	unk_0x7D53B6FFAEDA810A(1);
	unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
	unk_0x1E2E6AAAD9AE1286(uLocal_76, 0);
	unk_0x507FE690B1271947(uParam0, 0);
	unk_0x507FE690B1271947(uParam0, 12);
	func_711(0);
	func_710();
	unk_0xFFED429E9A2434E1(0);
}

void func_749(var uParam0)
{
	func_709(uParam0, 1, 1);
	*uParam0 = 0;
	uParam0->f_23 = 0;
	Local_102.f_0 = 0;
	Local_102.f_1 = 0;
	unk_0x507FE690B1271947(uParam0, 26);
	Local_104[0 /*4*/] = 0;
	Local_104[1 /*4*/] = 0;
	Local_104[2 /*4*/] = 0;
	Local_104[3 /*4*/] = 0;
	Local_104[4 /*4*/] = 0;
	Local_104[5 /*4*/] = 0;
	Local_104[6 /*4*/] = 0;
	Local_104[7 /*4*/] = 0;
}

void func_750(bool bParam0)
{
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam0)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	unk_0x4E6996123FABDB93(0, 69, 1);
	unk_0x4E6996123FABDB93(0, 70, 1);
	unk_0x4E6996123FABDB93(0, 68, 1);
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
}

void func_751()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAA4F14DA15DB0B51(Local_483.f_0, 0))
	{
		return;
	}
	if (!func_424())
	{
		if (func_393("GB_SGHT_HLP1"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_393("GB_SGHT_HLP2"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_386())
		{
			sVar0 = func_481(unk_0x7C214DA899F05536(Local_217.f_34));
			iVar1 = func_680(unk_0x7C214DA899F05536(Local_217.f_34));
			if (func_275(unk_0x0FFED3E94261A832(), 1))
			{
				if (func_760("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
			}
			else if (func_760("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
		}
		if (func_393("GB_SGHT_RVL"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return;
	}
	iVar2 = func_377(unk_0x0FFED3E94261A832());
	if (iVar2 < 2)
	{
		if (func_393("GB_SGHT_HLP1"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_393("GB_SGHT_HLP2"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_386())
		{
			sVar0 = func_481(unk_0x7C214DA899F05536(Local_217.f_34));
			iVar1 = func_680(unk_0x7C214DA899F05536(Local_217.f_34));
			if (func_275(unk_0x0FFED3E94261A832(), 1))
			{
				if (func_760("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
			}
			else if (func_760("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
		}
		if (func_393("GB_SGHT_RVL"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 2))
	{
		if (!func_759(86))
		{
			if (iLocal_777 == -1)
			{
				if (func_753(0, 1, 1, 1))
				{
					if (unk_0x88641E5BC172153A() == Local_217.f_33)
					{
						func_401("GB_SGHT_HLP1", -1);
						func_400(1);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 2);
					}
					else if (func_838() == Local_217.f_33)
					{
						func_401("GB_SGHT_HLP2", -1);
						func_400(1);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 2);
					}
					else if (func_386())
					{
						sVar0 = func_481(unk_0x7C214DA899F05536(Local_217.f_34));
						iVar1 = func_680(unk_0x7C214DA899F05536(Local_217.f_34));
						if (func_275(unk_0x0FFED3E94261A832(), 1))
						{
							func_752("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_400(1);
						}
						else
						{
							func_752("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_400(1);
						}
						unk_0xF6082E2ADA1C795B(&iLocal_470, 2);
					}
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&iLocal_470, 2);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 2))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 7))
		{
			if (iLocal_777 == -1)
			{
				if (unk_0x88641E5BC172153A() == Local_217.f_33)
				{
					if (func_753(0, 1, 1, 1))
					{
						func_401("GB_SGHT_APPH", -1);
						func_400(1);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 7);
					}
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&iLocal_470, 7);
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&iLocal_470, 7);
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 8))
	{
		if (func_837())
		{
			if (func_821())
			{
				if (unk_0xD0BCF9877CD72A3F(Local_217.f_3))
				{
					if (func_753(0, 1, 1, 1))
					{
						func_401("GB_SGHT_PKGH", -1);
						func_400(1);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 8);
					}
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 12))
	{
		if (func_837())
		{
			if (Local_217.f_5 > 0 || unk_0xAA4F14DA15DB0B51(Local_217.f_1, 6))
			{
				if (func_753(0, 1, 1, 1))
				{
					func_401("GB_SGHT_RVL", -1);
					func_400(1);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 12);
				}
			}
		}
	}
}

void func_752(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xCF6846167A5EFE98(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x95CE6D748899618C(iParam4);
	}
	unk_0xD5DA3EC5EEC78358(sParam3);
	unk_0xED95966D04271FDA(0, 0, 0, iParam5);
}

int func_753(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_758())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (func_448())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_38(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_757(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_756())
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (Global_1574107)
	{
		return 0;
	}
	if (func_755())
	{
		return 0;
	}
	if (func_754())
	{
		return 0;
	}
	if (func_360())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2506007)
	{
		return 0;
	}
	return 1;
}

bool func_754()
{
	return Global_2445217.f_571;
}

bool func_755()
{
	return Global_2445217.f_723;
}

bool func_756()
{
	return Global_2434604.f_2791.f_578;
}

int func_757(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_758()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

bool func_759(int iParam0)
{
	return Global_2434604.f_2483[0 /*76*/].f_1 == iParam0;
}

bool func_760(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xCF6846167A5EFE98(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x95CE6D748899618C(iParam4);
	}
	unk_0xD5DA3EC5EEC78358(sParam3);
	return unk_0x95886DF60C19E1CC(0);
}

void func_761()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAA4F14DA15DB0B51(Local_483.f_0, 0))
	{
		return;
	}
	if (!func_424())
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_470, 5))
		{
			if (Local_217.f_34 != -1)
			{
				iVar0 = func_279(unk_0x7C214DA899F05536(Local_217.f_34));
				if (iVar0 > -1)
				{
					if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_217.f_34)))
					{
						iVar1 = func_277(iVar0);
						iVar2 = func_703(iVar1);
						func_415(unk_0x7C214DA899F05536(Local_217.f_34), 432, 0);
						func_413(unk_0x7C214DA899F05536(Local_217.f_34), iVar2, 0);
						func_412(unk_0x7C214DA899F05536(Local_217.f_34), 0, 0);
						func_411(unk_0x7C214DA899F05536(Local_217.f_34), 0);
						func_410(unk_0x7C214DA899F05536(Local_217.f_34), Global_262145.f_11007, 0);
						unk_0x507FE690B1271947(&iLocal_470, 5);
					}
					else
					{
						unk_0x507FE690B1271947(&iLocal_470, 5);
					}
				}
			}
			func_417();
		}
		return;
	}
	if (!unk_0xD0BCF9877CD72A3F(Local_217.f_3))
	{
		if (unk_0x88641E5BC172153A() == Local_217.f_33)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 3))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_483.f_0, 0))
				{
					if (Local_277[unk_0x88641E5BC172153A() /*6*/].f_5 < 3)
					{
						if (func_377(unk_0x0FFED3E94261A832()) == 3)
						{
							if (!func_771("GB_SGHT_HCK"))
							{
								func_768("GB_SGHT_HCK", 0);
							}
						}
						else if (func_771("GB_SGHT_HCK"))
						{
							func_417();
						}
					}
					else
					{
						func_417();
					}
				}
			}
		}
		else if (func_838() == Local_217.f_33)
		{
			if (Local_217.f_34 != -1)
			{
				if (func_377(unk_0x0FFED3E94261A832()) == 3)
				{
					if (!func_771("GB_SGHT_PROT"))
					{
						iVar0 = func_279(unk_0x7C214DA899F05536(Local_217.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_277(iVar0);
							func_762("GB_SGHT_PROT", unk_0x7C214DA899F05536(Local_217.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_771("GB_SGHT_PROT"))
				{
					func_417();
				}
			}
		}
		else if (func_386())
		{
			if (Local_217.f_34 != -1)
			{
				if (func_377(unk_0x0FFED3E94261A832()) == 3)
				{
					if (Local_217.f_34 != -1)
					{
						iVar0 = func_279(unk_0x7C214DA899F05536(Local_217.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_277(iVar0);
							if (func_275(unk_0x0FFED3E94261A832(), 1))
							{
								if (!func_771("GB_SGHT_STOP"))
								{
									func_762("GB_SGHT_STOP", unk_0x7C214DA899F05536(Local_217.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_771("GB_SGHT_STOP"))
							{
								func_762("GB_SGHT_STOP", unk_0x7C214DA899F05536(Local_217.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_771("GB_SGHT_STOP"))
					{
						func_417();
					}
					if (func_771("GB_SGHT_STOP2"))
					{
						func_417();
					}
				}
				if (func_377(unk_0x0FFED3E94261A832()) >= 2)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 5))
					{
						if (Local_217.f_34 != -1)
						{
							if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_217.f_34)))
							{
								if (func_922(unk_0x7C214DA899F05536(Local_217.f_34), 1, 1))
								{
									iVar0 = func_279(unk_0x7C214DA899F05536(Local_217.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_277(iVar0);
										iVar2 = func_703(iVar1);
										func_415(unk_0x7C214DA899F05536(Local_217.f_34), 432, 1);
										func_413(unk_0x7C214DA899F05536(Local_217.f_34), iVar2, 1);
										func_412(unk_0x7C214DA899F05536(Local_217.f_34), 1, 1);
										func_411(unk_0x7C214DA899F05536(Local_217.f_34), 1);
										func_410(unk_0x7C214DA899F05536(Local_217.f_34), Global_262145.f_11007, 1);
										unk_0xF6082E2ADA1C795B(&iLocal_470, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(iLocal_470, 5))
				{
					if (Local_217.f_34 != -1)
					{
						iVar0 = func_279(unk_0x7C214DA899F05536(Local_217.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_277(iVar0);
							iVar2 = func_703(iVar1);
							func_415(unk_0x7C214DA899F05536(Local_217.f_34), 432, 0);
							func_413(unk_0x7C214DA899F05536(Local_217.f_34), iVar2, 0);
							func_412(unk_0x7C214DA899F05536(Local_217.f_34), 0, 0);
							func_411(unk_0x7C214DA899F05536(Local_217.f_34), 0);
							func_410(unk_0x7C214DA899F05536(Local_217.f_34), Global_262145.f_11007, 0);
							unk_0x507FE690B1271947(&iLocal_470, 5);
						}
					}
				}
			}
		}
	}
	else if (func_377(unk_0x0FFED3E94261A832()) == 3)
	{
		if (unk_0x88641E5BC172153A() == Local_217.f_33)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_483.f_0, 0))
			{
				if (!func_771("GB_SGHT_RETP"))
				{
					func_768("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_838() == Local_217.f_33)
		{
			if (Local_217.f_34 != -1)
			{
				if (!func_771("GB_SGHT_PROT"))
				{
					iVar0 = func_279(unk_0x7C214DA899F05536(Local_217.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_277(iVar0);
						func_762("GB_SGHT_PROT", unk_0x7C214DA899F05536(Local_217.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_386())
		{
			if (Local_217.f_34 != -1)
			{
				iVar0 = func_279(unk_0x7C214DA899F05536(Local_217.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_277(iVar0);
					if (func_275(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_771("GB_SGHT_STOP"))
						{
							func_762("GB_SGHT_STOP", unk_0x7C214DA899F05536(Local_217.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_771("GB_SGHT_STOP"))
					{
						func_762("GB_SGHT_STOP", unk_0x7C214DA899F05536(Local_217.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_771("GB_SGHT_PROT"))
		{
			func_417();
		}
		if (func_771("GB_SGHT_RETP"))
		{
			func_417();
		}
		if (func_771("GB_SGHT_STOP"))
		{
			func_417();
		}
		if (func_771("GB_SGHT_STOP2"))
		{
			func_417();
		}
	}
}

void func_762(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_763(sParam0, unk_0x4325D353D7D27B34(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312575 = 15;
		Global_1312575.f_56 = iParam3;
		Global_1312575.f_57 = iParam4;
		Global_1312575.f_54 = iParam1;
	}
}

int func_763(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam2) > 63)
	{
		return 0;
	}
	if (func_767(sParam0, sParam1, sParam2) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_418();
	Global_1312575 = 10;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	StringCopy(&(Global_1312575.f_32), sParam2, 64);
	Global_1312575.f_58 = uParam4;
	Global_1312575.f_56 = uParam4;
	func_766();
	func_765(bParam3);
	func_764();
	return 1;
}

void func_764()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_765(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_766()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

bool func_767(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_423())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam1))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam2))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam2) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_32));
}

void func_768(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_769(sParam0))
	{
		return;
	}
	func_418();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_766();
	func_765(bParam1);
	func_764();
}

bool func_769(char* sParam0)
{
	if (!func_423())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_770(uParam0);
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_770(char* sParam0)
{
	if (!func_423())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_771(char* sParam0)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (!func_423())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x8A3FBC299F47ED6B(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	return func_769(sParam0);
}

void func_772()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_837() && !func_386())
	{
		return;
	}
	if (!func_424())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 1))
	{
		iVar0 = func_377(unk_0x0FFED3E94261A832());
		if (iVar0 >= 2)
		{
			if (unk_0x88641E5BC172153A() == Local_217.f_33 || func_838() == Local_217.f_33)
			{
				if (func_800(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_480(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0x768882AFD4B41EEA(1);
					unk_0xFA7DE80D003A8604(unk_0x0FFED3E94261A832(), joaat("pickup_portable_package"), 1);
					func_799(1);
					func_773(-1, 0, 0, -1);
				}
			}
			else if (func_275(unk_0x0FFED3E94261A832(), 1))
			{
				sVar1 = func_481(unk_0x7C214DA899F05536(Local_217.f_34));
				uVar2 = func_680(unk_0x7C214DA899F05536(Local_217.f_34));
				func_678(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0xFA7DE80D003A8604(unk_0x0FFED3E94261A832(), joaat("pickup_portable_package"), 0);
				func_773(-1, 0, 0, -1);
			}
			else
			{
				sVar1 = func_481(unk_0x7C214DA899F05536(Local_217.f_34));
				uVar2 = func_680(unk_0x7C214DA899F05536(Local_217.f_34));
				func_678(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0xFA7DE80D003A8604(unk_0x0FFED3E94261A832(), joaat("pickup_portable_package"), 0);
				func_773(-1, 0, 0, -1);
			}
		}
		unk_0xF6082E2ADA1C795B(&iLocal_470, 1);
	}
}

void func_773(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_211(unk_0x0FFED3E94261A832());
	if (iParam2 || func_398(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1773272 = iVar0;
		if (func_435(iVar0))
		{
			Global_1773272.f_1 = 4;
		}
		else if (func_434(iVar0))
		{
			Global_1773272.f_1 = 5;
		}
		else if (func_309(iVar0, 0))
		{
			Global_1773272.f_1 = 2;
			if (func_489(iVar0))
			{
				Global_1773272.f_1 = 3;
			}
		}
		else
		{
			Global_1773272.f_1 = 1;
		}
		if (func_478() != func_80())
		{
			Global_1773272.f_4 = func_674(func_478());
			Global_1773272.f_5 = func_673(func_478());
		}
		if (func_337() != func_80())
		{
			func_513(func_337(), &(Global_1773272.f_6), &(Global_1773272.f_7));
		}
		Global_1773272.f_9 = unk_0xDA84A1E29323722E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1773272.f_27 = 1;
			Global_1773272.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1773272.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1773272.f_40 = func_612(iParam1);
			Global_1773272.f_41 = func_798();
			Global_1773272.f_42 = func_613(unk_0x0FFED3E94261A832(), iParam1);
			Global_1773272.f_44 = func_669(unk_0x0FFED3E94261A832(), iParam1);
		}
	}
	else if (func_432(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1773387 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1773387 = iParam0 + 1;
		}
		else
		{
			Global_1773387 = func_797(unk_0x0FFED3E94261A832());
		}
		switch (iVar0)
		{
			case 225:
				if (func_796(unk_0x0FFED3E94261A832()) == 0)
				{
					Global_1773387.f_1 = 0;
				}
				else
				{
					Global_1773387.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1773387.f_1 = 2;
				break;
			
			case 227:
				Global_1773387.f_1 = 3;
				break;
		}
		Global_1773387.f_21 = 1;
		Global_1773387.f_22 = 1;
		if (func_478() != func_80())
		{
			Global_1773387.f_4 = func_674(func_478());
			Global_1773387.f_5 = func_673(func_478());
		}
		if (func_337() != func_80())
		{
			func_513(func_337(), &(Global_1773387.f_4), &(Global_1773387.f_5));
		}
		Global_1773387.f_8 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773387.f_20 = iParam0;
		}
	}
	else if (func_402(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1773325 = iVar0;
		Global_1773272.f_1 = 1;
		if (func_478() != func_80())
		{
			Global_1773325.f_4 = func_674(func_478());
			Global_1773325.f_5 = func_673(func_478());
		}
		if (func_337() != func_80())
		{
			func_513(func_337(), &(Global_1773325.f_6), &(Global_1773325.f_7));
		}
		Global_1773325.f_9 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773325.f_21 = iParam0;
		}
	}
	else
	{
		if (func_478() != func_80())
		{
			Global_1773254 = func_674(func_478());
			Global_1773254.f_1 = func_673(func_478());
		}
		Global_1773254.f_5 = unk_0xDA84A1E29323722E();
		Global_1773254.f_13 = func_795();
		Global_1773254.f_15 = 0;
		if (func_479(1))
		{
			if (func_337() == func_478())
			{
				Global_1773254.f_15 = 1;
			}
		}
		if (func_794())
		{
			Global_1773387.f_28 = 1;
		}
		if ((func_793() || func_792()) || func_791())
		{
			Global_1773387.f_30 = 1;
		}
		if (func_789(func_790(joaat("trailersmall2"))))
		{
			Global_1773387.f_32 = 1;
		}
		if (func_777(func_788(joaat("caddy"))))
		{
			Global_1773387.f_31 = 1;
		}
		if (func_659(unk_0x0FFED3E94261A832()) || func_658(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_29 = 1;
		}
		if (func_654(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_33 = 1;
			Global_1773387.f_34 = 1;
		}
		if (func_655(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_36 = 1;
		}
		if (func_652(0, unk_0x0FFED3E94261A832()) == 1)
		{
			Global_1773387.f_35 = 1;
		}
		if (func_776(unk_0x0FFED3E94261A832(), 3, &uVar1))
		{
			Global_1773387.f_37 = 1;
		}
		if (func_776(unk_0x0FFED3E94261A832(), 7, &uVar1))
		{
			Global_1773387.f_38 = 1;
		}
		if (func_775(unk_0x0FFED3E94261A832()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_774(unk_0x0FFED3E94261A832(), iVar2);
				if (func_609(unk_0x0FFED3E94261A832(), iVar3, 0))
				{
					Global_1773387.f_39 = 1;
				}
				if (func_609(unk_0x0FFED3E94261A832(), iVar3, 2))
				{
					Global_1773387.f_40 = 1;
				}
				if (func_609(unk_0x0FFED3E94261A832(), iVar3, 1))
				{
					Global_1773387.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_774(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_601(Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/]))
	{
		uVar0 = Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/];
	}
	return uVar0;
}

int func_775(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_776(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_80())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_652(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_777(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_787(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_785(11));
		func_784(iVar1, &iVar0, 1);
		iVar2 = func_787(func_779(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_495(func_778(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_778(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1625;
				
				case 1:
					return 1632;
				
				case 2:
					return 1639;
				
				case 3:
					return 1646;
				
				case 4:
					return 1653;
				
				case 5:
					return 1660;
				
				case 6:
					return 1667;
				
				case 7:
					return 1674;
				
				case 8:
					return 1681;
				
				case 9:
					return 1688;
				
				case 10:
					return 1695;
				
				case 11:
					return 1701;
				
				case 12:
					return 1707;
				
				case 13:
					return 1713;
				
				case 14:
					return 1790;
				
				case 15:
					return 1797;
				
				case 16:
					return 1804;
				
				case 17:
					return 1811;
				
				case 18:
					return 1818;
				
				case 19:
					return 1825;
				
				case 20:
					return 1832;
				
				case 21:
					return 1839;
				
				case 22:
					return 1846;
				
				case 23:
					return 1853;
				
				case 24:
					return 1859;
				
				case 25:
					return 1865;
				
				case 26:
					return 2160;
				
				case 27:
					return 2167;
				
				case 28:
					return 2174;
				
				case 29:
					return 2181;
				
				case 30:
					return 2188;
				
				case 31:
					return 2195;
				
				case 32:
					return 2202;
				
				case 33:
					return 2209;
				
				case 34:
					return 2216;
				
				case 35:
					return 2223;
				
				case 36:
					return 2230;
				
				case 37:
					return 2236;
				
				case 38:
					return 2242;
				
				case 39:
					return 2813;
				
				case 40:
					return 2820;
				
				case 41:
					return 2827;
				
				case 42:
					return 2834;
				
				case 43:
					return 2841;
				
				case 44:
					return 2848;
				
				case 45:
					return 2855;
				
				case 46:
					return 2862;
				
				case 47:
					return 2869;
				
				case 48:
					return 2876;
				
				case 49:
					return 2883;
				
				case 50:
					return 2889;
				
				case 51:
					return 2895;
				
				case 52:
					return 2937;
				
				case 53:
					return 2944;
				
				case 54:
					return 2951;
				
				case 55:
					return 2958;
				
				case 56:
					return 2965;
				
				case 57:
					return 2972;
				
				case 58:
					return 2979;
				
				case 59:
					return 2986;
				
				case 60:
					return 2993;
				
				case 61:
					return 3000;
				
				case 62:
					return 3007;
				
				case 63:
					return 3013;
				
				case 64:
					return 3019;
				
				case 65:
					return 3220;
				
				case 66:
					return 3228;
				
				case 67:
					return 3236;
				
				case 68:
					return 3244;
				
				case 69:
					return 3252;
				
				case 70:
					return 3260;
				
				case 71:
					return 3268;
				
				case 72:
					return 3276;
				
				case 73:
					return 3284;
				
				case 74:
					return 3292;
				
				case 75:
					return 3300;
				
				case 76:
					return 3308;
				
				case 77:
					return 3316;
				
				case 78:
					return 3324;
				
				case joaat("mpsv_lp0_31"):
					return 3332;
				
				case 80:
					return 3340;
				
				case 81:
					return 3348;
				
				case 82:
					return 3356;
				
				case 83:
					return 3364;
				
				case 84:
					return 3372;
				
				case 85:
					return 3380;
				
				case 86:
					return 3387;
				
				case 87:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4006;
				
				case 89:
					return 4014;
				
				case 90:
					return 4022;
				
				case 91:
					return 4030;
				
				case 92:
					return 4038;
				
				case 93:
					return 4046;
				
				case 94:
					return 4054;
				
				case 95:
					return 4062;
				
				case 96:
					return 4070;
				
				case 97:
					return 4078;
				
				case 98:
					return 4086;
				
				case 99:
					return 4094;
				
				case 100:
					return 4102;
				
				case 101:
					return 4110;
				
				case 102:
					return 4118;
				
				case 103:
					return 4126;
				
				case 104:
					return 4134;
				
				case 105:
					return 4142;
				
				case 106:
					return 4150;
				
				case 107:
					return 4158;
				
				case 108:
					return 4166;
				
				case 109:
					return 4174;
				
				case 110:
					return 4182;
				
				case 111:
					return 4190;
				
				case 112:
					return 4198;
				
				case 113:
					return 4206;
				
				case 114:
					return 4214;
				
				case 115:
					return 4222;
				
				case 116:
					return 4230;
				
				case 117:
					return 4238;
				
				case 118:
					return 4246;
				
				case 119:
					return 4254;
				
				case 120:
					return 4262;
				
				case 121:
					return 4270;
				
				case 122:
					return 4278;
				
				case 123:
					return 4286;
				
				case 124:
					return 4294;
				
				case 125:
					return 4302;
				
				case 126:
					return 4310;
				
				case 127:
					return 4318;
				
				case 128:
					return 4326;
				
				case 129:
					return 4334;
				
				case 130:
					return 4342;
				
				case 131:
					return 4350;
				
				case 132:
					return 4358;
				
				case 133:
					return 4366;
				
				case 134:
					return 4374;
				
				case 135:
					return 4382;
				
				case 136:
					return 4390;
				
				case 137:
					return 4398;
				
				case 138:
					return 4406;
				
				case 139:
					return 4414;
				
				case 140:
					return 4422;
				
				case 141:
					return 4430;
				
				case 142:
					return 4438;
				
				case 143:
					return 4446;
				
				case 144:
					return 4454;
				
				case 145:
					return 4462;
				
				case 146:
					return 4470;
				
				case 147:
					return 4478;
				
				case 148:
					return 4486;
				
				case 149:
					return 4494;
				
				case 150:
					return 4502;
				
				case 151:
					return 4510;
				
				case 152:
					return 4518;
				
				case 153:
					return 4526;
				
				case 154:
					return 4534;
				
				case 155:
					return 4542;
				
				case 156:
					return 4550;
				
				case 157:
					return 4558;
				
				case 158:
					return 5451;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1791;
				
				case 15:
					return 1798;
				
				case 16:
					return 1805;
				
				case 17:
					return 1812;
				
				case 18:
					return 1819;
				
				case 19:
					return 1826;
				
				case 20:
					return 1833;
				
				case 21:
					return 1840;
				
				case 22:
					return 1847;
				
				case 23:
					return 1854;
				
				case 24:
					return 1860;
				
				case 25:
					return 1866;
				
				case 26:
					return 2161;
				
				case 27:
					return 2168;
				
				case 28:
					return 2175;
				
				case 29:
					return 2182;
				
				case 30:
					return 2189;
				
				case 31:
					return 2196;
				
				case 32:
					return 2203;
				
				case 33:
					return 2210;
				
				case 34:
					return 2217;
				
				case 35:
					return 2224;
				
				case 36:
					return 2231;
				
				case 37:
					return 2237;
				
				case 38:
					return 2243;
				
				case 39:
					return 2814;
				
				case 40:
					return 2821;
				
				case 41:
					return 2828;
				
				case 42:
					return 2835;
				
				case 43:
					return 2842;
				
				case 44:
					return 2849;
				
				case 45:
					return 2856;
				
				case 46:
					return 2863;
				
				case 47:
					return 2870;
				
				case 48:
					return 2877;
				
				case 49:
					return 2884;
				
				case 50:
					return 2890;
				
				case 51:
					return 2896;
				
				case 52:
					return 2938;
				
				case 53:
					return 2945;
				
				case 54:
					return 2952;
				
				case 55:
					return 2959;
				
				case 56:
					return 2966;
				
				case 57:
					return 2973;
				
				case 58:
					return 2980;
				
				case 59:
					return 2987;
				
				case 60:
					return 2994;
				
				case 61:
					return 3001;
				
				case 62:
					return 3008;
				
				case 63:
					return 3014;
				
				case 64:
					return 3020;
				
				case 65:
					return 3221;
				
				case 66:
					return 3229;
				
				case 67:
					return 3237;
				
				case 68:
					return 3245;
				
				case 69:
					return 3253;
				
				case 70:
					return 3261;
				
				case 71:
					return 3269;
				
				case 72:
					return 3277;
				
				case 73:
					return 3285;
				
				case 74:
					return 3293;
				
				case 75:
					return 3301;
				
				case 76:
					return 3309;
				
				case 77:
					return 3317;
				
				case 78:
					return 3325;
				
				case joaat("mpsv_lp0_31"):
					return 3333;
				
				case 80:
					return 3341;
				
				case 81:
					return 3349;
				
				case 82:
					return 3357;
				
				case 83:
					return 3365;
				
				case 84:
					return 3373;
				
				case 85:
					return 3381;
				
				case 86:
					return 3388;
				
				case 87:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4007;
				
				case 89:
					return 4015;
				
				case 90:
					return 4023;
				
				case 91:
					return 4031;
				
				case 92:
					return 4039;
				
				case 93:
					return 4047;
				
				case 94:
					return 4055;
				
				case 95:
					return 4063;
				
				case 96:
					return 4071;
				
				case 97:
					return 4079;
				
				case 98:
					return 4087;
				
				case 99:
					return 4095;
				
				case 100:
					return 4103;
				
				case 101:
					return 4111;
				
				case 102:
					return 4119;
				
				case 103:
					return 4127;
				
				case 104:
					return 4135;
				
				case 105:
					return 4143;
				
				case 106:
					return 4151;
				
				case 107:
					return 4159;
				
				case 108:
					return 4167;
				
				case 109:
					return 4175;
				
				case 110:
					return 4183;
				
				case 111:
					return 4191;
				
				case 112:
					return 4199;
				
				case 113:
					return 4207;
				
				case 114:
					return 4215;
				
				case 115:
					return 4223;
				
				case 116:
					return 4231;
				
				case 117:
					return 4239;
				
				case 118:
					return 4247;
				
				case 119:
					return 4255;
				
				case 120:
					return 4263;
				
				case 121:
					return 4271;
				
				case 122:
					return 4279;
				
				case 123:
					return 4287;
				
				case 124:
					return 4295;
				
				case 125:
					return 4303;
				
				case 126:
					return 4311;
				
				case 127:
					return 4319;
				
				case 128:
					return 4327;
				
				case 129:
					return 4335;
				
				case 130:
					return 4343;
				
				case 131:
					return 4351;
				
				case 132:
					return 4359;
				
				case 133:
					return 4367;
				
				case 134:
					return 4375;
				
				case 135:
					return 4383;
				
				case 136:
					return 4391;
				
				case 137:
					return 4399;
				
				case 138:
					return 4407;
				
				case 139:
					return 4415;
				
				case 140:
					return 4423;
				
				case 141:
					return 4431;
				
				case 142:
					return 4439;
				
				case 143:
					return 4447;
				
				case 144:
					return 4455;
				
				case 145:
					return 4463;
				
				case 146:
					return 4471;
				
				case 147:
					return 4479;
				
				case 148:
					return 4487;
				
				case 149:
					return 4495;
				
				case 150:
					return 4503;
				
				case 151:
					return 4511;
				
				case 152:
					return 4519;
				
				case 153:
					return 4527;
				
				case 154:
					return 4535;
				
				case 155:
					return 4543;
				
				case 156:
					return 4551;
				
				case 157:
					return 4559;
				
				case 158:
					return 5452;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("mpsv_lp0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4008;
				
				case 89:
					return 4016;
				
				case 90:
					return 4024;
				
				case 91:
					return 4032;
				
				case 92:
					return 4040;
				
				case 93:
					return 4048;
				
				case 94:
					return 4056;
				
				case 95:
					return 4064;
				
				case 96:
					return 4072;
				
				case 97:
					return 4080;
				
				case 98:
					return 4088;
				
				case 99:
					return 4096;
				
				case 100:
					return 4104;
				
				case 101:
					return 4112;
				
				case 102:
					return 4120;
				
				case 103:
					return 4128;
				
				case 104:
					return 4136;
				
				case 105:
					return 4144;
				
				case 106:
					return 4152;
				
				case 107:
					return 4160;
				
				case 108:
					return 4168;
				
				case 109:
					return 4176;
				
				case 110:
					return 4184;
				
				case 111:
					return 4192;
				
				case 112:
					return 4200;
				
				case 113:
					return 4208;
				
				case 114:
					return 4216;
				
				case 115:
					return 4224;
				
				case 116:
					return 4232;
				
				case 117:
					return 4240;
				
				case 118:
					return 4248;
				
				case 119:
					return 4256;
				
				case 120:
					return 4264;
				
				case 121:
					return 4272;
				
				case 122:
					return 4280;
				
				case 123:
					return 4288;
				
				case 124:
					return 4296;
				
				case 125:
					return 4304;
				
				case 126:
					return 4312;
				
				case 127:
					return 4320;
				
				case 128:
					return 4328;
				
				case 129:
					return 4336;
				
				case 130:
					return 4344;
				
				case 131:
					return 4352;
				
				case 132:
					return 4360;
				
				case 133:
					return 4368;
				
				case 134:
					return 4376;
				
				case 135:
					return 4384;
				
				case 136:
					return 4392;
				
				case 137:
					return 4400;
				
				case 138:
					return 4408;
				
				case 139:
					return 4416;
				
				case 140:
					return 4424;
				
				case 141:
					return 4432;
				
				case 142:
					return 4440;
				
				case 143:
					return 4448;
				
				case 144:
					return 4456;
				
				case 145:
					return 4464;
				
				case 146:
					return 4472;
				
				case 147:
					return 4480;
				
				case 148:
					return 4488;
				
				case 149:
					return 4496;
				
				case 150:
					return 4504;
				
				case 151:
					return 4512;
				
				case 152:
					return 4520;
				
				case 153:
					return 4528;
				
				case 154:
					return 4536;
				
				case 155:
					return 4544;
				
				case 156:
					return 4552;
				
				case 157:
					return 4560;
				
				case 158:
					return 5453;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("mpsv_lp0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4009;
				
				case 89:
					return 4017;
				
				case 90:
					return 4025;
				
				case 91:
					return 4033;
				
				case 92:
					return 4041;
				
				case 93:
					return 4049;
				
				case 94:
					return 4057;
				
				case 95:
					return 4065;
				
				case 96:
					return 4073;
				
				case 97:
					return 4081;
				
				case 98:
					return 4089;
				
				case 99:
					return 4097;
				
				case 100:
					return 4105;
				
				case 101:
					return 4113;
				
				case 102:
					return 4121;
				
				case 103:
					return 4129;
				
				case 104:
					return 4137;
				
				case 105:
					return 4145;
				
				case 106:
					return 4153;
				
				case 107:
					return 4161;
				
				case 108:
					return 4169;
				
				case 109:
					return 4177;
				
				case 110:
					return 4185;
				
				case 111:
					return 4193;
				
				case 112:
					return 4201;
				
				case 113:
					return 4209;
				
				case 114:
					return 4217;
				
				case 115:
					return 4225;
				
				case 116:
					return 4233;
				
				case 117:
					return 4241;
				
				case 118:
					return 4249;
				
				case 119:
					return 4257;
				
				case 120:
					return 4265;
				
				case 121:
					return 4273;
				
				case 122:
					return 4281;
				
				case 123:
					return 4289;
				
				case 124:
					return 4297;
				
				case 125:
					return 4305;
				
				case 126:
					return 4313;
				
				case 127:
					return 4321;
				
				case 128:
					return 4329;
				
				case 129:
					return 4337;
				
				case 130:
					return 4345;
				
				case 131:
					return 4353;
				
				case 132:
					return 4361;
				
				case 133:
					return 4369;
				
				case 134:
					return 4377;
				
				case 135:
					return 4385;
				
				case 136:
					return 4393;
				
				case 137:
					return 4401;
				
				case 138:
					return 4409;
				
				case 139:
					return 4417;
				
				case 140:
					return 4425;
				
				case 141:
					return 4433;
				
				case 142:
					return 4441;
				
				case 143:
					return 4449;
				
				case 144:
					return 4457;
				
				case 145:
					return 4465;
				
				case 146:
					return 4473;
				
				case 147:
					return 4481;
				
				case 148:
					return 4489;
				
				case 149:
					return 4497;
				
				case 150:
					return 4505;
				
				case 151:
					return 4513;
				
				case 152:
					return 4521;
				
				case 153:
					return 4529;
				
				case 154:
					return 4537;
				
				case 155:
					return 4545;
				
				case 156:
					return 4553;
				
				case 157:
					return 4561;
				
				case 158:
					return 5454;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 13:
					return 1719;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 6019;
				
				case 1:
					return 6020;
				
				case 2:
					return 6021;
				
				case 3:
					return 6022;
				
				case 4:
					return 6023;
				
				case 5:
					return 6024;
				
				case 6:
					return 6025;
				
				case 7:
					return 6026;
				
				case 8:
					return 6027;
				
				case 9:
					return 6028;
				
				case 10:
					return 6029;
				
				case 11:
					return 6030;
				
				case 12:
					return 6031;
				
				case 13:
					return 6032;
				
				case 14:
					return 6033;
				
				case 15:
					return 6034;
				
				case 16:
					return 6035;
				
				case 17:
					return 6036;
				
				case 18:
					return 6037;
				
				case 19:
					return 6038;
				
				case 20:
					return 6039;
				
				case 21:
					return 6040;
				
				case 22:
					return 6041;
				
				case 23:
					return 6042;
				
				case 24:
					return 6043;
				
				case 25:
					return 6044;
				
				case 26:
					return 2249;
				
				case 27:
					return 2250;
				
				case 28:
					return 2251;
				
				case 29:
					return 2252;
				
				case 30:
					return 2253;
				
				case 31:
					return 2254;
				
				case 32:
					return 2255;
				
				case 33:
					return 2256;
				
				case 34:
					return 2257;
				
				case 35:
					return 2258;
				
				case 36:
					return 2259;
				
				case 37:
					return 2260;
				
				case 38:
					return 2261;
				
				case 39:
					return 2901;
				
				case 40:
					return 2902;
				
				case 41:
					return 2903;
				
				case 42:
					return 2904;
				
				case 43:
					return 2905;
				
				case 44:
					return 2906;
				
				case 45:
					return 2907;
				
				case 46:
					return 2908;
				
				case 47:
					return 2909;
				
				case 48:
					return 2910;
				
				case 49:
					return 2911;
				
				case 50:
					return 2912;
				
				case 51:
					return 2913;
				
				case 52:
					return 3025;
				
				case 53:
					return 3026;
				
				case 54:
					return 3027;
				
				case 55:
					return 3028;
				
				case 56:
					return 3029;
				
				case 57:
					return 3030;
				
				case 58:
					return 3031;
				
				case 59:
					return 3032;
				
				case 60:
					return 3033;
				
				case 61:
					return 3034;
				
				case 62:
					return 3035;
				
				case 63:
					return 3036;
				
				case 64:
					return 3037;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			break;
	}
	return 1625;
}

int func_779(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 159)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iParam0 >= func_785(iVar0) && iParam0 < func_780(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_780(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_783(iParam0);
		return func_782(iVar0);
	}
	return (func_781(iParam0, -1) * iParam0 + 1);
}

int func_781(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_439(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_445(iParam1))
			{
				return 0;
			}
			else if (func_437(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049460[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_783(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_784(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_8827)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1770284[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_785(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_783(iParam0);
		return func_786(iVar0);
	}
	return (func_781(iParam0, -1) * iParam0);
}

int func_786(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_787(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_141();
	}
	if (iParam0 == 7 && !Global_262145.f_15534)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_783(iParam0);
		if (iVar1 == 0 && func_495(5368, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1362008[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2528770[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 12)
		{
			return 0;
		}
		return Global_2528699[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_788(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_789(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_784(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_495(func_778(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_791()
{
	return func_495(5355, -1, 0) != 0;
}

bool func_792()
{
	return func_495(3803, -1, 0) != 0;
}

bool func_793()
{
	return func_495(3208, -1, 0) != 0;
}

bool func_794()
{
	return func_495(5354, -1, 0) != 0;
}

int func_795()
{
	int iVar0;
	
	iVar0 = func_478();
	if (iVar0 != func_80())
	{
		return Global_1622795[iVar0 /*431*/].f_11.f_92;
	}
	return 0;
}

int func_796(int iParam0)
{
	if (func_129(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_173;
	}
	return -1;
}

int func_797(int iParam0)
{
	if (func_211(iParam0) == 225 || func_211(iParam0) == 226)
	{
		return func_796(iParam0);
	}
	return -1;
}

var func_798()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_611(unk_0x0FFED3E94261A832(), iVar0))
		{
			unk_0xF6082E2ADA1C795B(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_799(bool bParam0)
{
	if (bParam0)
	{
		if (!func_187(unk_0x0FFED3E94261A832(), 9))
		{
			if (func_377(unk_0x0FFED3E94261A832()) != 0)
			{
				func_214(9);
			}
		}
	}
	else if (func_187(unk_0x0FFED3E94261A832(), 9))
	{
		func_213(9);
	}
}

int func_800(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_801(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_801(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_811();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_103236.f_13832[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_810() == 0)
	{
		func_808();
		return 0;
	}
	func_807(Global_16812);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/]), sParam1, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_25 = iParam7;
	Global_103236.f_13922[Global_16812 /*104*/].f_26 = uParam8;
	Global_103236.f_13922[Global_16812 /*104*/].f_29 = uParam9;
	Global_103236.f_13922[Global_16812 /*104*/].f_30 = uParam12;
	Global_103236.f_13922[Global_16812 /*104*/].f_31 = uParam11;
	Global_103236.f_13922[Global_16812 /*104*/].f_28 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_806(0);
		func_806(2);
		func_806(1);
	}
	else
	{
		func_811();
		switch (iParam16)
		{
			case 3:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_806(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_806(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_806(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_806(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
		{
			Global_103236.f_13832[0 /*20*/].f_17 = 1;
			Global_103236.f_13832[1 /*20*/].f_17 = 1;
			Global_103236.f_13832[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_103236.f_13832[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_103236.f_13832[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_103236.f_13832[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_103236.f_13832[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_811();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_447())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_805(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_802(1);
			func_805(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_802(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_804(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_256(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
							{
								if (iVar1 == 14)
								{
									func_803(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_803(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_803(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_803(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_803(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_256(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_256(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_256(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_256(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_256(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
								func_803(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_803(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_803(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(uParam7))
	{
		func_256(sParam7);
	}
	if (!unk_0x58478145CAF8429C(iParam8))
	{
		func_256(iParam8);
	}
	if (!unk_0x58478145CAF8429C(iParam9))
	{
		func_256(iParam9);
	}
	if (!unk_0x58478145CAF8429C(iParam10))
	{
		func_256(iParam10);
	}
	if (!unk_0x58478145CAF8429C(iParam11))
	{
		func_256(iParam11);
	}
	unk_0x8123397DC676E794();
}

bool func_804(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_805(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

void func_806(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_103236.f_13832[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_807(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_103236.f_13922[iParam0 /*104*/].f_18 = uVar0;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_808()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_809(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_24 = 1;
}

int func_809(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_810()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0 || Global_103236.f_13922[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_809(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_811()
{
	if (func_804(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_812();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_812()
{
	func_813();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_813()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_816(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_815(unk_0x2A5EB8B0FE590B91());
			if (func_814(iVar0) && (!func_804(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_814(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_814(int iParam0)
{
	return iParam0 < 3;
}

int func_815(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_816(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_816(int iParam0)
{
	if (func_814(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_817()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1, 1))
	{
		if (!func_837())
		{
			if (Local_217.f_5 > 0 || unk_0xAA4F14DA15DB0B51(Local_217.f_1, 6))
			{
				func_216(1);
				unk_0xF6082E2ADA1C795B(&(Local_277[unk_0x88641E5BC172153A() /*6*/].f_1), 1);
			}
		}
	}
}

int func_818(bool bParam0)
{
	if (func_819(1))
	{
		return 1;
	}
	if (Global_2497344.f_4828.f_23)
	{
		Global_2497344.f_4828.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_337() == func_80() || !func_922(func_337(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_819(bool bParam0)
{
	bool bVar0;
	
	if (!func_479(1))
	{
		bVar0 = false;
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 != func_80())
		{
			if (func_922(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, 0, 1))
			{
				if ((Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 4 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 8) || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_820(func_211(unk_0x0FFED3E94261A832())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_565(31);
				if (func_398(func_211(unk_0x0FFED3E94261A832())))
				{
					func_565(81);
				}
				if (unk_0x885F483F34E47503(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
				{
					Global_1621379 = func_461(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, -2, 0, 0);
					if (!func_336(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
					{
						func_565(88);
					}
				}
				else
				{
					Global_1621379 = 1;
				}
				Global_1621363 = { Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_821()
{
	return func_230(unk_0x0FFED3E94261A832());
}

void func_822(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != iParam0)
	{
		func_836(-1);
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = iParam0;
		if (func_835() != -1)
		{
			func_834(-1);
		}
		if (func_833() != -1)
		{
			func_832(-1);
		}
		func_831(iParam2);
		func_829(iParam0);
		if (!func_223(iParam0))
		{
			fVar0 = func_222(iParam0);
			if (fVar0 != 1f)
			{
				func_219(fVar0);
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
			}
		}
		if (!func_226(iParam0) || iParam3)
		{
			if (func_224(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xE0125DCD8DB3EFC3(0);
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
			}
			else if (unk_0xA0F7964BC7FD74A9() < 5)
			{
				unk_0xFBC4596E19752537(1f);
				unk_0xE0125DCD8DB3EFC3(5);
			}
		}
		if (func_385())
		{
			func_214(27);
		}
		if (bParam1)
		{
			if (!func_379())
			{
				func_216(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4)) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 0))
			{
				func_565(6);
			}
			func_828();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
		}
		if (func_130(unk_0x0FFED3E94261A832()) && func_231(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
		}
		func_824();
		if (func_823(iParam0))
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 6);
		}
	}
}

int func_823(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_824()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_827();
	iVar2 = func_81(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (func_311(iVar1, iVar2, 1) || func_825(iVar1, unk_0x0FFED3E94261A832()))
			{
				unk_0x8D82B526E9E8D0BD(unk_0x0FFED3E94261A832(), iVar1, uVar3);
				unk_0x8D82B526E9E8D0BD(iVar1, unk_0x0FFED3E94261A832(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_825(int iParam0, int iParam1)
{
	if (func_275(iParam0, 1) && func_275(iParam1, 1))
	{
		return (func_826(iParam0) == func_81(iParam1) || func_826(iParam1) == func_81(iParam0));
	}
	return 0;
}

int func_826(int iParam0)
{
	if (func_275(iParam0, 1))
	{
		return Global_1622795[func_81(iParam0) /*431*/].f_11.f_351;
	}
	return func_80();
}

int func_827()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_478();
	if (iVar0 != func_80())
	{
		if (func_922(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar1 /*431*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_828()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 4);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 6))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 6);
	}
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 0);
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 2);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_544 = 0;
	if (Global_2497344.f_4478 > 0)
	{
		unk_0xE0125DCD8DB3EFC3(Global_2497344.f_4478);
	}
	Global_2497344.f_4477 = 0;
}

void func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_495(3766, -1, 0);
	iVar1 = func_830(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		func_493(3766, iVar0, -1, 1, 0);
	}
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_831(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (Global_1622795[iVar0 /*431*/].f_11.f_173 != iParam0)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_173 = iParam0;
	}
}

void func_832(int iParam0)
{
	if (Global_2497344.f_4828.f_151 != iParam0)
	{
		Global_2497344.f_4828.f_151 = iParam0;
	}
}

int func_833()
{
	return Global_2497344.f_4828.f_151;
}

void func_834(int iParam0)
{
	if (Global_2497344.f_4828.f_150 != iParam0)
	{
		Global_2497344.f_4828.f_150 = iParam0;
	}
}

int func_835()
{
	return Global_2497344.f_4828.f_150;
}

void func_836(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_31 = iParam0;
}

int func_837()
{
	int iVar0;
	
	iVar0 = func_838();
	if (iVar0 > -1)
	{
		if (Local_217.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_838()
{
	int iVar0;
	
	if (Local_277[unk_0x88641E5BC172153A() /*6*/].f_3 != -1)
	{
		return Local_277[unk_0x88641E5BC172153A() /*6*/].f_3;
	}
	if (func_230(unk_0x0FFED3E94261A832()))
	{
		Local_277[unk_0x88641E5BC172153A() /*6*/].f_3 = unk_0x88641E5BC172153A();
		if (unk_0x88641E5BC172153A() == Local_217.f_33)
		{
			func_799(1);
		}
	}
	else if (func_275(unk_0x0FFED3E94261A832(), 1))
	{
		iVar0 = func_478();
		if (iVar0 != func_80())
		{
			if (unk_0x76BCE6C7B20502DA(iVar0))
			{
				Local_277[unk_0x88641E5BC172153A() /*6*/].f_3 = unk_0x675E1E93DBDAF30B(iVar0);
			}
		}
	}
	return Local_277[unk_0x88641E5BC172153A() /*6*/].f_3;
}

int func_839()
{
	return Local_217.f_0;
}

int func_840(int iParam0)
{
	return Local_277[iParam0 /*6*/];
}

int func_841()
{
	var uVar0;
	
	func_846(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_845())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_844())
	{
		return 1;
	}
	if (func_843(157))
	{
		if (!func_842())
		{
			return 1;
		}
	}
	if (func_843(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_220() != 0)
	{
		if (unk_0x09952BA662A7629B(func_220()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_842()
{
	return Global_2445217.f_578;
}

int func_843(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_844()
{
	return Global_2454709;
}

bool func_845()
{
	return Global_2445217.f_573;
}

void func_846(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_847(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_847(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_922(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_848(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_848(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_849()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_850()
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 6))
	{
		if (unk_0x591AF4C50B46E014())
		{
			if (func_837() || func_386())
			{
				func_644(0, 4, 0, 0, -1, -1, -1, -1);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 6);
			}
		}
	}
	func_897(3, 3, -1, -1082130432);
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x88641E5BC172153A() == Local_217.f_33)
		{
			if (iLocal_777 >= 0)
			{
				func_749(&Local_483);
				func_748(&Local_483);
			}
		}
	}
	if (unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == iLocal_476)
	{
		unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), uLocal_478);
	}
	if (iLocal_777 > 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_217.f_1, 3))
		{
			func_741(unk_0x0FFED3E94261A832(), 1, 0);
		}
	}
	func_896();
	if (Local_217.f_34 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_470, 5))
		{
			if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_217.f_34)))
			{
				func_415(unk_0x7C214DA899F05536(Local_217.f_34), 432, 0);
				func_413(unk_0x7C214DA899F05536(Local_217.f_34), 1, 0);
				func_412(unk_0x7C214DA899F05536(Local_217.f_34), 0, 0);
				func_411(unk_0x7C214DA899F05536(Local_217.f_34), 0);
				func_410(unk_0x7C214DA899F05536(Local_217.f_34), Global_262145.f_11007, 0);
			}
		}
	}
	if (func_192(0))
	{
		func_191(0);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_471, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_471, 2))
		{
			unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
			unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
			unk_0x988197573BDAD49A("BG_SIGHTSEER_STOP");
		}
	}
	unk_0xF6082E2ADA1C795B(&iLocal_471, 8);
	func_188();
	unk_0x768882AFD4B41EEA(1);
	func_799(0);
	func_852(1, 0);
	unk_0xE0125DCD8DB3EFC3(5);
	unk_0x507FE690B1271947(&Global_2600685, 21);
	unk_0x507FE690B1271947(&Global_2600685, 20);
	func_851();
}

void func_851()
{
	unk_0xA232817B0B36F2E5();
}

void func_852(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1341327.f_1.f_108 != 0)
	{
		Global_1341327.f_1.f_108 = 0;
	}
	Global_1341327.f_1.f_109 = -1;
	Global_1341327.f_1.f_110 = -1;
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 167 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 168)
	{
		func_894();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 4);
	}
	if ((func_511() && iParam1 != 0) && Global_262145.f_15531)
	{
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 190 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192)
		{
			func_878(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 0);
			if (func_877(iParam1))
			{
				func_878(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 164 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 208)
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = -1;
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_130(unk_0x0FFED3E94261A832()))
		{
			func_216(0);
		}
	}
	else if (func_875(unk_0x0FFED3E94261A832()) != -1)
	{
		func_836(-1);
	}
	func_874(func_80());
	if (func_192(16))
	{
		func_191(16);
	}
	func_870(0);
	func_831(-1);
	func_869();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_868(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_866(iVar1);
		iVar1++;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
	{
		unk_0xFBC4596E19752537(1f);
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 5))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 5);
	}
	iVar2 = func_404();
	if ((func_308(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_865(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_435(iVar2))
	{
		func_861(-1, 1);
	}
	else if (((func_403(iVar2) || func_860(iVar2)) || func_859(iVar2)) || func_432(iVar2))
	{
	}
	else
	{
		func_861(-1, 1);
	}
	func_213(19);
	func_213(20);
	func_213(21);
	func_213(22);
	func_213(27);
	func_191(3);
	func_191(4);
	func_191(7);
	func_858();
	if (func_231(unk_0x0FFED3E94261A832()))
	{
		func_799(0);
	}
	func_213(29);
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_80();
	if (Global_2497344.f_4828.f_23 != 0)
	{
		Global_2497344.f_4828.f_23 = 0;
	}
	if (bParam0)
	{
		func_193();
	}
	if (!func_130(unk_0x0FFED3E94261A832()))
	{
		func_212();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 6))
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 6);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 7))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 7);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 8))
	{
		func_857("IMPEXP_SELFDES", 0);
		func_855("IMPEXP_SELFDES");
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 8);
	}
	func_853(iVar2, 0);
}

void func_853(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
		{
			unk_0xB0D390F8FEB78903(func_854(iParam0));
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
	{
		unk_0x40F160C3038ECAF5(func_854(iParam0));
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 9);
	}
}

char* func_854(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_855(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_811();
					Global_103236.f_13922[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_856(iVar0))
					{
					}
					else
					{
						Global_103236.f_13922[iVar0 /*104*/].f_24 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_28 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xA216C26603EB04E7(Global_103236.f_13922[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_856(int iParam0)
{
	if ((Global_103236.f_13922[iParam0 /*104*/].f_99[0] == 1 || Global_103236.f_13922[iParam0 /*104*/].f_99[1] == 1) || Global_103236.f_13922[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_857(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_103236.f_13922[iVar0 /*104*/].f_24 = 1;
				if (Global_103236.f_13922[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_103236.f_13832[0 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_103236.f_13832[1 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_103236.f_13832[2 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_103236.f_13832[3 /*20*/].f_17 = 0;
					}
					Global_103236.f_13922[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_103236.f_13922[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_858()
{
	if (func_234(unk_0x0FFED3E94261A832()))
	{
		func_213(25);
	}
}

int func_859(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_860(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_861(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_404();
	}
	if (iParam0 > 0)
	{
		if (func_478() != func_80())
		{
			if (func_864(unk_0x0FFED3E94261A832()) == unk_0x0FFED3E94261A832())
			{
				Global_2484845.f_93[func_863(iParam0)] = 1;
			}
		}
		iVar0 = func_863(159);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(157);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(148);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(164);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(142);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(152);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(166);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(170);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(173);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(179);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(200);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(201);
		if (func_862(iVar0, Global_262145.f_11258, bParam1))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(182);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(183);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(185);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(186);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(180);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(195);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(197);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(198);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(207);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(208);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(209);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(214);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(215);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(216);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(217);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(218);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(219);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(220);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(221);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_862(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_187(unk_0x0FFED3E94261A832(), 19) && !func_187(unk_0x0FFED3E94261A832(), 20)) && !func_187(unk_0x0FFED3E94261A832(), 9))
		{
			return 0;
		}
	}
	if (Global_2484845.f_93[iParam0] == 1 && func_9(&(Global_2484845[iParam0 /*2*/])))
	{
		if (func_698(&(Global_2484845[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2484845.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_863(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_864(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_34;
}

void func_865(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_404();
	}
	if (iParam0 > 0)
	{
		if (func_478() != func_80())
		{
			Global_2484845.f_93[func_863(iParam0)] = 1;
		}
		iVar0 = func_863(155);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(163);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(160);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(153);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(162);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(154);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(171);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(172);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(199);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(194);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(193);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(210);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(205);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(189);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_863(211);
		if (func_862(iVar0, Global_262145.f_11259, 0))
		{
			func_249(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_866(int iParam0)
{
	if (!func_180(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/], func_867(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/] = { func_867() };
	}
	if (!func_180(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/], func_867(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/] = { func_867() };
	}
}

Vector3 func_867()
{
	struct<3> Var0;
	
	return Var0;
}

void func_868(int iParam0)
{
	if (!func_180(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/], func_867(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/] = { func_867() };
	}
	if (!func_180(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/], func_867(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/] = { func_867() };
	}
}

void func_869()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573830 = { Var0 };
	Global_1573830.f_13 = func_80();
	if (unk_0xAA4F14DA15DB0B51(Global_1573334, 3))
	{
		unk_0x507FE690B1271947(&Global_1573334, 3);
	}
}

void func_870(bool bParam0)
{
	if (bParam0)
	{
		if (!func_873(unk_0x0FFED3E94261A832(), 14))
		{
			func_872(14);
		}
	}
	else if (func_873(unk_0x0FFED3E94261A832(), 14))
	{
		func_871(14);
	}
}

void func_871(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

void func_872(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

bool func_873(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_5, iParam1);
}

void func_874(int iParam0)
{
	if (func_230(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x0FFED3E94261A832() != iParam0)
		{
			if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 != iParam0)
			{
				Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 = iParam0;
				if (iParam0 != func_80())
				{
				}
			}
		}
	}
}

int func_875(int iParam0)
{
	if (func_876(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_31;
	}
	return -1;
}

int func_876(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_31 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_877(int iParam0)
{
	return func_612(iParam0) == 5;
}

void func_878(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_611(iParam0, iParam1) && func_893(iParam0, iParam1))
	{
		iVar0 = func_610(iParam0, iParam1);
		func_881(iVar0, bParam2, bParam3);
		func_879(iVar0, 1);
	}
}

void func_879(int iParam0, int iParam1)
{
	func_594(func_880(iParam0), iParam1, -1, 1);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_6 = iParam1;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

void func_881(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_774(unk_0x0FFED3E94261A832(), iParam0);
	if (!bParam1)
	{
		func_892(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2484769[iParam0];
		iVar0 = func_891(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1774683 = -1;
		}
		func_890(iParam0, 0, bParam2);
	}
	else if (func_888(iParam0, bParam2))
	{
		iVar0 = func_887(iVar2, 0);
		iVar3 = func_669(unk_0x0FFED3E94261A832(), iVar2);
		iVar4 = func_886(iVar2, bParam2);
		iVar5 = func_887(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_877(iVar2) && func_885(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_892(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_884(unk_0x0FFED3E94261A832(), iVar2) > 0)
		{
			func_883(iParam0, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 - (func_886(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_887(iVar2, bParam2) / func_884(unk_0x0FFED3E94261A832(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_877(iVar2) && func_885(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_882(unk_0x0FFED3E94261A832(), iVar2, iVar0, bParam2);
}

void func_882(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return;
	}
	if (func_601(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1592456[iParam0 /*635*/].f_259.f_226 = iParam2;
				}
				else
				{
					Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_883(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_884(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	if (func_601(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_885(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_80())
	{
		return 0;
	}
	if (func_601(iParam1) && func_877(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_886(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_612(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15502;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15507;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15501;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15506;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15500;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15505;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15498;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15503;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15499;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15504;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_19520;
				if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19521;
				}
			}
			else
			{
				uVar0 = Global_262145.f_19504;
				if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19505;
				}
			}
			break;
	}
	return uVar0;
}

int func_887(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_612(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15483;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15492);
			}
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15497);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15484;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15491);
			}
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15496);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15485;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15490);
			}
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15495);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15486;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15488);
			}
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15493);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15487;
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15489);
			}
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15494);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_19517;
			}
			else
			{
				iVar0 = Global_262145.f_19501;
			}
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19518);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19502);
				}
			}
			if (func_609(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19519);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19503);
				}
			}
			if (func_885(unk_0x0FFED3E94261A832(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_888(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_595(15384, -1, -1);
	}
	return func_595(func_889(iParam0), -1, -1);
}

int func_889(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_890(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_594(15384, iParam1, -1, 1);
		return;
	}
	func_594(func_889(iParam0), iParam1, -1, 1);
}

int func_891(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2484769[iParam0];
	iVar1 = func_774(unk_0x0FFED3E94261A832(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2484776;
	}
	if (func_877(iVar1))
	{
		if (func_885(unk_0x0FFED3E94261A832(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_892(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2484776 = iParam1;
		return;
	}
	Global_2484769[iParam0] = iParam1;
}

int func_893(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_611(iParam0, iParam1))
	{
		iVar0 = func_610(iParam0, iParam1);
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_894()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 28);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 29);
	func_895(24);
}

void func_895(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

void func_896()
{
	unk_0x28BD561DA3E207B1(uLocal_477);
	unk_0x28BD561DA3E207B1(iLocal_476);
}

void func_897(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	Var1.f_0 = Global_1773254;
	Var1.f_1 = Global_1773254.f_1;
	Var1.f_2 = Global_1773254.f_2;
	Var1.f_3 = Global_1773254.f_3;
	Var1.f_4 = Global_1773254.f_4;
	Var1.f_5 = Global_1773254.f_5;
	Var1.f_6 = Global_1773254.f_6;
	Var1.f_7 = Global_1773254.f_7;
	Var1.f_8 = Global_1773254.f_8;
	Var1.f_9 = Global_1773254.f_9;
	Var1.f_10 = Global_1773254.f_10;
	Var1.f_11 = Global_1773254.f_11;
	Var1.f_12 = Global_1773254.f_12;
	Var1.f_13 = Global_1773254.f_14;
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x35302CD5A5D37EED(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1773254.f_15;
			Var15.f_15 = Global_1773254.f_16;
			Var15.f_16 = Global_1773254.f_17;
			unk_0x38535AEC8C6AF84E(&Var15);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1773254.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0x7867F950FD071AFE(&Var32);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1773254.f_15;
			Var49.f_15 = iParam0;
			unk_0xA8455636070B68F7(&Var49);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1773254.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0x8D0BA1C0A0384C16(&Var65);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1773254.f_15;
			Var82.f_15 = iParam0;
			unk_0x31A64EC64E1EB3B3(&Var82);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1773254.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0x231FCB4459183C55(&Var98);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1773254.f_15;
			unk_0x5601D2D69A3954CE(&Var116);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1773254.f_15;
			unk_0x6E6D2D6D4552A609(&Var134);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1773254.f_15;
			unk_0x9B04C28FD4D089F5(&Var153);
		}
	}
	func_898();
}

void func_898()
{
	struct<18> Var0;
	
	Global_1773254 = { Var0 };
}

void func_899(struct<21> Param0)
{
	func_920(func_921(Param0.f_0), Param0);
	unk_0xE73D26CD3CB3B618(3);
	func_918(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_217, 60);
	unk_0xA5929B03CD847BE8(&Local_277, 193);
	if (!func_917())
	{
		func_850();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		if (unk_0x62E688B72E3C57B0())
		{
		}
		func_916();
		func_900(0, 0);
		Local_277[unk_0x88641E5BC172153A() /*6*/] = 0;
	}
	else
	{
		func_850();
	}
}

void func_900(int iParam0, int iParam1)
{
	func_915();
	func_903(1);
	if ((iParam0 != 0 && unk_0x885F483F34E47503(iParam1)) && func_902(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF6082E2ADA1C795B(&Global_1773240, 0);
				break;
			}
	}
	if (!func_821() && !func_275(unk_0x0FFED3E94261A832(), 1))
	{
		if (func_382())
		{
			func_215(3);
		}
	}
	func_215(4);
	if (func_479(0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_478();
	}
	if (func_398(iParam0))
	{
		func_667();
		Global_1773272.f_18 = func_663(func_337());
	}
	else if (func_402(func_875(unk_0x0FFED3E94261A832())))
	{
		func_665();
		Global_1773325.f_18 = func_663(func_337());
	}
	func_901();
}

void func_901()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1341327.f_529[iVar0 /*49*/].f_1 = func_80();
		Global_1341327.f_529[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_902(int iParam0, bool bParam1)
{
	return func_311(unk_0x0FFED3E94261A832(), iParam0, bParam1);
}

void func_903(bool bParam0)
{
	int iVar0;
	
	func_895(33);
	func_895(34);
	func_895(35);
	func_895(36);
	func_895(37);
	func_895(38);
	func_895(39);
	func_895(40);
	func_895(43);
	func_895(41);
	func_895(54);
	func_895(42);
	func_895(47);
	func_914(23);
	func_914(24);
	func_895(92);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 2);
	func_913();
	func_905();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_904(3))
	{
		func_914(3);
	}
	else if (func_904(4))
	{
		func_914(4);
	}
	else if (func_904(5))
	{
		func_914(5);
	}
	else if (func_904(6))
	{
		func_914(6);
	}
	else if (func_904(7))
	{
		func_914(7);
	}
	else if (((((((((((((((((func_904(0) || func_904(1)) || func_904(2)) || func_904(8)) || func_904(9)) || func_904(10)) || func_904(11)) || func_904(12)) || func_904(13)) || func_904(14)) || func_904(15)) || func_904(16)) || func_904(17)) || func_904(18)) || func_904(19)) || func_904(20)) || func_904(21)) || func_904(22))
	{
		func_914(8);
		func_914(0);
		func_914(1);
		func_914(2);
		func_914(9);
		func_914(10);
		func_914(11);
		func_914(12);
		func_914(13);
		func_914(14);
		func_914(15);
		func_914(16);
		func_914(17);
		func_914(18);
		func_914(19);
		func_914(20);
		func_914(21);
		func_914(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_904(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_12[iVar0], iVar1);
}

void func_905()
{
	if (func_912())
	{
		func_911(0);
		func_911(1);
		func_911(2);
		func_911(3);
		func_911(4);
		func_911(5);
		func_911(6);
		func_911(7);
		func_911(8);
		func_911(9);
		func_911(10);
		func_911(11);
		func_911(12);
		if (func_910(13))
		{
			if (func_907(func_908(), 3))
			{
				func_906(func_908(), 3);
			}
			func_911(13);
		}
	}
}

void func_906(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_907(int iParam0, int iParam1)
{
	if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_908()
{
	if (func_909())
	{
		Global_103236.f_27831[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

int func_909()
{
	int iVar0;
	
	iVar0 = func_81(unk_0x0FFED3E94261A832());
	if (((iVar0 != unk_0x0FFED3E94261A832() && iVar0 != func_80()) && unk_0x885F483F34E47503(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_910(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_17[iVar0], iVar1);
}

void func_911(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

int func_912()
{
	if ((((((((((((func_910(0) || func_910(1)) || func_910(2)) || func_910(3)) || func_910(4)) || func_910(5)) || func_910(6)) || func_910(7)) || func_910(8)) || func_910(9)) || func_910(10)) || func_910(11)) || func_910(12))
	{
		return 1;
	}
	return 0;
}

void func_913()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2497344.f_4828.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_914(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_12[iVar0]), iVar1);
}

void func_915()
{
	struct<14> Var0;
	
	Global_1773254 = { Var0 };
	Global_1773254.f_14 = 0;
	Global_1773254.f_15 = 0;
}

void func_916()
{
}

int func_917()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_845())
		{
			return 0;
		}
		if (func_843(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_918(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_851();
			}
			else
			{
				return 0;
			}
		}
		if (!func_919())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_851();
					}
					else
					{
						return 0;
					}
				}
				if (func_845())
				{
					if (!bParam2)
					{
						func_851();
					}
					else
					{
						return 0;
					}
				}
				if (func_843(155))
				{
					if (!bParam2)
					{
						func_851();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_851();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_851();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_851();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_919()
{
	return Global_1312829;
}

void func_920(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_851();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_921(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 109:
			return 32;
		
		case 110:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

int func_922(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

