#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x2EC83C7ACA23E8A4(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x08BA6DD398CA197C(uLocal_2, 1))
	{
		if (!unk_0x08BA6DD398CA197C(uLocal_2, 0))
		{
			if (unk_0xD3FACCDA4D66AEAD(uLocal_0))
			{
				if (unk_0x1F1B2B6E500380C5(uLocal_0, 0))
				{
					unk_0x7B17650F15A8876D(uLocal_0, 0, 1);
					unk_0xBB21B5C3111E5F85(uLocal_0, 1);
					unk_0xC2407AC016215F2D(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xD3FACCDA4D66AEAD(uLocal_1))
					{
						unk_0x7B17650F15A8876D(uLocal_1, 0, 1);
						unk_0xBB21B5C3111E5F85(uLocal_1, 1);
						unk_0xC2407AC016215F2D(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x88B0F0DC270164B7(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x1F1B2B6E500380C5(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x88B0F0DC270164B7(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x7DB334F5F834726A(uLocal_0))
				{
					unk_0x88B0F0DC270164B7(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x615DE34FC732CF11(&uLocal_0);
	unk_0x811BE251B0B13760(&uLocal_1);
	unk_0x78C587487CD40B92();
}

