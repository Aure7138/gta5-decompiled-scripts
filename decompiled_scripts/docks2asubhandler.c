#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x4B4BD87E3D30C50D(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xB56FEBC510E7E9DE(uLocal_2, 1))
	{
		if (!unk_0xB56FEBC510E7E9DE(uLocal_2, 0))
		{
			if (unk_0x1F2158D615BC4B25(uLocal_0))
			{
				if (unk_0x968EA16107097324(uLocal_0, 0))
				{
					unk_0x8D429A827A931AC9(uLocal_0, 0, 1);
					unk_0xB92C428B448B51A4(uLocal_0, 1);
					unk_0x498A6382FA0B8833(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x1F2158D615BC4B25(uLocal_1))
					{
						unk_0x8D429A827A931AC9(uLocal_1, 0, 1);
						unk_0xB92C428B448B51A4(uLocal_1, 1);
						unk_0x498A6382FA0B8833(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x573691DB812DC8AA(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0x968EA16107097324(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x573691DB812DC8AA(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xF74B69DFD85D7CCE(uLocal_0))
				{
					unk_0x573691DB812DC8AA(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x573691DB812DC8AA(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xB84D4C251623B60C(&uLocal_0);
	unk_0x98A0065C157ED63F(&uLocal_1);
	unk_0x2F798BA2098FDADE();
}

