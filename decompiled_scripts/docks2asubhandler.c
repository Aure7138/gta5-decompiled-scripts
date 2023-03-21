#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xD4BE58A7E3E102AC(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xA2BC31158C8CEFD2(uLocal_2, 1))
	{
		if (!unk_0xA2BC31158C8CEFD2(uLocal_2, 0))
		{
			if (unk_0xD4B321D9096B01FC(uLocal_0))
			{
				if (unk_0xD960230552BC4165(uLocal_0, 0))
				{
					unk_0xE5C667CF3B4642D2(uLocal_0, 0, 1);
					unk_0x860A5CC30A0EF207(uLocal_0, 1);
					unk_0x3427075D3608A3BB(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xD4B321D9096B01FC(uLocal_1))
					{
						unk_0xE5C667CF3B4642D2(uLocal_1, 0, 1);
						unk_0x860A5CC30A0EF207(uLocal_1, 1);
						unk_0x3427075D3608A3BB(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xA1E7A40E1F56E511(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0xD960230552BC4165(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xA1E7A40E1F56E511(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x62E95D2FED28E41C(uLocal_0))
				{
					unk_0xA1E7A40E1F56E511(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xF25956700ADFD77F(&uLocal_0);
	unk_0xEADD2B962AE1DE7D(&uLocal_1);
	unk_0x9C9E32388A7886A2();
}

