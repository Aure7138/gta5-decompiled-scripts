#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x9CEB376419A71A96(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x7DA173D4FD42F36B(uLocal_2, 1))
	{
		if (!unk_0x7DA173D4FD42F36B(uLocal_2, 0))
		{
			if (unk_0xC1EDB61CE0A4B94E(uLocal_0))
			{
				if (unk_0x1B6292EA51632C25(uLocal_0, 0))
				{
					unk_0xB7E6C6AE18F1EDA6(uLocal_0, 0, 1);
					unk_0x93F4FB97D1F2E7A1(uLocal_0, 1);
					unk_0x858D1F9702879828(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xC1EDB61CE0A4B94E(uLocal_1))
					{
						unk_0xB7E6C6AE18F1EDA6(uLocal_1, 0, 1);
						unk_0x93F4FB97D1F2E7A1(uLocal_1, 1);
						unk_0x858D1F9702879828(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xE27C8E42A97895CF(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x1B6292EA51632C25(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xE27C8E42A97895CF(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xE72EEEBA742753B0(uLocal_0))
				{
					unk_0xE27C8E42A97895CF(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xE27C8E42A97895CF(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x768B37F1452D4834(&uLocal_0);
	unk_0x6C430D273FC2EC35(&uLocal_1);
	unk_0xF5DF8F3392CDD07B();
}

