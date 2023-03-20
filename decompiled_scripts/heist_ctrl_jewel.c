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
	struct<485> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
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
	iLocal_43 = -1;
	iLocal_45 = -1;
	iLocal_738 = -1;
	if (unk_0x24862A9CDC8F8874(82))
	{
		func_232();
	}
	func_231(3);
	func_220(&(Local_46.f_1), func_230(Global_87468[1 /*19*/], Global_87468[2 /*19*/]));
	func_219(&Local_46, 0);
	while (!func_218(4))
	{
		if (!Global_69586)
		{
			if (!func_217(86) && !func_216(14))
			{
				func_205(&Local_46, 32f, 35f);
			}
			else if (unk_0xDCC86F723E82125E(Local_46.f_449, 0))
			{
				func_203(&Local_46);
			}
			if (unk_0xDCC86F723E82125E(Local_46.f_449, 0))
			{
				if (func_202() == 86)
				{
					while (!func_203(&Local_46))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
			}
			func_200(&Local_46);
			func_191();
			func_145();
			if (func_143(0) || unk_0xDCC86F723E82125E(Local_46.f_449, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (unk_0xCBC8FFE55DC722B5(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1(3);
	func_232();
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

void func_2()
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

void func_3(var uParam0)
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
		if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
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
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x693EBB4F13506457();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x77621132305B133B(&(uParam0->f_449), 4);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x693EBB4F13506457();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_100976.f_1.f_6[*uParam0] = 1;
			unk_0x9F4AA6F234E8A860(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 5);
			unk_0x59A0729D503ED758(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x693EBB4F13506457();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)
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
	bVar6 = func_10(1, *uParam0);
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
					func_9(uVar2);
					func_8("PB_H_ZOOM");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
				}
				else
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(2);
					func_9(uVar2);
					func_8("PB_H_ZOOM");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_9(uVar5);
					func_8("PB_H_EXIT");
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
					func_9(uVar0);
					func_8("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
					unk_0xD013AC29829DDC02();
				}
				else
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(3);
					func_9(uVar0);
					func_8("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(2);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_9(uVar5);
					func_8("PB_H_UNDO");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
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
					func_9(uVar1);
					func_8("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
				}
				else
				{
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(2);
					func_9(uVar1);
					func_8("PB_H_SELCT");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					unk_0xD013AC29829DDC02();
					unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
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
				func_9(uVar2);
				func_8("PB_H_ZOOM");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(2);
				func_9(uVar3);
				func_8("PB_H_LOOK");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(1);
				func_9(uVar5);
				func_8("PB_H_UNDO");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(0);
				func_9(uVar4);
				func_8("PB_H_CONF");
				unk_0xD013AC29829DDC02();
				unk_0x7C38F93AF52620B1(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x0139C89EE907A315(false);
				unk_0xD013AC29829DDC02();
			}
			break;
	}
}

void func_8(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

void func_9(var uParam0)
{
	unk_0x621B4D0F6ED2315D(uParam0);
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
	bVar0 = unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0 /*4*/])) && !func_12(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			unk_0x9F4AA6F234E8A860(0);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(uParam0->f_449), 18);
	}
}

bool func_12(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_13(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99618 && iParam1)
	{
		if (func_12(uParam0) && !unk_0x347B6C0AC3348271())
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
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_100976.f_24879.f_145 - 1));
			Global_100976.f_24879.f_145 = (Global_100976.f_24879.f_145 - 1);
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

void func_15(int iParam0)
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

void func_16(int iParam0, int iParam1)
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

void func_17(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0xD013AC29829DDC02();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(8);
			unk_0xD013AC29829DDC02();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(9);
			unk_0xD013AC29829DDC02();
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
							func_21(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_100976.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xB45DF29A98EEAD5D())
					{
						if (((!unk_0xDCC86F723E82125E(uParam0->f_449, 11) && !unk_0xDCC86F723E82125E(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
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
							func_21(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_100976.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xB45DF29A98EEAD5D())
					{
						if (!unk_0xDCC86F723E82125E(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0xDCC86F723E82125E(uParam0->f_449, 11) && !unk_0xDCC86F723E82125E(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
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

int func_19()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_100976.f_24879.f_145 > 0)
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
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_280[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			unk_0x59A0729D503ED758(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
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

void func_25(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x693EBB4F13506457() + 1000;
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
	fVar11 = unk_0xFC4CBB95F50A780A((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (Var7.f_2 - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = unk_0xFC4CBB95F50A780A((fVar14 / uParam0->f_1.f_8));
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
	
	unk_0x7C38F93AF52620B1(uParam0->f_413, "CREATE_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0x65960B4E2ADC9F6D(1);
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16));
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_16.f_1));
	unk_0xD013AC29829DDC02();
	func_33(uParam0);
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
	unk_0x0139C89EE907A315(func_32(*uParam0, uParam0->f_1.f_29));
	unk_0xD013AC29829DDC02();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
		unk_0x65960B4E2ADC9F6D(uParam0->f_415);
		unk_0xD013AC29829DDC02();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(8);
			unk_0xD013AC29829DDC02();
		}
		else if (iVar0 == func_29(*uParam0, 1))
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

bool func_32(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_1.f_120[iParam0], iParam1);
}

void func_33(var uParam0)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_LABELS");
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
	unk_0xD013AC29829DDC02();
}

void func_34(var uParam0)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415);
	unk_0xD013AC29829DDC02();
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
	iVar1 = Global_87468[iVar0 /*19*/].f_1[iParam1];
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
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SHOW_VIEW");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x0139C89EE907A315(true);
	unk_0xD013AC29829DDC02();
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
	func_25(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
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
	iVar2 = Global_87468[iVar1 /*19*/].f_1[iParam1];
	unk_0x7C38F93AF52620B1(uParam0->f_413, "CREATE_VIEW");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x65960B4E2ADC9F6D(0);
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/]));
	unk_0x512B59C08EAFA3B9(unk_0xBBDA792448DB5A89(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	unk_0xD013AC29829DDC02();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_100976.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_100976.f_1.f_12[iVar1 /*6*/][iParam1];
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

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
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

bool func_38(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_1.f_118, iParam0);
}

bool func_39(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_1.f_116, iParam0);
}

int func_40(int iParam0)
{
	return Global_87314[iParam0 /*5*/];
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x7C38F93AF52620B1(uParam0, "SET_DATA_SLOT");
	unk_0x65960B4E2ADC9F6D(iParam2);
	unk_0x65960B4E2ADC9F6D(iParam3);
	unk_0x65960B4E2ADC9F6D(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0x65960B4E2ADC9F6D(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0x65960B4E2ADC9F6D(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0x65960B4E2ADC9F6D(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0x65960B4E2ADC9F6D(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0x65960B4E2ADC9F6D(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0x65960B4E2ADC9F6D(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0x65960B4E2ADC9F6D(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0x65960B4E2ADC9F6D(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0x65960B4E2ADC9F6D(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0x65960B4E2ADC9F6D(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0x65960B4E2ADC9F6D(func_42(iParam1));
	unk_0xD013AC29829DDC02();
}

var func_42(int iParam0)
{
	return Global_87314[iParam0 /*5*/].f_1;
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
	return func_47(iParam1, Global_100976.f_1.f_73[iParam0 /*3*/].f_1, Global_100976.f_1.f_73[iParam0 /*3*/].f_2);
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
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xDCC86F723E82125E(Global_87468[iParam1 /*19*/].f_18, iParam2))
	{
		if (!unk_0xF8D041B05C3D1FD4(&(Global_87468[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_87468[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
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

void func_63(var uParam0)
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(99);
	unk_0xD013AC29829DDC02();
	func_18(uParam0);
}

void func_64(var uParam0)
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

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_99.f_205[iParam0];
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
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
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
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 2))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (!func_142(0))
			{
				if (func_133(8))
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
				func_132(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0);
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
		if (((!bVar7 && uParam0->f_453 > 15) && (unk_0x8D9008B8900A28D0(2, iLocal_36) || unk_0x8D9008B8900A28D0(2, 238))) || unk_0xDCC86F723E82125E(uParam0->f_449, 8))
		{
			unk_0x77621132305B133B(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)
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
	func_72(0);
	func_71();
	unk_0x11D0AD0D13C88D1A();
	unk_0x19479CF94A711302(17);
	unk_0x986FBFBE2397DE42(0);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
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
	func_64(uParam0);
	unk_0x77621132305B133B(&(uParam0->f_449), 7);
	unk_0x77621132305B133B(&(uParam0->f_449), 2);
	Global_87446 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)
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

void func_71()
{
	Global_17118.f_5 = 0;
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_76();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_142(0))
		{
			func_73(0);
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

void func_73(int iParam0)
{
	if (Global_14571)
	{
		func_75(0, 0);
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
	if (!func_74())
	{
		Global_14413.f_1 = 3;
	}
}

int func_74()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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

void func_76()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_77(var uParam0)
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = unk_0x52374D5DBC0F5DC7(0, 1, 1);
	if (!unk_0xF8D041B05C3D1FD4(sVar0, uParam0->f_466))
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
	bVar1 = uParam0->f_454 > unk_0x693EBB4F13506457();
	func_78(&(uParam0->f_649), unk_0xDCC86F723E82125E(uParam0->f_449, 4), (unk_0xDCC86F723E82125E(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216);
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 7))
	{
		if ((!unk_0x308528B5CF35F306() && unk_0xB66DD474AA9E764E()) && !unk_0x2BF05095F2389894())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0xDCC86F723E82125E(uParam0->f_449, 11) && !unk_0xDCC86F723E82125E(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
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

void func_78(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7)
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
	func_81(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
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
		iVar0[2] = func_80((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_80((iVar0[3] + uParam0->f_25), -127, 127);
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
		uParam0->f_14 = (uParam0->f_14 + func_79(((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_79(((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_79(((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_79(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_79(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_79(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
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
							func_84(uParam0, iVar1);
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
					func_83(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iParam0], iParam1);
	if (iVar0 == bParam2)
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

void func_84(var uParam0, int iParam1)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
	unk_0x65960B4E2ADC9F6D(99);
	unk_0xD013AC29829DDC02();
	func_25(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_85(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && unk_0xB66DD474AA9E764E()) && !unk_0x308528B5CF35F306())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0xDCC86F723E82125E(uParam0->f_449, 13))
			{
				if (func_86(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_87(sParam2, iParam3, 0);
}

int func_87(char* sParam0, int iParam1, bool bParam2)
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
					func_99();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_97();
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
				func_91();
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
				if (func_90())
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
			if (func_74())
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
			func_89();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_88();
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_89()
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

int func_90()
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

void func_91()
{
	if (func_216(14))
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
		Global_14413 = func_92();
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

var func_92()
{
	func_93();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_93()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_96(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_95(unk_0xC8B93D94F8954288());
			if (func_94(iVar0) && (!func_216(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_94(Global_100976.f_1770.f_539.f_3549))
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

bool func_94(int iParam0)
{
	return iParam0 < 3;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_98(int iParam0, int iParam1)
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

void func_99()
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

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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
	if (unk_0x7EF0ED41FC8F3EC1(2))
	{
		func_7(uParam0);
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 11))
	{
		if ((unk_0x8D9008B8900A28D0(2, iLocal_37) || unk_0x8D9008B8900A28D0(2, iLocal_39)) || (unk_0xBDC482FE4AF5F4F1(2) && (unk_0x8D9008B8900A28D0(2, iLocal_38) || unk_0x8D9008B8900A28D0(2, iLocal_40))))
		{
			func_111();
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 12))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_449), 13);
				unk_0x77621132305B133B(&(uParam0->f_449), 11);
				unk_0x77621132305B133B(&(uParam0->f_449), 10);
			}
			unk_0x77621132305B133B(&(uParam0->f_449), 12);
		}
	}
	func_81(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_80((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_80((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
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
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
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
							func_7(uParam0);
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
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x693EBB4F13506457();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || unk_0xDCC86F723E82125E(uParam0->f_449, 13))
				{
					if (unk_0x8D9008B8900A28D0(2, iLocal_37) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x8D9008B8900A28D0(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!unk_0xDCC86F723E82125E(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x693EBB4F13506457();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x7C38F93AF52620B1(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0xE8866D60840897A4();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_100976.f_1[*uParam0] = 1;
											unk_0x9F4AA6F234E8A860(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_87468[iVar1 /*19*/])
									{
										unk_0x7C38F93AF52620B1(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0xE8866D60840897A4();
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
								unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_87468[iVar1 /*19*/])
								{
									if (Global_100976.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_100976.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_87468[iVar1 /*19*/].f_1[iVar2])
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
										Global_100976.f_1.f_12[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0x8D9008B8900A28D0(2, iLocal_39) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x8D9008B8900A28D0(2, iLocal_40)))
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
									iVar6 = Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_87468[iVar1 /*19*/].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									unk_0xC4EE38A4CFF7544C(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x693EBB4F13506457();
								}
								else if (!func_218(0))
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
												func_107(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = unk_0x693EBB4F13506457();
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
									iVar8 = Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_87468[iVar1 /*19*/].f_1[uParam0->f_450];
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
									uParam0->f_456 = unk_0x693EBB4F13506457();
									func_5(uParam0, 3, 0);
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
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_87468[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0x7C38F93AF52620B1(uParam0->f_413, "FOCUS_VIEW");
			unk_0x65960B4E2ADC9F6D(99);
			unk_0x65960B4E2ADC9F6D(-1);
			unk_0xD013AC29829DDC02();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xDCC86F723E82125E(uParam0->f_449, 17))
			{
				iVar10 = Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_100976.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_87468[iVar1 /*19*/].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			unk_0x77621132305B133B(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x693EBB4F13506457();
		unk_0x77621132305B133B(&(uParam0->f_449), 10);
	}
	else if (unk_0xB45DF29A98EEAD5D())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0x6745682088A5D775(uParam0->f_680))
		{
			iVar11 = unk_0x287E98C932B92D48(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_105(iVar0, iVar1);
			if (!func_110(0))
			{
				func_104(*uParam0);
			}
			unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_107(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, iVar12);
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
				func_83(5, *uParam0, 1);
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
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
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
			func_103(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x693EBB4F13506457();
			uParam0->f_457 = uParam0->f_456;
			unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
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
					if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_119, 14))
					{
						if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							unk_0x59A0729D503ED758(&(uParam0->f_449), 10);
							unk_0x59A0729D503ED758(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
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
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
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
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
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
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
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

void func_103(var uParam0, int iParam1)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_463, iParam1))
	{
		if (!unk_0xDCC86F723E82125E(Global_100976.f_1.f_119, iParam1))
		{
			if (!unk_0xF8D041B05C3D1FD4(&(uParam0->f_1.f_304[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
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
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 1))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 3))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 0))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 1))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 5))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 15))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 3))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 2))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 18))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 6))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 10))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 0))
								{
									if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 7))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 11))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 1))
								{
									if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 8))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 19))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 4))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 16))
							{
								if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 5))
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
							if (unk_0xDCC86F723E82125E(Global_100976.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x59A0729D503ED758(&(uParam0->f_463), iParam1);
	}
}

void func_104(int iParam0)
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

void func_105(int iParam0, int iParam1)
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

void func_106(int iParam0, int iParam1)
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

void func_107(int iParam0, int iParam1, bool bParam2)
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

bool func_110(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_111()
{
	Global_14578 = 0;
	func_112();
}

void func_112()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

void func_113()
{
	unk_0x5B53B03A14798328();
	func_114();
}

void func_114()
{
	Global_17118.f_134 = 1;
}

void func_115(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x59A0729D503ED758(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!unk_0x308528B5CF35F306())
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (Global_36750 == 1)
			{
				func_120(unk_0xC8B93D94F8954288());
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
	func_72(1);
	func_119();
	unk_0x31592941AC9991FE();
	unk_0x98371F41D43CDFA9(uParam0->f_401, 5f, 1, 1, 0, 0);
	unk_0x213270B65D2FC4D2(uParam0->f_401, 5f);
	unk_0x986FBFBE2397DE42(1);
	unk_0xF799955FDE53592F(82, 66);
	unk_0x6304F4F223560FF0(17, 0.612f, 0.818f);
	unk_0xFA99CE7438CDE58B();
	func_118(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
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
	func_117(0);
	func_116();
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
	func_6(uParam0, uParam0->f_464, 0);
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		func_15(iVar0);
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

void func_117(bool bParam0)
{
	if (!bParam0)
	{
		Global_99620 = unk_0x693EBB4F13506457() + 250;
	}
	Global_99617 = bParam0;
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

void func_119()
{
	Global_17118.f_5 = 1;
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
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36553[iVar0 /*5*/];
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

int func_122(int iParam0)
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
	Global_36634[iVar0 /*5*/] = iParam0;
	Global_36634[iVar0 /*5*/].f_1 = iParam1;
	Global_36634[iVar0 /*5*/].f_2 = iParam2;
	Global_36634[iVar0 /*5*/].f_3 = iParam3;
	Global_36634[iVar0 /*5*/].f_4 = iParam4;
}

int func_125()
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
		if (Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/].f_7 = 1;
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
		if (Global_36400[iVar0 /*19*/].f_1 == iParam0)
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
	if (!unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		return 0;
	}
	if (func_142(0))
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

void func_132(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xCBC8FFE55DC722B5(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA8D4B6BDCF6DE72B())
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

int func_133(int iParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
						if (((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_141()) || Global_100023) || Global_25117) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_137()) || func_136()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1) || func_141()) || Global_25117) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_141()) || Global_100023) || Global_25117) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_100976.f_6322.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_141()) || Global_100023) || Global_25117) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_136()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_141() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || func_98(8, -1)) || func_136()) || func_135()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_139()) || func_138()) || func_135()) || func_134())
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
							if ((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_141()) || Global_25117) || func_140()) || func_98(8, -1)) || func_138()) || func_137()) || func_136()) || Global_100976.f_6322.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || func_141()) || func_138()) || Global_100023) || Global_25117) || func_140()) || Global_36750) || func_98(8, -1)) || func_137()) || func_135()) || func_136()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_141()) || Global_100023) || Global_25117) || func_140()) || func_98(8, -1)) || func_137()) || func_135()) || func_139()) || func_138()) || func_136())
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
	return Global_91145.f_1;
}

int func_135()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_136()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_137()
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

bool func_138()
{
	return Global_91158.f_297 > 0;
}

bool func_139()
{
	return Global_91158.f_296 > 0;
}

var func_140()
{
	return Global_1315911;
}

int func_141()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_142(int iParam0)
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

bool func_143(int iParam0)
{
	return func_144(iParam0, Global_35700);
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
	int iVar0;
	struct<3> Var1;
	
	if (func_218(17))
	{
		if (!unk_0xDCC86F723E82125E(iLocal_41, 11))
		{
			unk_0x0B3F3AB0A340D234("JH_1_MCS_4P2", 8);
			unk_0xE3B4E8C914195E94("lesterHandler");
			unk_0xF3AC452C34BF0E13("JHS1AUD", 6);
			unk_0x59A0729D503ED758(&iLocal_41, 11);
		}
		else if (unk_0x35081E98CA82CBB4())
		{
			unk_0x131748CFDC209107("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_218(18))
	{
		if (func_218(17))
		{
			if ((unk_0xDEDB719756F0580C("JH_1_MCS_4P2") && unk_0xD838CD843F6FE18B("lesterHandler")) && unk_0xF0DCEBB4ADA5D981(6))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_729))
				{
					unk_0x5D713171D2C2E177(iLocal_729, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					unk_0x5D713171D2C2E177(iLocal_729, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_732))
				{
					if (unk_0xE33A9405F8300B78(iLocal_732))
					{
						unk_0xB81176DFD2611E8B(iLocal_732, 1, 1);
					}
				}
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					unk_0x5D713171D2C2E177(unk_0xC8B93D94F8954288(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_732))
				{
					unk_0x5D713171D2C2E177(iLocal_732, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					unk_0x5D713171D2C2E177(iLocal_732, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				unk_0x7567CEA8E6B5340B(joaat("prop_cs_walking_stick"));
				unk_0x7567CEA8E6B5340B(joaat("prop_laptop_lester2"));
				func_72(1);
				func_117(1);
				func_183(1, 1, 1, 0);
				iLocal_43 = -1;
				unk_0x8E6D4B516B44DE88(0);
				if (func_110(0))
				{
					unk_0x964746959DBA39F2(0, 0, 0, 0);
				}
				func_106(17, 0);
			}
		}
		else if (unk_0x308528B5CF35F306())
		{
			func_113();
			if (unk_0xDCC86F723E82125E(iLocal_41, 7))
			{
				if (unk_0x95CCECA3948CFE7B(iLocal_732))
				{
					unk_0x872B541D7953A19B(iLocal_732, 1, 0);
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_730))
				{
					unk_0x872B541D7953A19B(iLocal_730, 1, 0);
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_729))
				{
					unk_0x872B541D7953A19B(iLocal_729, 1, 0);
				}
				unk_0x77621132305B133B(&iLocal_41, 7);
			}
			if (unk_0x669E4BAB086C2648("Lester", 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_729))
				{
					iVar0 = iLocal_729;
					unk_0xB8BA7F44DF1575E1("lesterHandler", &iVar0, 1, 1424);
					unk_0x996557D48454AE40("lesterHandler");
					iLocal_739 = unk_0x693EBB4F13506457();
					unk_0x59A0729D503ED758(&iLocal_41, 18);
				}
			}
			if (unk_0x669E4BAB086C2648("Michael", 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					Var1 = { 709.3766f, -964.2602f, 29.3954f };
					unk_0x32B7B9548CC32D81(Var1, &(Var1.f_2), 0);
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var1, 1, 0, 0, 1);
						unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 261.7831f);
						if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
						{
							unk_0x1A039EB9A3399D1C(unk_0xA34E7C2A5118D638(), 1f, 2000, 0, 1, 0);
						}
						unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 0, 0, 0);
					}
					unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 0, 0);
				}
			}
			if (unk_0xF490A05A3C6F92BC(0))
			{
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(0f, 1065353216);
			}
		}
		else if (iLocal_43 == -1 && !func_110(0))
		{
			iLocal_43 = unk_0x693EBB4F13506457() + 1500;
		}
		else if (unk_0x693EBB4F13506457() > iLocal_43 || func_110(0))
		{
			if (func_110(0))
			{
				unk_0x00F9843B9C06C2E9(0);
			}
			else
			{
				Global_55659 = 0;
				Global_91145 = 0;
				func_182();
			}
			unk_0x4BBD72565A0AF033(joaat("prop_cs_walking_stick"));
			unk_0x4BBD72565A0AF033(joaat("prop_laptop_lester2"));
			func_72(0);
			func_183(0, 1, 1, 0);
			func_180(&(Global_100976.f_1770.f_539), 86);
			func_154(&(Global_100976.f_1770.f_539), 86);
			func_153(&iLocal_45);
			unk_0x77621132305B133B(&iLocal_41, 1);
			unk_0x9DBF08025225340D(uLocal_733, 0);
			if (iLocal_738 != -1)
			{
				if (unk_0xDA33F6DC6574B8DD(iLocal_738))
				{
					unk_0x78DFC4B56BCF3DA9(iLocal_738);
				}
			}
			unk_0xE7E852B69C980E80();
			unk_0x7AF3AE9D12A61928(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 1, 0);
			unk_0x60B57BC5E51D2074(5);
			func_106(18, 0);
			func_146(0, 0);
		}
	}
	else if (!func_218(17))
	{
		if (unk_0xDEDB719756F0580C("JH_1_MCS_4P2"))
		{
			unk_0xCDBEE0F3B4A74754();
		}
	}
	if (unk_0xDCC86F723E82125E(iLocal_41, 18))
	{
		unk_0x2BE3C7FA4FCCA784(0, 26, 1);
		if (unk_0x693EBB4F13506457() > iLocal_739 + 1000)
		{
			unk_0x77621132305B133B(&iLocal_41, 18);
		}
	}
}

void func_146(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_150(4, 1);
						break;
					
					case 4:
						func_150(8, 1);
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
					
					case 12:
						func_150(11, 1);
						break;
					
					case 13:
						func_150(12, 1);
						break;
					
					case 11:
						if (func_149(91))
						{
							func_150(0, 1);
						}
						break;
					
					case 5:
						if (func_149(91))
						{
							func_150(2, 1);
						}
						break;
					
					case 3:
						if (func_149(67))
						{
							func_150(5, 1);
						}
						break;
					
					case 2:
						if (func_149(77))
						{
							func_150(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && unk_0xDCC86F723E82125E(Global_100976.f_29464.f_8[4], 0))
	{
		func_150(9, 1);
	}
	if (!func_39(13) && unk_0xDCC86F723E82125E(Global_100976.f_29464.f_8[16], 0))
	{
		func_150(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_150(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_148(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_147("DI_FEED_HST");
	}
}

void func_147(char* sParam0)
{
	unk_0x12F4A48D84A3989D("");
	unk_0xA719266DA9F3AABF("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_148(int iParam0)
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

int func_149(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_330[iParam0 /*6*/];
}

void func_150(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_152(iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_30903.f_1), iVar0);
			if (!bParam1)
			{
				func_147(func_151(iParam0));
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

int func_152(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_30903.f_1, iParam0);
	}
	return 0;
}

void func_153(int iParam0)
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

void func_154(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_155(uParam0, 0, 12);
			break;
		
		case 19:
			func_155(uParam0, 1, 13);
			break;
		
		case 29:
			func_155(uParam0, 1, 14);
			break;
		
		case 30:
			func_155(uParam0, 2, 15);
			func_155(uParam0, 1, 29);
			break;
		
		case 32:
			func_155(uParam0, 1, 16);
			func_155(uParam0, 0, 17);
			break;
		
		case 39:
			func_155(uParam0, 0, 21);
			func_155(uParam0, 1, 20);
			break;
		
		case 31:
			func_155(uParam0, 0, 18);
			break;
		
		case 20:
			func_155(uParam0, 2, 22);
			break;
		
		case 66:
			func_155(uParam0, 1, 23);
			break;
		
		case 68:
			func_155(uParam0, 1, 24);
			break;
		
		case 70:
			func_155(uParam0, 1, 67);
			break;
		
		case 8:
			func_155(uParam0, 1, 25);
			func_155(uParam0, 2, 26);
			break;
		
		case 67:
			func_155(uParam0, 1, 27);
			break;
		
		case 9:
			func_155(uParam0, 2, 28);
			break;
		
		case 38:
			func_155(uParam0, 2, 30);
			func_155(uParam0, 1, 19);
			break;
		
		case 83:
			func_155(uParam0, 2, 33);
			break;
		
		case 45:
			func_155(uParam0, 1, 35);
			break;
		
		case 64:
			func_155(uParam0, 0, 36);
			func_155(uParam0, 1, 37);
			break;
		
		case 91:
			func_155(uParam0, 0, 41);
			break;
		
		case 42:
			func_155(uParam0, 0, 58);
			Global_90575[0 /*98*/] = 0;
			func_155(uParam0, 2, 59);
			Global_90575[2 /*98*/] = 0;
			break;
		
		case 41:
			func_155(uParam0, 1, 42);
			func_155(uParam0, 2, 42);
			break;
		
		case 15:
			func_155(uParam0, 0, 46);
			func_155(uParam0, 1, 47);
			break;
		
		case 16:
			func_155(uParam0, 0, 48);
			break;
		
		case 48:
			func_155(uParam0, 1, 50);
			func_155(uParam0, 2, 51);
			break;
		
		case 74:
			func_155(uParam0, 0, 52);
			func_155(uParam0, 1, 66);
			break;
		
		case 76:
			func_155(uParam0, 1, 53);
			func_155(uParam0, 2, 54);
			func_155(uParam0, 0, 62);
			break;
		
		case 75:
			func_155(uParam0, 0, 61);
			func_155(uParam0, 1, 31);
			break;
		
		case 69:
			func_155(uParam0, 1, 63);
			break;
		
		case 84:
			func_155(uParam0, 0, 68);
			func_155(uParam0, 2, 69);
			break;
		
		case 85:
			func_155(uParam0, 0, 64);
			func_155(uParam0, 2, 65);
			break;
		
		case 93:
			func_155(uParam0, 1, 38);
			func_155(uParam0, 2, 39);
			break;
		
		case 11:
			func_155(uParam0, 2, 55);
			break;
		
		case 77:
			func_155(uParam0, 1, 56);
			func_155(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_155(var uParam0, int iParam1, int iParam2)
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
	uParam0->f_1524[iParam1] = func_169();
	if (!func_168(iParam2, &(uParam0->f_1528[iParam1 /*3*/]), &(uParam0->f_1538[iParam1])))
	{
		return 0;
	}
	if (!func_167(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_167(Global_89610[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_156(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
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

int func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
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
			func_158(iParam0, uParam2, 0);
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
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_158(iParam0, uParam2, 2);
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
			func_158(iParam0, uParam2, 0);
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
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_158(iParam0, uParam2, 0);
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
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_158(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_158(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 1);
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
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_158(iParam0, uParam2, 0);
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
			func_158(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_158(iParam0, uParam2, 0);
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
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_158(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
			*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_156(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
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
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
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
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_158(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_158(iParam0, uParam2, 0);
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
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_156(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
			*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
				*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
				*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0xC6D38B918E72181E(-5f, 5f), unk_0xC6D38B918E72181E(-5f, 5f), 0f };
				*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_156(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_156(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_158(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_157(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_157(iParam0, uParam2, 1);
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
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
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
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_158(iParam0, uParam2, 0);
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
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_158(iParam0, uParam2, 0);
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
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0x949D03817D2A6977(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0x949D03817D2A6977(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0x949D03817D2A6977(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_89610[iParam1 /*3*/] };
			*uParam4 = unk_0xC6D38B918E72181E(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_157(int iParam0, var uParam1, int iParam2)
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

int func_158(int iParam0, var uParam1, int iParam2)
{
	if (Global_90575[iParam0 /*98*/] == 0)
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_90575[iParam0 /*98*/] == joaat("blimp"))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_166(iParam0))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x9DABB329596B1BD6(Global_90575[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xE924C2C283992918(Global_90575[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xAF40E7422A6D9D80(Global_90575[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xC9E810FB9A83EF58(Global_90575[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x1B477DDE9D088A91(Global_90575[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0xE6CB12C10EE5D793(Global_90575[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_159(Global_90575[iParam0 /*98*/], 0))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_157(iParam0, uParam1, iParam2);
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
		func_157(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_90575[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_157(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_90575[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_90575[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_157(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_159(int iParam0, bool bParam1)
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
		if (!func_165())
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
		if ((((!func_164() && !func_163()) && !func_162()) && !func_161()) && !func_165())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_162())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_160(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_160(int iParam0)
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

int func_161()
{
	return 0;
}

int func_162()
{
	return 1;
}

int func_163()
{
	return 1;
}

int func_164()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_165()
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

int func_166(int iParam0)
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

bool func_167(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_168(int iParam0, var uParam1, float fParam2)
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
			return func_168(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_168(8, uParam1, fParam2);
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

var func_169()
{
	var uVar0;
	
	func_179(&uVar0, unk_0x4C374828FD653ECC());
	func_178(&uVar0, unk_0x44AD07D9D178F321());
	func_177(&uVar0, unk_0x342FDFC48311CCCE());
	func_172(&uVar0, unk_0x818078CDB71D3E9C());
	func_171(&uVar0, unk_0x49D01BEA8D03E892());
	func_170(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_170(var uParam0, int iParam1)
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

void func_171(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_172(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_176(*uParam0);
	iVar1 = func_174(*uParam0);
	if (iParam1 < 1 || iParam1 > func_173(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_173(int iParam0, int iParam1)
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

var func_174(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_175(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_175(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_176(var uParam0)
{
	return uParam0 & 15;
}

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_178(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_179(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_180(var uParam0, int iParam1)
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
			if (!func_168(Global_100976.f_17167[iVar0], &Var2, &fVar5))
			{
				Global_100976.f_17167[iVar0] = 318;
				func_181(&(uParam0->f_1524[iVar0]));
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

void func_181(var uParam0)
{
	*uParam0 = -15;
}

int func_182()
{
	if (func_110(0))
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

void func_183(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_190(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_74())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_189(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_190(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_189(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_184(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_184(int iParam0)
{
	if (func_186(iParam0, 0))
	{
		return 1;
	}
	if (func_185())
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

bool func_185()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_186(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_187(-1, 0) == 8;
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

int func_187(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_188();
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

int func_188()
{
	return Global_1312746;
}

int func_189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && iParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_190(int iParam0)
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

void func_191()
{
	unk_0xCB2B17DB493AB2E6(-1747852954);
	if (func_218(16))
	{
		if (!func_110(0))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_41, 10))
			{
				unk_0x0B3F3AB0A340D234("JH_1_MCS_4_P1_ALT1", 8);
				func_199();
				func_107(0, 0, 1);
				uLocal_733 = unk_0x8738B068D97CDC64(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 0, 1, 1, 1);
				iLocal_738 = unk_0xDC3487ADA3784C61(Local_46.f_1.f_394, Local_46.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				unk_0x52AFCF0DF71B4A6D(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397);
				unk_0x7AF3AE9D12A61928(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 0, 0);
				unk_0x59A0729D503ED758(&iLocal_41, 10);
			}
			else if (unk_0x35081E98CA82CBB4())
			{
				unk_0x131748CFDC209107("LESTER", 1, 0, 0, 0);
			}
			if (func_149(86))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_41, 1))
				{
					if (func_143(0))
					{
						if (func_196(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_189(1, 0, 1, 0);
							if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
							{
								unk_0xE6827001F6663087(unk_0xA34E7C2A5118D638());
								unk_0x60B57BC5E51D2074(0);
							}
							unk_0x59A0729D503ED758(&iLocal_41, 1);
							unk_0x59A0729D503ED758(&iLocal_41, 2);
						}
					}
				}
			}
			if (unk_0xDCC86F723E82125E(iLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (unk_0x844838E5D8A21336(uLocal_734))
						{
							unk_0x5CF5A880ED809DDA(uLocal_734, 0);
						}
						if (unk_0x844838E5D8A21336(uLocal_735))
						{
							unk_0x5CF5A880ED809DDA(uLocal_735, 0);
						}
						uLocal_734 = unk_0x785B53D5654A2FFD(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						uLocal_735 = unk_0x785B53D5654A2FFD(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[0]))
						{
							if (!unk_0xB6900B8CB0ABBD2B(Global_87936.f_9[0]))
							{
								iLocal_729 = Global_87936.f_9[0];
								unk_0xFD816D0E738EB817(iLocal_729, 0, 1);
							}
						}
						if (unk_0x95CCECA3948CFE7B(Global_87936[0]))
						{
							if (!unk_0xB6900B8CB0ABBD2B(Global_87936[0]))
							{
								iLocal_731 = Global_87936[0];
							}
						}
						iLocal_42++;
						break;
					
					case 1:
						func_183(1, 1, 0, 0);
						unk_0xB7709513BF7C1AC0(0);
						unk_0xB1DF6C0157E453DE(0);
						if (unk_0x95CCECA3948CFE7B(iLocal_731))
						{
							if (unk_0x5D42322C7DB888D0(iLocal_731, 0))
							{
								unk_0xCB0D07EF49E95CDD(uLocal_734, iLocal_731, 0f, 0f, 0f, 1);
							}
						}
						unk_0xB306DBE9AFBD23A6(uLocal_735, uLocal_734, 5000, 1, 1);
						unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
						iLocal_43 = unk_0x693EBB4F13506457();
						iLocal_42++;
						break;
					
					case 2:
						if ((unk_0x693EBB4F13506457() - iLocal_43) > 1200)
						{
							if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
								{
									if (unk_0x5D42322C7DB888D0(iLocal_731, 0))
									{
										if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_731, 0))
										{
											unk_0x3E2E609450787FFE(&uLocal_736);
											unk_0xD4781E5070EB1F1C(0, iLocal_731, 0);
											unk_0x81333BEA4837207C(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0x939BC11172AA1303(uLocal_736);
											unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
											unk_0xBFE865E3B513451B(unk_0xC8B93D94F8954288(), uLocal_736);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 3:
						if ((unk_0x693EBB4F13506457() - iLocal_43) > 2400)
						{
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_729))
							{
								if (unk_0x95CCECA3948CFE7B(iLocal_731))
								{
									if (unk_0x5D42322C7DB888D0(iLocal_731, 0))
									{
										if (unk_0x0C7EC810080F0459(iLocal_729, iLocal_731, 0))
										{
											unk_0x3E2E609450787FFE(&uLocal_737);
											unk_0xD4781E5070EB1F1C(0, iLocal_731, 0);
											unk_0x81333BEA4837207C(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0x939BC11172AA1303(uLocal_737);
											unk_0x5124C5FA52D2AF3E(iLocal_729);
											unk_0xBFE865E3B513451B(iLocal_729, uLocal_737);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 4:
						if ((unk_0x693EBB4F13506457() - iLocal_43) > 5000)
						{
							unk_0x77621132305B133B(&iLocal_41, 2);
						}
						break;
					}
			}
			if (unk_0xDCC86F723E82125E(iLocal_41, 1) && !unk_0xDCC86F723E82125E(iLocal_41, 2))
			{
				if (unk_0xDEDB719756F0580C("JH_1_MCS_4_P1_ALT1"))
				{
					if (!unk_0x308528B5CF35F306())
					{
						iLocal_730 = unk_0xC8B93D94F8954288();
						if (!unk_0xB6900B8CB0ABBD2B(iLocal_730))
						{
							unk_0x5D713171D2C2E177(iLocal_730, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!unk_0xB6900B8CB0ABBD2B(iLocal_729))
						{
							unk_0x5D713171D2C2E177(iLocal_729, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						unk_0x59A0729D503ED758(&iLocal_41, 9);
						unk_0x5D713171D2C2E177(iLocal_732, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						unk_0x59A0729D503ED758(&iLocal_41, 8);
						func_195(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
						func_195(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = unk_0x693EBB4F13506457();
						unk_0x8E6D4B516B44DE88(2048);
					}
					else
					{
						func_113();
						if (!unk_0xDCC86F723E82125E(iLocal_41, 17))
						{
							if (!unk_0xB66DD474AA9E764E() && !unk_0x2230725B418B1240())
							{
								unk_0x31E6EB2040318451(800);
							}
							unk_0x59A0729D503ED758(&iLocal_41, 17);
						}
						if (unk_0x2C87734B4748BBD5())
						{
							unk_0x59A0729D503ED758(&iLocal_41, 16);
						}
						if (unk_0xDCC86F723E82125E(iLocal_41, 16))
						{
							if (unk_0xD5DFCA69ACAA20E3())
							{
								if (!unk_0xDCC86F723E82125E(iLocal_41, 12))
								{
									func_107(0, 1, 1);
									unk_0x59A0729D503ED758(&iLocal_41, 12);
								}
								if (!unk_0xDCC86F723E82125E(iLocal_41, 13))
								{
									func_107(0, 2, 1);
									unk_0x59A0729D503ED758(&iLocal_41, 13);
								}
								if (!unk_0xDCC86F723E82125E(iLocal_41, 14))
								{
									func_107(0, 3, 1);
									unk_0x59A0729D503ED758(&iLocal_41, 14);
								}
								if (!unk_0xDCC86F723E82125E(iLocal_41, 15))
								{
									func_107(0, 4, 1);
									unk_0x59A0729D503ED758(&iLocal_41, 15);
								}
								func_193(&Local_46);
								if (!unk_0xDCC86F723E82125E(iLocal_41, 0))
								{
									func_192();
									unk_0x59A0729D503ED758(&iLocal_41, 0);
								}
							}
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 5))
						{
							if (unk_0x844838E5D8A21336(uLocal_734))
							{
								unk_0x7D1795B1E14EDFFD(uLocal_734, 0);
							}
							if (unk_0x844838E5D8A21336(uLocal_735))
							{
								unk_0x7D1795B1E14EDFFD(uLocal_735, 0);
							}
							unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
							if (unk_0x844838E5D8A21336(uLocal_735))
							{
								unk_0x5CF5A880ED809DDA(uLocal_735, 0);
							}
							if (unk_0x844838E5D8A21336(uLocal_735))
							{
								unk_0x5CF5A880ED809DDA(uLocal_735, 0);
							}
							if (unk_0x95CCECA3948CFE7B(iLocal_729))
							{
								unk_0x26B3B761603F5232(&iLocal_729);
							}
							unk_0x59A0729D503ED758(&iLocal_41, 5);
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								unk_0x59A0729D503ED758(&iLocal_41, 6);
							}
						}
						if (!unk_0xDCC86F723E82125E(iLocal_41, 12))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_43) > 14058)
							{
								func_107(0, 1, 1);
								unk_0x59A0729D503ED758(&iLocal_41, 12);
							}
						}
						else if (!unk_0xDCC86F723E82125E(iLocal_41, 13))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_43) > 22887)
							{
								func_107(0, 2, 1);
								unk_0x59A0729D503ED758(&iLocal_41, 13);
							}
						}
						else if (!unk_0xDCC86F723E82125E(iLocal_41, 14))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_43) > 27988)
							{
								func_107(0, 3, 1);
								func_193(&Local_46);
								unk_0x59A0729D503ED758(&iLocal_41, 14);
							}
						}
						else if (!unk_0xDCC86F723E82125E(iLocal_41, 15))
						{
							if ((unk_0x693EBB4F13506457() - iLocal_43) > 42084)
							{
								func_107(0, 4, 1);
								unk_0x59A0729D503ED758(&iLocal_41, 15);
							}
						}
						if (unk_0xDCC86F723E82125E(iLocal_41, 8))
						{
							if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_732 = unk_0x9F549071D7D4F964(unk_0x3B56A7E9193FB661("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								unk_0x77621132305B133B(&iLocal_41, 8);
							}
						}
						if (unk_0xDCC86F723E82125E(iLocal_41, 9))
						{
							if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_729 = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("Lester", joaat("ig_lestercrest")));
								unk_0x77621132305B133B(&iLocal_41, 9);
							}
						}
						if (unk_0x669E4BAB086C2648("Michael", 0))
						{
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_730))
							{
								unk_0xAAD662D7E0D59F4C(iLocal_730, 1);
								unk_0xC778754E36F3FFD6(iLocal_730, 208, 1);
								unk_0xC778754E36F3FFD6(iLocal_730, 118, 0);
								unk_0xC778754E36F3FFD6(iLocal_730, 213, 0);
								unk_0x6094B3418D5AE59D(iLocal_730, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0x669E4BAB086C2648("Lester", 0))
						{
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_729))
							{
								if (unk_0x95CCECA3948CFE7B(iLocal_732))
								{
									unk_0xAD318582A32CA5D2(iLocal_732, iLocal_729, unk_0xF2122440C667309F(iLocal_729, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_729))
							{
								unk_0xAAD662D7E0D59F4C(iLocal_729, 1);
								unk_0xC778754E36F3FFD6(iLocal_729, 208, 1);
								unk_0xC778754E36F3FFD6(iLocal_729, 118, 0);
								unk_0xC778754E36F3FFD6(iLocal_729, 213, 0);
								unk_0x6094B3418D5AE59D(iLocal_729, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0xF490A05A3C6F92BC(0))
						{
							if (!unk_0xDCC86F723E82125E(iLocal_41, 0))
							{
								func_192();
								unk_0x59A0729D503ED758(&iLocal_41, 0);
							}
							if (!unk_0xDCC86F723E82125E(iLocal_41, 7))
							{
								if (!unk_0xB6900B8CB0ABBD2B(iLocal_730))
								{
									unk_0x872B541D7953A19B(iLocal_730, 0, 0);
								}
								if (!unk_0xB6900B8CB0ABBD2B(iLocal_729))
								{
									unk_0x872B541D7953A19B(iLocal_729, 0, 0);
								}
								if (unk_0x95CCECA3948CFE7B(iLocal_732))
								{
									unk_0x872B541D7953A19B(iLocal_732, 0, 0);
								}
								unk_0x59A0729D503ED758(&iLocal_41, 7);
							}
							func_106(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_195(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
			func_195(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
			if (func_143(0))
			{
				if (func_196(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					unk_0x59A0729D503ED758(&iLocal_41, 1);
				}
			}
			if (unk_0xDCC86F723E82125E(iLocal_41, 1))
			{
				func_192();
				func_106(16, 0);
			}
		}
	}
	else
	{
		if (unk_0xDEDB719756F0580C("JH_1_MCS_4_P1_ALT1"))
		{
			unk_0xCDBEE0F3B4A74754();
		}
		if (unk_0xDCC86F723E82125E(iLocal_41, 10))
		{
			unk_0x77621132305B133B(&iLocal_41, 10);
		}
	}
}

void func_192()
{
	func_83(1, 0, 1);
	func_83(2, 0, 1);
	func_200(&Local_46);
	func_67(&Local_46);
}

void func_193(var uParam0)
{
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
	{
		if (!unk_0x308528B5CF35F306())
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_194(uParam0);
		unk_0x77621132305B133B(&(uParam0->f_449), 1);
		unk_0x77621132305B133B(&Global_87448, *uParam0);
	}
}

void func_194(var uParam0)
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

void func_195(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_196(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_198(0))
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
		if (!func_143(iParam2))
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
			func_197(iParam0, iParam4);
		}
	}
	return 2;
}

void func_197(var uParam0, int iParam1)
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

int func_198(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_143(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_199()
{
	Global_91145 = 1;
}

void func_200(var uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 2))
			{
				func_69(uParam0, func_201(*uParam0));
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

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_218(18);
			break;
		
		case 1:
			return func_218(22);
			break;
		
		case 2:
			return func_218(40);
			break;
		
		case 3:
			return func_218(8);
			break;
		
		case 4:
			return func_218(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_202()
{
	return Global_69579;
}

int func_203(var uParam0)
{
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
	{
		func_193(uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_449, 0))
	{
		func_204(uParam0);
	}
	return 1;
}

void func_204(var uParam0)
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

void func_205(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		fVar0 = unk_0xB7A628320EFF8E47(uParam0->f_401, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
		if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
		{
			func_213(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xDCC86F723E82125E(Global_87448, *uParam0))
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 0))
			{
				if (func_212(uParam0))
				{
					if (unk_0xDCC86F723E82125E(Global_87448, *uParam0))
					{
						if (unk_0xDCC86F723E82125E(Global_87450, *uParam0))
						{
							func_207(uParam0);
						}
					}
					else
					{
						func_207(uParam0);
					}
				}
			}
			else
			{
				func_206(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xDCC86F723E82125E(Global_87448, *uParam0))
		{
			if (unk_0xDCC86F723E82125E(uParam0->f_449, 0))
			{
				if (unk_0xDCC86F723E82125E(uParam0->f_449, 1))
				{
					func_193(uParam0);
				}
				func_204(uParam0);
			}
		}
	}
}

void func_206(var uParam0)
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

void func_207(var uParam0)
{
	int iVar0;
	
	if (!unk_0xDCC86F723E82125E(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_211(uParam0);
		func_210(uParam0);
		func_208(uParam0);
		unk_0x59A0729D503ED758(&(uParam0->f_449), 1);
	}
}

void func_208(var uParam0)
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
			fVar2 = (unk_0xBBDA792448DB5A89((unk_0x531444754C426278(0, 65535) - 32767)) / 4000f);
			fVar3 = (unk_0xBBDA792448DB5A89((unk_0x531444754C426278(0, 65535) - 32767)) / 4000f);
			Var4 = { func_209(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
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

Vector3 func_209(var uParam0, var uParam1)
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

void func_210(var uParam0)
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

void func_211(var uParam0)
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
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
			unk_0x65960B4E2ADC9F6D(iVar1);
			unk_0x65960B4E2ADC9F6D(iVar3);
			func_8(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			unk_0xD013AC29829DDC02();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x7C38F93AF52620B1(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
	unk_0xD013AC29829DDC02();
	if (func_32(*uParam0, uParam0->f_1.f_210))
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

int func_212(var uParam0)
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

void func_213(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_214(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0xC785022A2AF03298(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * unk_0xD0FFB162F40A139C((90f - uParam0->f_404))), (fVar0 * unk_0x0BADBFA3B172435F((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_214(var uParam0)
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
			bVar2 = func_32(*uParam0, iVar1);
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
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
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
					Var6 = { func_209(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
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
		func_215(uParam0);
		func_33(uParam0);
		func_211(uParam0);
		unk_0x77621132305B133B(&(uParam0->f_449), 14);
	}
}

void func_215(var uParam0)
{
	unk_0x7C38F93AF52620B1(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x65960B4E2ADC9F6D(uParam0->f_415 + 1);
	unk_0xD013AC29829DDC02();
}

bool func_216(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_217(int iParam0)
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

int func_218(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_99.f_58[iParam0];
}

void func_219(var uParam0, int iParam1)
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

void func_220(var uParam0, var uParam1)
{
	func_229(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_228(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_227(uParam0, 20f, 22f, 28f);
	func_226(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_225(uParam0, 1, "CRW_GM", "");
	func_225(uParam0, 4, "CRW_NR", "");
	func_225(uParam0, 6, "CRW_PH", "");
	func_225(uParam0, 7, "CRW_CF", "");
	func_225(uParam0, 8, "CRW_ET", "");
	func_225(uParam0, 9, "CRW_KD", "");
	func_225(uParam0, 10, "CRW_PM", "CRM_PM");
	func_225(uParam0, 12, "CRW_RL", "CRM_RL");
	func_224(uParam0, 0, 0, 0, 0);
	func_224(uParam0, 6, 0, 0, 0);
	func_224(uParam0, 1, 0, 0, 0);
	func_224(uParam0, 3, 1, 0, 0);
	func_224(uParam0, 11, 2, 0, 0);
	func_224(uParam0, 5, 3, 0, 0);
	func_224(uParam0, 9, 3, 0, 0);
	func_224(uParam0, 2, 4, 0, 0);
	func_224(uParam0, 7, 9, 0, 0);
	func_224(uParam0, 10, 10, 0, 0);
	func_223(uParam0, 2, 2, "H_TD_SEC");
	func_223(uParam0, 2, 2, "H_TD_PHOTO");
	func_223(uParam0, 2, 5, "H_TD_PLAN");
	func_223(uParam0, 2, 6, "H_TD_CREW");
	func_223(uParam0, 7, 11, "H_TD_CARB");
	func_223(uParam0, 8, 9, "H_TD_BUGS");
	func_223(uParam0, 8, 10, "H_TD_GAS");
	func_222(uParam0, 0, 203, 74);
	func_222(uParam0, 1, 368, 181);
	func_222(uParam0, 1, 556, 189);
	func_222(uParam0, 2, 690, 63);
	func_222(uParam0, 2, 673, 308);
	func_222(uParam0, 2, 671, 406);
	func_222(uParam0, 3, 245, 244);
	func_222(uParam0, 4, 70, 68);
	func_221(uParam0, 0, "JHP12", 214, 165, 1);
	func_221(uParam0, 0, "JHP13", 254, 46, 1);
	func_221(uParam0, 0, "JHP14", 70, 97, 1);
	func_221(uParam0, 0, "JHP15", 254, 275, 1);
	func_221(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_221(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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

void func_222(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_223(var uParam0, int iParam1, int iParam2, char* sParam3)
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

void func_224(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_225(var uParam0, int iParam1, char* sParam2, char* sParam3)
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

void func_226(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
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

void func_227(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_228(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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

void func_229(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param14)
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

int func_230(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_231(int iParam0)
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

void func_232()
{
	if (unk_0xDEDB719756F0580C("JH_1_MCS_4P2") || unk_0xDEDB719756F0580C("JH_1_MCS_4_P1_ALT1"))
	{
		unk_0xCDBEE0F3B4A74754();
	}
	func_106(16, 0);
	func_106(17, 0);
	func_106(18, 0);
	func_83(1, 0, 0);
	func_83(2, 0, 0);
	unk_0x9DBF08025225340D(uLocal_733, 0);
	if (iLocal_738 != -1)
	{
		if (unk_0xDA33F6DC6574B8DD(iLocal_738))
		{
			unk_0x78DFC4B56BCF3DA9(iLocal_738);
		}
	}
	unk_0xE7E852B69C980E80();
	unk_0x7AF3AE9D12A61928(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 1, 0);
	unk_0x60B57BC5E51D2074(5);
	if (iLocal_45 != -1)
	{
		func_153(&iLocal_45);
	}
	while (!func_203(&Local_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xA4E0D8FD51F2A6F7();
}

