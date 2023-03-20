#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x2C897F101BA20806(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x889D01384B54BCE3(uLocal_2, 1))
	{
		if (!unk_0x889D01384B54BCE3(uLocal_2, 0))
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_0))
			{
				if (unk_0xECFECDAD51A6184F(uLocal_0, 0))
				{
					unk_0x7B9576B4E099FB1F(uLocal_0, 0, 1);
					unk_0x3CC3106305C40A28(uLocal_0, 1);
					unk_0x67565210B706E956(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x538DF9E5B1DF01EB(uLocal_1))
					{
						unk_0x7B9576B4E099FB1F(uLocal_1, 0, 1);
						unk_0x3CC3106305C40A28(uLocal_1, 1);
						unk_0x67565210B706E956(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xD0E2BFCE93AE3ABD(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xECFECDAD51A6184F(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xD0E2BFCE93AE3ABD(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x98666858610065B8(uLocal_0))
				{
					unk_0xD0E2BFCE93AE3ABD(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xD0E2BFCE93AE3ABD(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x3A3C5A6572B3C611(&uLocal_0);
	unk_0x5317ED1B1D4BC2F3(&uLocal_1);
	unk_0x82706E6C897B0FA1();
}

